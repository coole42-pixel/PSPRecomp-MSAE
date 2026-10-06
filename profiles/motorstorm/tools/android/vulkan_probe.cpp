// Independently written capability probe. No game files or renderer required.
#include <vulkan/vulkan.h>
#include <android/native_window.h>
#include <dlfcn.h>
#include <unistd.h>
#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace motorstorm::android {
static std::string json_string(const char *str) {
    std::ostringstream out; out << '"';
    for (const unsigned char *p = reinterpret_cast<const unsigned char *>(str); *p; ++p) {
        if (*p == '"' || *p == '\\') out << '\\' << *p;
        else if (*p < 32) out << "\\u" << std::hex << std::setw(4) << std::setfill('0') << int(*p) << std::dec;
        else out << *p;
    }
    out << '"'; return out.str();
}
std::string vulkan_probe(void *loader, ANativeWindow *window) {
    const auto gpa = reinterpret_cast<PFN_vkGetInstanceProcAddr>(dlsym(loader, "vkGetInstanceProcAddr"));
    if (!gpa) throw std::runtime_error("vkGetInstanceProcAddr missing");
    const auto create = reinterpret_cast<PFN_vkCreateInstance>(gpa(nullptr, "vkCreateInstance"));
    const auto version = reinterpret_cast<PFN_vkEnumerateInstanceVersion>(gpa(nullptr, "vkEnumerateInstanceVersion"));
    uint32_t api = VK_API_VERSION_1_0; if (version) version(&api);
    const char *extensions[]{"VK_KHR_surface", "VK_KHR_android_surface"};
    VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app.pApplicationName = "MotorStorm capability probe";
    app.apiVersion = std::min(api, uint32_t(VK_API_VERSION_1_3));
    VkInstanceCreateInfo ci{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO}; ci.pApplicationInfo = &app;
    ci.enabledExtensionCount = window ? 2 : 0; ci.ppEnabledExtensionNames = extensions;
    VkInstance instance{};
    const auto result = create(&ci, nullptr, &instance);
    if (result != VK_SUCCESS) throw std::runtime_error("vkCreateInstance=" + std::to_string(result));
#define LOAD(name) const auto name = reinterpret_cast<PFN_##name>(gpa(instance, #name))
    LOAD(vkDestroyInstance); LOAD(vkEnumeratePhysicalDevices); LOAD(vkGetPhysicalDeviceProperties2);
    LOAD(vkGetPhysicalDeviceFeatures2); LOAD(vkEnumerateDeviceExtensionProperties);
    LOAD(vkGetPhysicalDeviceQueueFamilyProperties); LOAD(vkGetPhysicalDeviceFormatProperties);
    LOAD(vkCreateDevice); LOAD(vkDestroyDevice); LOAD(vkGetPhysicalDeviceSurfacePresentModesKHR);
    LOAD(vkGetPhysicalDeviceSurfaceSupportKHR); LOAD(vkCreateAndroidSurfaceKHR); LOAD(vkDestroySurfaceKHR);
#undef LOAD
    struct Cleanup { VkInstance i; PFN_vkDestroyInstance f; ~Cleanup(){f(i, nullptr);} } cleanup{instance, vkDestroyInstance};
    VkSurfaceKHR surface{};
    if (window) {
        VkAndroidSurfaceCreateInfoKHR sc{VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR}; sc.window = window;
        if (vkCreateAndroidSurfaceKHR(instance, &sc, nullptr, &surface) != VK_SUCCESS)
            throw std::runtime_error("probe surface creation failed");
    }
    uint32_t count{}; vkEnumeratePhysicalDevices(instance, &count, nullptr);
    std::vector<VkPhysicalDevice> devices(count); vkEnumeratePhysicalDevices(instance, &count, devices.data());
    if (devices.empty()) {
        if (surface) vkDestroySurfaceKHR(instance, surface, nullptr);
        throw std::runtime_error("No Vulkan physical device exposed by this driver");
    }
    std::ostringstream out;
    out << "{\"schema\":1,\"page_size\":" << sysconf(_SC_PAGESIZE) << ",\"loader_api\":" << api << ",\"devices\":[";
    bool first = true;
    for (auto device : devices) {
        if (!first) out << ','; first = false;
        uint32_t n{}; vkEnumerateDeviceExtensionProperties(device, nullptr, &n, nullptr);
        std::vector<VkExtensionProperties> exts(n); vkEnumerateDeviceExtensionProperties(device, nullptr, &n, exts.data());
        auto has = [&](const char *name){return std::any_of(exts.begin(), exts.end(), [&](auto &e){return std::string(e.extensionName)==name;});};
        VkPhysicalDeviceDriverProperties driver{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES};
        VkPhysicalDeviceSubgroupProperties subgroup{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES};
        VkPhysicalDeviceProperties2 properties{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2};
        properties.pNext = &subgroup;
        if (has("VK_KHR_driver_properties")) subgroup.pNext = &driver;
        vkGetPhysicalDeviceProperties2(device, &properties);
        VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT interlock{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT};
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT order{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT};
        VkPhysicalDeviceShaderFloat16Int8Features half{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES};
        VkPhysicalDeviceDescriptorIndexingFeatures indexing{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES};
        VkPhysicalDeviceTimelineSemaphoreFeatures timeline{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES};
        VkPhysicalDeviceDynamicRenderingFeatures dynamic{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES};
        VkPhysicalDeviceFeatures2 features{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
        void **tail = &features.pNext;
        auto chain = [&](auto &f){*tail = &f; tail = &f.pNext;};
        if(has("VK_EXT_fragment_shader_interlock")) chain(interlock);
        if(has("VK_EXT_rasterization_order_attachment_access") || has("VK_ARM_rasterization_order_attachment_access")) chain(order);
        const auto &p = properties.properties;
        if(p.apiVersion >= VK_API_VERSION_1_2 || has("VK_KHR_shader_float16_int8")) chain(half);
        if(p.apiVersion >= VK_API_VERSION_1_2 || has("VK_EXT_descriptor_indexing")) chain(indexing);
        if(p.apiVersion >= VK_API_VERSION_1_2 || has("VK_KHR_timeline_semaphore")) chain(timeline);
        if(p.apiVersion >= VK_API_VERSION_1_3 || has("VK_KHR_dynamic_rendering")) chain(dynamic);
        vkGetPhysicalDeviceFeatures2(device, &features);
        out << "{\"name\":" << json_string(p.deviceName) << ",\"api\":" << p.apiVersion
            << ",\"driver_version\":" << p.driverVersion << ",\"driver_name\":" << json_string(driver.driverName)
            << ",\"driver_info\":" << json_string(driver.driverInfo) << ",\"vendor_id\":" << p.vendorID << ",\"device_id\":" << p.deviceID;
        out << ",\"features\":{\"pixel_interlock\":" << interlock.fragmentShaderPixelInterlock
            << ",\"ordered_color_attachment\":" << order.rasterizationOrderColorAttachmentAccess
            << ",\"geometry_shader\":" << features.features.geometryShader << ",\"clip_distance\":" << features.features.shaderClipDistance
            << ",\"fragment_stores\":" << features.features.fragmentStoresAndAtomics << ",\"float16\":" << half.shaderFloat16
            << ",\"int8\":" << half.shaderInt8 << ",\"runtime_descriptor_array\":" << indexing.runtimeDescriptorArray
            << ",\"nonuniform_sampled_image\":" << indexing.shaderSampledImageArrayNonUniformIndexing
            << ",\"timeline_semaphore\":" << timeline.timelineSemaphore << ",\"dynamic_rendering\":" << dynamic.dynamicRendering << '}';
        out << ",\"subgroup\":{\"size\":" << subgroup.subgroupSize << ",\"stages\":" << subgroup.supportedStages
            << ",\"operations\":" << subgroup.supportedOperations << '}';
        out << ",\"limits\":{\"max_storage_buffer_range\":" << p.limits.maxStorageBufferRange
            << ",\"max_color_attachments\":" << p.limits.maxColorAttachments << ",\"timestamp_period_ns\":" << p.limits.timestampPeriod
            << ",\"timestamp_compute_and_graphics\":" << p.limits.timestampComputeAndGraphics << '}';
        VkFormatProperties fp{}; vkGetPhysicalDeviceFormatProperties(device, VK_FORMAT_R32_UINT, &fp);
        out << ",\"r32_uint_optimal_features\":" << fp.optimalTilingFeatures;
        vkGetPhysicalDeviceQueueFamilyProperties(device, &n, nullptr);
        std::vector<VkQueueFamilyProperties> queues(n); vkGetPhysicalDeviceQueueFamilyProperties(device, &n, queues.data());
        out << ",\"queues\":["; uint32_t graphics = UINT32_MAX;
        for(uint32_t q=0;q<n;++q){
            if(q)out << ','; VkBool32 present{};
            if(surface) vkGetPhysicalDeviceSurfaceSupportKHR(device,q,surface,&present);
            out << "{\"flags\":" << queues[q].queueFlags << ",\"count\":" << queues[q].queueCount
                << ",\"timestamp_bits\":" << queues[q].timestampValidBits << ",\"present\":" << present << '}';
            if((queues[q].queueFlags & VK_QUEUE_GRAPHICS_BIT) && (present || !surface)) graphics=q;
        }
        out << "],\"present_modes\":";
        if(surface){
            vkGetPhysicalDeviceSurfacePresentModesKHR(device,surface,&n,nullptr);
            std::vector<VkPresentModeKHR> modes(n); vkGetPhysicalDeviceSurfacePresentModesKHR(device,surface,&n,modes.data());
            out << '['; for(uint32_t i=0;i<n;++i){if(i)out << ',';out << modes[i];}out << ']';
        } else out << "null";
        float priority=1; VkDeviceQueueCreateInfo qi{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
        qi.queueFamilyIndex=graphics;qi.queueCount=1;qi.pQueuePriorities=&priority;
        VkDeviceCreateInfo dc{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO}; dc.queueCreateInfoCount=1;dc.pQueueCreateInfos=&qi;
        VkDevice logical{}; const auto dr=graphics==UINT32_MAX?VK_ERROR_FEATURE_NOT_PRESENT:vkCreateDevice(device,&dc,nullptr,&logical);
        out << ",\"minimal_device_result\":" << dr;
        if (dr != VK_SUCCESS) {
            if (surface) vkDestroySurfaceKHR(instance, surface, nullptr);
            throw std::runtime_error("vkCreateDevice=" + std::to_string(dr));
        }
        if(logical)vkDestroyDevice(logical,nullptr);
        out << ",\"extensions\":[";
        for(size_t i=0;i<exts.size();++i){if(i)out << ',';out << json_string(exts[i].extensionName);} out << "]}";
    }
    out << "]}";
    if(surface)vkDestroySurfaceKHR(instance,surface,nullptr);
    return out.str();
}
}
#ifdef MOTORSTORM_PROBE_MAIN
int main(){
    void *loader=dlopen("libvulkan.so",RTLD_NOW|RTLD_LOCAL);
    if(!loader){std::fprintf(stderr,"%s\n",dlerror());return 1;}
    try{std::puts(motorstorm::android::vulkan_probe(loader,nullptr).c_str());}
    catch(const std::exception &e){std::fprintf(stderr,"%s\n",e.what());dlclose(loader);return 1;}
    dlclose(loader);return 0;
}
#endif
