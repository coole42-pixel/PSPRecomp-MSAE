// Native-resolution PSP pixel operations. ROV ordering lets the hardware
// rasterizer implement stencil-in-framebuffer-alpha and bit write masks exactly,
// including operations D3D12's fixed blend unit cannot express.
// Compiled at build time by fxc (see CMakeLists.txt, motorstorm_shaders); the
// renderer embeds the bytecode, so no shader compiler runs at startup.
// X4000: fxc's false "uninitialized variable" for functions with early
// returns. X3556: signed modulus is needed for negative wrap coordinates.
// X3579: groupshared declared for the compute entry points is ignored (with a
// warning) when the same file is compiled for the graphics stages.
#pragma warning(disable : 3556 3579 4000)
// Vulkan (DXC -spirv): every register gets an explicit descriptor binding.
// Set 0 is a push-descriptor set updated per draw/dispatch (the D3D12 root
// views and tables); set 1 holds the eight immutable samplers. Under fxc the
// annotations vanish and the D3D12 root signature applies unchanged.
// globallycoherent: on Vulkan, consecutive draws are not separated by
// barriers; fragment-shader interlock orders their pixel critical sections
// and coherent accesses make each draw's packed writes visible to the next.
// DXC's automatic ROV lowering scatters interlock pairs over early returns, so
// the SPIR-V build declares plain storage buffers and brackets the single
// read-modify-write call in PS with one explicit begin/end pair
// (SPV_EXT_fragment_shader_interlock, pixel-ordered) that every invocation
// executes exactly once in uniform control flow.
#if defined(__spirv__)
#define VK_BIND(slot, group) [[vk::binding(slot, group)]]
#define VK_COHERENT globallycoherent
#define PIXEL_TARGET RWStructuredBuffer<uint>
#if defined(MOTORSTORM_VK_ATOMIC)
#define PS_INTERLOCK_MODE
#define PS_INTERLOCK_BEGIN lockPixel(pixel)
#define PS_INTERLOCK_END unlockPixel(pixel)
#elif defined(MOTORSTORM_VK_ATTACHMENT)
[[vk::binding(9, 0)]] [[vk::input_attachment_index(0)]] SubpassInput<uint> attachmentColor;
[[vk::binding(10, 0)]] [[vk::input_attachment_index(1)]] SubpassInput<uint> attachmentDepth;
static uint currentColor, currentDepth;
struct PixelResult { uint color : SV_Target0; uint depth : SV_Target1; };
#define COLOR_AT(index) currentColor
#define DEPTH_AT(index) currentDepth
#define PS_INTERLOCK_MODE
#define PS_INTERLOCK_BEGIN
#define PS_INTERLOCK_END
#elif defined(MOTORSTORM_VK_HARDWARE)
// Fixed-function pixel shaders. No fragment interlock and no subpass load.
#define PS_INTERLOCK_MODE
#define PS_INTERLOCK_BEGIN
#define PS_INTERLOCK_END
#else
[[vk::ext_extension("SPV_EXT_fragment_shader_interlock")]] [[vk::ext_capability(5378)]]
[[vk::ext_instruction(5364)]] void beginInvocationInterlock();
[[vk::ext_extension("SPV_EXT_fragment_shader_interlock")]] [[vk::ext_capability(5378)]]
[[vk::ext_instruction(5365)]] void endInvocationInterlock();
#define PS_INTERLOCK_MODE vk::ext_execution_mode(5366)
#define PS_INTERLOCK_BEGIN beginInvocationInterlock()
#define PS_INTERLOCK_END endInvocationInterlock()
#endif
#else
#define VK_BIND(slot, group)
#define VK_COHERENT
#define PIXEL_TARGET RasterizerOrderedStructuredBuffer<uint>
#define PS_INTERLOCK_MODE
#define PS_INTERLOCK_BEGIN
#define PS_INTERLOCK_END
#endif
#if !defined(MOTORSTORM_VK_ATTACHMENT)
#define COLOR_AT(index) colorTarget[index]
#define DEPTH_AT(index) depthTarget[index]
#endif
VK_BIND(0, 0) cbuffer DrawState : register(b0) {
    uint4 commands[64];
    float4 clipRows[4];
    float4 viewZ, viewportScale, viewportCenter;
    uint4 surface; // width, height, color stride, depth stride
    uint4 mode; // format, hardware transform, clip/isPoint flags, valid depth
    uint4 feedback; // use, base index, texture stride, packed format
    uint4 render; // raster scale in half units (2 = 1x, 3 = 1.5x), output scale, AA mode, flags (bit0 enhanced filtering, bit1 32-bit colour, bit2 tag HUD pixels in the depth word, bit3 soft particle with its fade range in bits 8-23, bits 24-27 the camera id written into the depth word)
    uint4 replace; // texture pack: active, covered PSP width, covered rows
    float4 uvRange; // enhanced filtering: texel range of the draw (min uv, max uv); 0 = unknown
    float4 wide; // inverse horizontal aspect scale, HUD centre, active, 1 = the game already renders the wider 3D view
};
uint C(uint i) { return commands[i >> 2][i & 3]; }
// Native <-> raster mapping (see raster_extent in motorstorm_gpu.cpp).
float rasterScale() { return render.x*0.5; }
uint rasterExtent(uint native) { return native*render.x/2; }
uint nativeOf(uint raster) { return (2*raster+1)/render.x; }
VK_BIND(1, 0) VK_COHERENT PIXEL_TARGET colorTarget : register(u0);
#if defined(MOTORSTORM_VK_ATOMIC)
[[vk::binding(11, 0)]] globallycoherent RWStructuredBuffer<uint> pixelLocks : register(u6);
void lockPixel(uint2 pixel) {
    uint2 clamped = uint2(min(pixel.x, surface.z - 1), min(pixel.y, surface.y - 1));
    uint index = clamped.y * surface.z + clamped.x;
    uint seen;
    [loop] do { InterlockedCompareExchange(pixelLocks[index], 0, 1, seen); } while (seen != 0);
    AllMemoryBarrier();
}
void unlockPixel(uint2 pixel) {
    AllMemoryBarrier();
    uint2 clamped = uint2(min(pixel.x, surface.z - 1), min(pixel.y, surface.y - 1));
    uint index = clamped.y * surface.z + clamped.x;
    uint seen;
    InterlockedExchange(pixelLocks[index], 0, seen);
}
#endif
// 16-bit PSP depth in the low half of each word. Bit 16 (kHudTag) is set by
// through-mode draws (the HUD) while render.w bit 2 is on; the post chain reads
// it from the depth snapshot to keep the HUD out of the colour grade. Guest
// readback keeps only the low 16 bits, so the game never sees the tag; every
// depth write replaces it, and the game's per-frame depth clear removes it.
static const uint kHudTag = 0x10000u;
VK_BIND(2, 0) VK_COHERENT PIXEL_TARGET depthTarget : register(u1);
VK_BIND(3, 0) Texture2D<float4> textureImage : register(t0);
VK_BIND(0, 1) SamplerState samplerWrapWrap : register(s0);
VK_BIND(1, 1) SamplerState samplerClampWrap : register(s1);
VK_BIND(2, 1) SamplerState samplerWrapClamp : register(s2);
VK_BIND(3, 1) SamplerState samplerClampClamp : register(s3);
VK_BIND(4, 1) SamplerState anisoWrapWrap : register(s4);
VK_BIND(5, 1) SamplerState anisoClampWrap : register(s5);
VK_BIND(6, 1) SamplerState anisoWrapClamp : register(s6);
VK_BIND(7, 1) SamplerState anisoClampClamp : register(s7);
VK_BIND(5, 0) StructuredBuffer<uint> feedbackImage : register(t2);
VK_BIND(7, 0) Texture2D<float4> replacementImage : register(t3);
struct Input {
    float3 position : POSITION;
    uint color : COLOR0;
    uint secondary : COLOR1;
    float3 uvq : TEXCOORD0;
    float fog : TEXCOORD1;
};
float4 channels(uint c) { return float4(c & 255, (c >> 8) & 255, (c >> 16) & 255, c >> 24); }
uint4 bytes(uint c) { return uint4(c & 255, (c >> 8) & 255, (c >> 16) & 255, c >> 24); }
uint pack(uint4 c) { return c.x | (c.y << 8) | (c.z << 16) | (c.w << 24); }
// 32-bit colour in 16-bit targets ([enhancements] color_depth = 32, racing
// only). The low 16 bits stay the exact PSP pixel that guest readback takes;
// the high bits keep the colour bits the 16-bit format drops, so blending and
// display see full 8-bit channels. Bit 31 marks them, bits 28-29 hold the
// format they were written in (a 16-bit target may be read as another format).
uint3 droppedBits(uint format) { return format==0 ? uint3(3,2,3) : format==1 ? uint3(3,3,3) : uint3(4,4,4); }
uint extendFrame(uint packed, uint3 rgb, uint format) {
    uint3 k=droppedBits(format), low=rgb&((1u<<k)-1);
    return packed | (low.r<<16) | (low.g<<(16+k.r)) | (low.b<<(16+k.r+k.g)) | (format<<28) | 0x80000000u;
}
uint unpackColor(uint c, uint format) {
    if (format == 3) return c;
    if ((c>>31)!=0 && ((c>>28)&3)==format) {
        uint3 k=droppedBits(format), mask=(1u<<k)-1;
        uint e=c>>16;
        uint3 low=uint3(e&mask.r,(e>>k.r)&mask.g,(e>>(k.r+k.g))&mask.b);
        uint3 high=format==0 ? uint3(c&31,(c>>5)&63,(c>>11)&31)
                 : format==1 ? uint3(c&31,(c>>5)&31,(c>>10)&31) : uint3(c&15,(c>>4)&15,(c>>8)&15);
        uint a=format==0 ? 255 : format==1 ? ((c>>15)&1)*255 : ((c>>12)&15)*17;
        return pack(uint4((high<<k)|low,a));
    }
    c &= 0xFFFF;
    if (format == 0) {
        uint3 rgb=uint3(c&31,(c>>5)&63,(c>>11)&31);
        return pack(uint4((rgb.x<<3)|(rgb.x>>2),(rgb.y<<2)|(rgb.y>>4),(rgb.z<<3)|(rgb.z>>2),255));
    }
    if (format == 1) {
        uint3 rgb=uint3(c&31,(c>>5)&31,(c>>10)&31);
        return pack(uint4((rgb<<3)|(rgb>>2),(c>>15)*255));
    }
    return pack(uint4(c & 15, (c >> 4)&15, (c >> 8)&15, (c >> 12)&15)*17);
}
uint unpackFrame(uint c) { return unpackColor(c,mode.x); }
uint packFrame(uint rgba) {
    uint4 c = bytes(rgba);
    if (mode.x == 3) return rgba;
    uint packed;
    if (mode.x == 0) packed = (c.x >> 3) | ((c.y >> 2) << 5) | ((c.z >> 3) << 11);
    else if (mode.x == 1) packed = (c.x >> 3) | ((c.y >> 3) << 5) | ((c.z >> 3) << 10) | ((c.w >> 7) << 15);
    else packed = (c.x >> 4) | ((c.y >> 4) << 4) | ((c.z >> 4) << 8) | ((c.w >> 4) << 12);
    return (render.w&2)!=0 ? extendFrame(packed,c.rgb,mode.x) : packed;
}
struct Varying {
    float4 position : SV_Position;
    noperspective float4 color : COLOR0;
    noperspective float3 secondary : COLOR1;
    float3 uvq : TEXCOORD0;
    noperspective float2 depthFog : TEXCOORD1;
    float4 clipXY : SV_ClipDistance0;
    float2 clipZ : SV_ClipDistance1;
};
Varying VS(Input i) {
    Varying o;
    float4 p = float4(i.position, 1);
    float4 clip = mode.y ? float4(dot(clipRows[0],p),dot(clipRows[1],p),dot(clipRows[2],p),dot(clipRows[3],p)) : p;
    float w = mode.y ? clip.w : 1;
    // Widen the horizontal frustum before clipping; vertical FOV stays put.
    if(wide.z!=0 && mode.y && wide.w==0) clip.x*=wide.x;
    float2 xy = mode.y ? clip.xy * viewportScale.xy + viewportCenter.xy * w : i.position.xy;
    if(wide.z!=0) {
        if(!mode.y) xy.x=wide.y+(xy.x-wide.y)*wide.x;
        else if(wide.w==0) xy.x+=(wide.y-viewportCenter.x)*(1-wide.x)*w;
    }
    bool isPoint = (mode.z&2)!=0;
    if(isPoint) xy=(floor(xy/w)+0.5)*w;
    xy *= rasterScale();
    o.position = float4(xy.x * (2.0/surface.x) - w, w - xy.y * (2.0/surface.y), 0.5*w, w);
    o.clipXY = mode.y && !isPoint ? float4(w+clip.x,w-clip.x,w+clip.y,w-clip.y) : 1;
    o.clipZ = mode.y && (mode.z&1) && !isPoint ? float2(w+clip.z,w-clip.z) : 1;
    float z = mode.y ? clip.z/w * viewportScale.z + viewportCenter.z : i.position.z;
    float fog = mode.y && (C(0x1f)&1) ? (dot(viewZ,p)+asfloat(C(0xcd)<<8))*asfloat(C(0xce)<<8) : i.fog;
    o.depthFog = float2(z,fog);
    o.color = channels(i.color); o.secondary = channels(i.secondary).rgb;
    o.uvq = i.uvq;
    return o;
}
[maxvertexcount(4)]
void PointGS(point Varying inputVertices[1], inout TriangleStream<Varying> outputVertices) {
    Varying a=inputVertices[0];
    float2 radius=rasterScale()/float2(surface.xy)*a.position.w;
    if(wide.z!=0) radius.x*=wide.x;
    Varying v=a; v.position.xy=a.position.xy+radius*float2(-1,1); outputVertices.Append(v);
    v=a; v.position.xy=a.position.xy+radius*float2(1,1); outputVertices.Append(v);
    v=a; v.position.xy=a.position.xy+radius*float2(-1,-1); outputVertices.Append(v);
    v=a; v.position.xy=a.position.xy+radius*float2(1,-1); outputVertices.Append(v);
    outputVertices.RestartStrip();
}
// One instance per point, six vertices per quad. No geometry stage on mobile.
Varying PointVS(Input i, uint corner : SV_VertexID) {
    Varying o=VS(i);
    static const float2 corners[6]={float2(-1,1),float2(1,1),float2(-1,-1),float2(-1,-1),float2(1,1),float2(1,-1)};
    float2 radius=rasterScale()/float2(surface.xy)*o.position.w;
    if(wide.z!=0) radius.x*=wide.x;
    o.position.xy+=radius*corners[corner];
    return o;
}
bool compare(uint v, uint r, uint f) {
    f &= 7;
    if (f==0) return false; if(f==1) return true;
    if(f==2) return v==r; if(f==3) return v!=r;
    if(f==4) return v<r; if(f==5) return v<=r;
    if(f==6) return v>r; return v>=r;
}
uint stencilOp(uint op, uint old) {
    uint maximum = mode.x == 0 ? 0 : 255;
    uint step = mode.x == 1 ? 255 : mode.x == 2 ? 17 : 1;
    op &= 7;
    if(op==1) return 0; if(op==2) return (C(0xdc)>>8)&255;
    if(op==3) return old ^ maximum;
    if(op==4) return min(maximum,old+step);
    if(op==5) return old>=step ? old-step : 0;
    return old;
}
int wrap(int x, uint width, bool clampAxis) {
    if(clampAxis) return clamp(x,0,int(width)-1);
    if((width&(width-1))==0) return x&(int(width)-1);
    int value=x%int(width); return value<0 ? value+int(width) : value;
}
uint4 texel(int2 p, uint level) {
    uint w,h,n;
    if(feedback.x) {
        w=1u<<(C(0xb8)&15); h=1u<<((C(0xb8)>>8)&15);
        if(feedback.x==2) { w=rasterExtent(w); h=rasterExtent(h); }
    }
    else textureImage.GetDimensions(level,w,h,n);
    p = int2(wrap(p.x,w,(C(0xc7)&1)!=0),wrap(p.y,h,(C(0xc7)&256)!=0));
    if(feedback.x==3) {
        uint imageWidth,imageHeight,imageLevels;
        textureImage.GetDimensions(0,imageWidth,imageHeight,imageLevels);
        uint stride=max(feedback.z,1);
        int2 pixel=int2(feedback.y%stride,feedback.y/stride)+p;
        pixel=clamp(pixel,int2(0,0),int2(max(imageWidth,1),max(imageHeight,1))-1);
        return uint4(saturate(textureImage.Load(int3(pixel,0)))*255+0.5);
    }
    if(feedback.x) return bytes(unpackColor(feedbackImage[feedback.y+p.y*feedback.z+p.x],feedback.w));
    return uint4(textureImage.Load(int3(p,level))*255+0.5);
}
uint4 sampleLevel(float2 uv, uint level, bool filterLinear) {
    uv /= float(1u<<level);
    if(!filterLinear) return texel(int2(floor(uv)),level);
    int2 fixedUV = int2(floor((uv-0.5)*16));
    int2 p = fixedUV >> 4; uint2 f = uint2(fixedUV)&15;
    if(!feedback.x) {
        uint w,h,n; textureImage.GetDimensions(level,w,h,n);
        if((w&(w-1))==0 && (h&(h-1))==0) {
            bool clampU=(C(0xc7)&1)!=0, clampV=(C(0xc7)&256)!=0;
            // Preserve PSP four-bit filter weights, including the edge where
            // clamp must duplicate a texel rather than shift its neighbor.
            int2 bounded=int2(clampU ? clamp(p.x,-1,int(w)-1) : wrap(p.x,w,false),
                              clampV ? clamp(p.y,-1,int(h)-1) : wrap(p.y,h,false));
            float2 normalized=(float2(bounded)+float2(f)/16+0.5)/float2(w,h);
            float4 filtered;
            if(clampU && clampV) filtered=textureImage.SampleLevel(samplerClampClamp,normalized,level);
            else if(clampU) filtered=textureImage.SampleLevel(samplerClampWrap,normalized,level);
            else if(clampV) filtered=textureImage.SampleLevel(samplerWrapClamp,normalized,level);
            else filtered=textureImage.SampleLevel(samplerWrapWrap,normalized,level);
            // The exact result is an integer / 256. Correct tiny UNORM float
            // error at integer boundaries without crossing a 1/256 fraction.
            return min(uint4(max(filtered,0)*255+0.001),255);
        }
    }
    uint4 a = texel(p,level)*(16-f.x)+texel(p+int2(1,0),level)*f.x;
    uint4 b = texel(p+int2(0,1),level)*(16-f.x)+texel(p+1,level)*f.x;
    return (a*(16-f.y)+b*f.y)>>8;
}

// Texture-pack replacement: any resolution and its own full mip chain. The
// covered PSP size maps texel-space UVs to normalized coordinates, so
// wrap/clamp and the game's nearest/linear choice are preserved.
uint4 sampleReplacement(float2 st, float2 gx, float2 gy, bool filterLinear) {
    bool clampU=(C(0xc7)&1)!=0, clampV=(C(0xc7)&256)!=0;
    if(!filterLinear) {
        uint w,h,n; replacementImage.GetDimensions(0,w,h,n);
        int2 p = int2(floor(st*float2(w,h)));
        p = int2(wrap(p.x,w,clampU),wrap(p.y,h,clampV));
        return uint4(replacementImage.Load(int3(p,0))*255+0.5);
    }
    float4 c;
    if(clampU && clampV) c=replacementImage.SampleGrad(anisoClampClamp,st,gx,gy);
    else if(clampU) c=replacementImage.SampleGrad(anisoClampWrap,st,gx,gy);
    else if(clampV) c=replacementImage.SampleGrad(anisoWrapClamp,st,gx,gy);
    else c=replacementImage.SampleGrad(anisoWrapWrap,st,gx,gy);
    return uint4(saturate(c)*255+0.5);
}
// Enhanced filtering of original textures: hardware anisotropic sampling over
// the texture's mips (generated on the GPU when the game supplies none).
// Not PSP exact; selected with [graphics] texture_filtering = enhanced.
uint4 sampleEnhanced(float2 st, float2 gx, float2 gy, float2 size) {
    // Atlases: a draw using a small region of the texture must not blend in
    // its neighbours through coarse mips. Limit the level so one mip texel
    // stays within a quarter of the region (axes that tile are unlimited).
    float2 region = uvRange.zw-uvRange.xy;
    if(any(region>0)) {
        float extent = 1e9;
        if(region.x>0 && region.x<size.x) extent = min(extent,region.x);
        if(region.y>0 && region.y<size.y) extent = min(extent,region.y);
        float cap = max(0,floor(log2(max(extent,1)))-2);
        float lod = log2(max(max(length(gx*size),length(gy*size)),1e-8));
        if(lod>cap) { float k = exp2(cap-lod); gx*=k; gy*=k; }
    }
    bool clampU=(C(0xc7)&1)!=0, clampV=(C(0xc7)&256)!=0;
    float4 c;
    if(clampU && clampV) c=textureImage.SampleGrad(anisoClampClamp,st,gx,gy);
    else if(clampU) c=textureImage.SampleGrad(anisoClampWrap,st,gx,gy);
    else if(clampV) c=textureImage.SampleGrad(anisoWrapClamp,st,gx,gy);
    else c=textureImage.SampleGrad(anisoWrapWrap,st,gx,gy);
    return uint4(saturate(c)*255+0.5);
}
uint4 shade(float2 uv, uint4 v, float clipW) {
    if(feedback.x==2) uv*=rasterScale();
    // A replacement covers the first replace.z rows of the GE texture.
    float2 st = uv/float2(max(replace.yz,1)), stdx = ddx_coarse(st), stdy = ddy_coarse(st);
    uint baseW,baseH,baseLevels; textureImage.GetDimensions(0,baseW,baseH,baseLevels);
    float2 st0 = uv/float2(max(baseW,1),max(baseH,1)), st0dx = ddx_coarse(st0), st0dy = ddy_coarse(st0);
    uint lodMode = C(0xc8)&3;
    float footprint = max(max(abs(ddx_coarse(uv.x)),abs(ddy_coarse(uv.x))),max(abs(ddx_coarse(uv.y)),abs(ddy_coarse(uv.y))));
    float delta = lodMode==0 ? footprint : lodMode==2 ? 2*clipW*asfloat(C(0xd0)<<8) : 1;
    uint bits = asuint(delta);
    int detail = lodMode==0 || lodMode==2 ? (delta>0 ? (int((bits>>23)&255)-127)*16 + int((bits>>19)&15) : -2048) : 0;
    detail += (int(C(0xc8)<<8)>>24);
    uint maxLevel = (C(0xc6)&4) ? (C(0xc2)>>16)&7 : 0;
    uint w,h,n; if(feedback.x) n=1; else textureImage.GetDimensions(0,w,h,n); maxLevel = min(maxLevel,n-1);
    bool filterLinear = detail>0 ? (C(0xc6)&1)!=0 : (C(0xc6)&256)!=0;
    uint lod = uint(clamp(detail,0,int(maxLevel*16)));
    bool linearMip = (C(0xc6)&2)!=0;
    uint level = linearMip ? lod>>4 : min(maxLevel,(lod+8)>>4);
    // replace.w: bit0 the pack image has no alpha (use the game's), bit1 the
    // game's texture is opaque (the original need not be sampled at all).
    // An opaque original supplies constant alpha 255, including RGB-only pack
    // images. Its full original sample can be skipped without changing alpha.
    bool needOriginal = replace.x==0 || (replace.w&2)==0;
    uint4 t = uint4(255,255,255,255);
    if(needOriginal) {
        if((render.w&1)!=0 && feedback.x==0 && filterLinear) t = sampleEnhanced(st0,st0dx,st0dy,float2(baseW,baseH));
        else {
            t = sampleLevel(uv,level,filterLinear);
            if(linearMip && level<maxLevel) t = (t*(16-(lod&15))+sampleLevel(uv,level+1,filterLinear)*(lod&15))>>4;
        }
    }
    if(replace.x) {
        // Colour from the pack; alpha follows the game, which rewrites palette
        // alpha at runtime (fades, generated alpha).
        uint4 r = sampleReplacement(st,stdx,stdy,filterLinear);
        t = uint4(r.rgb, (replace.w&1) ? t.a : min(r.a,t.a));
    }
    bool alpha = (C(0xc9)&256)!=0;
    uint scale = (C(0xc9)&65536)!=0 ? 2 : 1;
    uint a = alpha ? t.a*(v.a+1)/256 : v.a;
    uint function = C(0xc9)&7;
    if(function==0) return uint4(min(255,t.rgb*(v.rgb+1)*scale/256),a);
    if(function==1) return uint4(alpha ? min(255,((t.rgb+1)*t.a+(v.rgb+1)*(255-t.a))*scale/256) : min(255,t.rgb*scale),v.a);
    if(function==2) return uint4(min(255,(v.rgb*(255-t.rgb)+bytes(C(0xca)).rgb*t.rgb+255)*scale/256),a);
    if(function==3) return uint4(min(255,t.rgb*scale),alpha?t.a:v.a);
    return uint4(min(255,(t.rgb+v.rgb)*scale),a);
}
uint3 factor(uint which, bool source, uint4 s, uint4 d, uint fixedColor) {
    if(which==0) return source?d.rgb:s.rgb;
    if(which==1) return 255-(source?d.rgb:s.rgb);
    if(which==2) return s.a; if(which==3) return 255-s.a;
    if(which==4) return d.a; if(which==5) return 255-d.a;
    if(which==6) return 2*s.a; if(which==7) return 255-min(2*s.a,255);
    if(which==8) return 2*d.a; if(which==9) return 255-min(2*d.a,255);
    return bytes(fixedColor).rgb;
}
// The packed read-modify-write of one pixel (the ROV critical section). Every
// early return here only skips later writes; nothing returns to PS early.
void pixelUpdate(uint2 pixel, uint4 s, bool clearing, uint z) {
    uint index = pixel.y*surface.z+pixel.x;
    uint oldColor = unpackFrame(COLOR_AT(index)); uint4 d = bytes(oldColor);
    uint oldStencil = mode.x==0 ? 0 : d.a;
    uint depthIndex = pixel.y*surface.w+pixel.x;
    bool stencil = !clearing && (C(0x24)&1);
    uint alphaMask = (C(0xe9)&255)<<24;
    if(stencil && !compare(((C(0xdc)>>8)&255)&((C(0xdc)>>16)&255),oldStencil&((C(0xdc)>>16)&255),C(0xdc))) {
        COLOR_AT(index) = packFrame((oldColor&0xffffff) | ((stencilOp(C(0xdd),oldStencil)<<24)&~alphaMask) | (oldColor&alphaMask)); return;
    }
    if(!clearing && mode.w && (C(0x23)&1) && !compare(z,DEPTH_AT(depthIndex)&0xFFFF,C(0xde))) {
        if(stencil) COLOR_AT(index) = packFrame((oldColor&0xffffff) | ((stencilOp(C(0xdd)>>8,oldStencil)<<24)&~alphaMask) | (oldColor&alphaMask));
        return;
    }
    // Soft particles: a billboard that cuts into the scene fades out over the
    // depth-buffer distance in render.w bits 8-23 (0 depth is far when the game
    // draws with its reversed depth, 65535 when it draws forward).
    if(!clearing && mode.w && (render.w&8)!=0 && (C(0x21)&1) && (C(0x23)&1) && C(0xe7)!=0) {
        uint depthFunction=C(0xde)&7;
        if(depthFunction>=4) {
            int scene=int(DEPTH_AT(depthIndex)&0xFFFF);
            float behind=depthFunction>=6 ? float(int(z)-scene) : float(scene-int(z));
            float fade=saturate(behind/float(max((render.w>>8)&0xFFFF,1u)));
            uint sourceFactor=C(0xdf)&15;
            s.a=uint(float(s.a)*fade+0.5);
            if(!(sourceFactor==2 || sourceFactor==3 || sourceFactor==6 || sourceFactor==7))
                s.rgb=uint3(float3(s.rgb)*fade+0.5);
        }
    }
    if(!clearing && (C(0x21)&1)) {
        uint3 a=s.rgb*factor(C(0xdf)&15,true,s,uint4(d.rgb,oldStencil),C(0xe0))/255;
        uint3 b=d.rgb*factor((C(0xdf)>>4)&15,false,s,uint4(d.rgb,oldStencil),C(0xe1))/255;
        uint f=(C(0xdf)>>8)&7;
        if(f==1) s.rgb=a-min(a,b); else if(f==2) s.rgb=b-min(a,b);
        else if(f==3) s.rgb=min(s.rgb,d.rgb); else if(f==4) s.rgb=max(s.rgb,d.rgb);
        else if(f==5) s.rgb=max(s.rgb,d.rgb)-min(s.rgb,d.rgb); else s.rgb=min(255,a+b);
    }
    // A HUD tag survives later depth writes within the frame (HUD draws overlap); only the
    // frame's depth clear removes it.
    if(mode.w && (clearing ? (C(0xd3)&1024)!=0 : (C(0x23)&1) && C(0xe7)==0)) {
        uint written=z;
        if(!clearing && (render.w&4)!=0) written|=DEPTH_AT(depthIndex)&kHudTag;
        DEPTH_AT(depthIndex)=written;
    }
    // Through-mode draws (no hardware transform) are the HUD in a race. Only pixels the
    // draw visibly changes count (whatever its blend mode): the transparent corners of a
    // HUD quad stay part of the scene.
    if(!clearing && mode.w && mode.y==0 && (render.w&4)!=0) {
        int3 change=abs(int3(s.rgb)-int3(d.rgb));
        if(max(change.x,max(change.y,change.z))>=8) DEPTH_AT(depthIndex) |= kHudTag;
    }
    if(clearing) { if(!(C(0xd3)&256)) s.rgb=d.rgb; if(!(C(0xd3)&512)) s.a=d.a; }
    else if(stencil) s.a=stencilOp(C(0xdd)>>16,oldStencil);
    uint mask=(C(0xe8)&0xffffff)|alphaMask;
    COLOR_AT(index)=packFrame((pack(s)&~mask)|(oldColor&mask));
}
#if defined(MOTORSTORM_VK_HARDWARE) && !defined(MOTORSTORM_VK_ATTACHMENT) && !defined(MOTORSTORM_VK_ATOMIC)
// This translation unit exports the fixed-function entries below. The ordered
// and interlock pixel shaders stay in their own compiles and still call pixelUpdate().
#else
#if defined(MOTORSTORM_VK_ATTACHMENT)
PixelResult PS(Varying i, bool front : SV_IsFrontFace) {
#if defined(MOTORSTORM_VK_TRIVIAL)
    { PixelResult trivial; trivial.color=0xFF808080u; trivial.depth=0; return trivial; }
#endif
#if defined(MOTORSTORM_VK_NOREAD)
    currentColor=0; currentDepth=0;
#else
    currentColor=attachmentColor.SubpassLoad();
    currentDepth=attachmentDepth.SubpassLoad();
#endif
#elif defined(MOTORSTORM_VK_ATOMIC)
float PS(Varying i, bool front : SV_IsFrontFace) : SV_Target0 {
#else
void PS(Varying i, bool front : SV_IsFrontFace) {
#endif
    PS_INTERLOCK_MODE;
    // Tests that need no target pixel come first. A failing pixel still passes
    // through the (Vulkan) interlock once, at the top level, but skips the update.
    uint2 pixel = uint2(i.position.xy);
    bool clearing = (C(0xd3)&1)!=0;
    bool live = all(pixel<surface.xy) && (clearing || !((C(0x1d)&1) && (front != ((C(0x9b)&1)!=0))));
    uint4 s = uint4(clamp(i.color,0,255));
#if !defined(MOTORSTORM_VK_NOSHADE)
    if(live && !clearing && (C(0x1e)&1)) s = shade(i.uvq.xy/i.uvq.z,s,1/i.position.w);
#endif
    s.rgb = min(255,s.rgb+uint3(clamp(i.secondary,0,255)));
    if(!clearing && (C(0x22)&1) && !compare(s.a&((C(0xdb)>>16)&255),(C(0xdb)>>8)&((C(0xdb)>>16)&255),C(0xdb))) live = false;
    uint z = uint(clamp(i.depthFog.x,0,65535));
    if(!clearing && (C(0x1f)&1) && i.depthFog.y<1) {
        uint fog = uint(saturate(i.depthFog.y)*255);
        s.rgb = (s.rgb*fog+bytes(C(0xcf)).rgb*(255-fog)+255)>>8;
    }
    if(!clearing && (C(0x27)&1) && !compare(pack(s)&(C(0xda)&0xffffff),C(0xd9)&C(0xda),C(0xd8)&3)) live = false;
    PS_INTERLOCK_BEGIN;
    if(live) pixelUpdate(pixel, s, clearing, z);
    PS_INTERLOCK_END;
#if defined(MOTORSTORM_VK_ATTACHMENT)
    PixelResult result; result.color=currentColor; result.depth=currentDepth; return result;
#elif defined(MOTORSTORM_VK_ATOMIC)
    return 0;
#endif
}
#endif
#if defined(MOTORSTORM_VK_HARDWARE)
// Window Z in the vertex is noperspective (depthFog.x). Writing it as z*w makes
// the hardware depth interpolator match that affine window depth. D16 then
// stores round(z) for an integer window Z in 0..65535.
Varying VSFast(Input i) {
    Varying o = VS(i);
    o.position.z = saturate(o.depthFog.x * (1.0 / 65535.0)) * o.position.w;
    return o;
}
Varying PointVSFast(Input i, uint corner : SV_VertexID) {
    Varying o = VSFast(i);
    static const float2 corners[6] = {float2(-1, 1), float2(1, 1), float2(-1, -1), float2(-1, -1), float2(1, 1), float2(1, -1)};
    float2 radius = rasterScale() / float2(surface.xy) * o.position.w;
    if (wide.z != 0) radius.x *= wide.x;
    o.position.xy += radius * corners[corner];
    return o;
}
float4 fastSample(float2 uv) {
    uint w, h, levels;
    textureImage.GetDimensions(0, w, h, levels);
    float2 st = uv / float2(max(w, 1), max(h, 1));
    bool clampU = (C(0xc7) & 1) != 0, clampV = (C(0xc7) & 256) != 0;
    // Hardware LOD. SampleLevel(0) kept every distant fragment on the base mip.
    float4 t;
    if (clampU && clampV) t = textureImage.Sample(samplerClampClamp, st);
    else if (clampU) t = textureImage.Sample(samplerClampWrap, st);
    else if (clampV) t = textureImage.Sample(samplerWrapClamp, st);
    else t = textureImage.Sample(samplerWrapWrap, st);
    return saturate(t);
}
// A framebuffer texture was copied into feedbackImage before this draw. Read
// that copy with the ordered shader's texel filter. Not used by PSFast, so the
// scene entry stays a small sample.
float4 feedbackColor(int2 p) {
    uint w = 1u << (C(0xb8) & 15);
    uint h = 1u << ((C(0xb8) >> 8) & 15);
    p = int2(wrap(p.x, w, (C(0xc7) & 1) != 0), wrap(p.y, h, (C(0xc7) & 256) != 0));
    uint stride = max(feedback.z, 1);
    uint imgW, imgH, levels;
    textureImage.GetDimensions(0, imgW, imgH, levels);
    int2 pixel = int2(feedback.y % stride, feedback.y / stride) + p;
    pixel = clamp(pixel, int2(0, 0), int2(max(imgW, 1), max(imgH, 1)) - 1);
    return textureImage.Load(int3(pixel, 0));
}
float4 fastFeedback(float2 uv, float clipW) {
    // feedback.x == 3: textureImage is the compact color surface. One load, no pack.
    if (feedback.x == 3) {
        bool filterLinear = (C(0xc6) & 257) != 0;
        if (!filterLinear) return saturate(feedbackColor(int2(floor(uv))));
        float2 base = uv - 0.5;
        int2 p = int2(floor(base));
        float2 f = saturate(base - float2(p));
        float4 row0 = lerp(feedbackColor(p), feedbackColor(p + int2(1, 0)), f.x);
        float4 row1 = lerp(feedbackColor(p + int2(0, 1)), feedbackColor(p + int2(1, 1)), f.x);
        return saturate(lerp(row0, row1, f.y));
    }
    if (feedback.x == 2) uv *= rasterScale();
    uint lodMode = C(0xc8) & 3;
    float footprint = max(max(abs(ddx_coarse(uv.x)), abs(ddy_coarse(uv.x))),
                          max(abs(ddx_coarse(uv.y)), abs(ddy_coarse(uv.y))));
    float delta = lodMode == 0 ? footprint : lodMode == 2 ? 2 * clipW * asfloat(C(0xd0) << 8) : 1;
    uint bits = asuint(delta);
    int detail = lodMode == 0 || lodMode == 2
                     ? (delta > 0 ? (int((bits >> 23) & 255) - 127) * 16 + int((bits >> 19) & 15) : -2048)
                     : 0;
    detail += (int(C(0xc8) << 8) >> 24);
    bool filterLinear = detail > 0 ? (C(0xc6) & 1) != 0 : (C(0xc6) & 256) != 0;
    return saturate(float4(sampleLevel(uv, 0, filterLinear)) / 255.0);
}
float4 fastPixel(Varying i, float4 sampled) {
    bool clearing = (C(0xd3) & 1) != 0;
    float4 s = saturate(i.color / 255.0);
    if (!clearing && (C(0x1e) & 1)) {
        float4 t = sampled;
        bool modulateAlpha = (C(0xc9) & 256) != 0;
        float scale = (C(0xc9) & 65536) ? 2.0 : 1.0;
        float a = modulateAlpha ? t.a * s.a : s.a;
        uint function = C(0xc9) & 7;
        float3 rgb;
        if (function == 0) rgb = t.rgb * s.rgb * scale;
        else if (function == 1) rgb = (modulateAlpha ? (t.rgb * t.a + s.rgb * (1 - t.a)) : t.rgb) * scale;
        else if (function == 2) {
            float3 env = float3(bytes(C(0xca)).rgb) / 255.0;
            rgb = (s.rgb * (1 - t.rgb) + env * t.rgb) * scale;
        } else if (function == 3) {
            rgb = t.rgb * scale;
            a = modulateAlpha ? t.a : s.a;
        } else rgb = (t.rgb + s.rgb) * scale;
        s = float4(rgb, a);
    }
    s.rgb += saturate(i.secondary / 255.0);
    if (!clearing && (C(0x1f) & 1) && i.depthFog.y < 1) {
        float fog = saturate(i.depthFog.y);
        s.rgb = s.rgb * fog + float3(bytes(C(0xcf)).rgb) / 255.0 * (1 - fog);
    }
    // The packed PSP path truncates each final channel to an integer byte.
    return floor(saturate(s) * 255.0) / 255.0;
}
// Fast attachment route with the same integer texture, color, secondary,
// fog, and target-format math as PS. Blending/stencil/feedback stay ordered.
uint4 fastPixelExact(Varying i) {
    bool clearing = (C(0xd3) & 1) != 0;
    uint4 s = uint4(clamp(i.color, 0, 255));
    if (!clearing && (C(0x1e) & 1))
        s = shade(i.uvq.xy / i.uvq.z, s, 1.0 / i.position.w);
    s.rgb = min(255, s.rgb + uint3(clamp(i.secondary, 0, 255)));
    if (!clearing && (C(0x1f) & 1) && i.depthFog.y < 1) {
        uint fog = uint(saturate(i.depthFog.y) * 255.0);
        s.rgb = (s.rgb * fog + bytes(C(0xcf)).rgb * (255 - fog) + 255) >> 8;
    }
    return s;
}
// Alpha test and color test on the exact integer color, as PS does them
// (the color test reads only the incoming fragment color, never the target).
bool fastRejects(uint4 s) {
    if ((C(0xd3) & 1) != 0) return false;
    if ((C(0x22) & 1)) {
        uint mask = (C(0xdb) >> 16) & 255;
        if (!compare(s.a & mask, ((C(0xdb) >> 8) & 255) & mask, C(0xdb))) return true;
    }
    return (C(0x27) & 1) && !compare(pack(s) & (C(0xda) & 0xffffff), C(0xd9) & C(0xda), C(0xd8) & 3);
}
uint4 fastQuantize(uint4 color) {
    return bytes(unpackFrame(packFrame(pack(color))));
}
// Opaque and blended draws. No discard. Force the depth test before shading so
// occluded fragments never sample a texture.
[earlydepthstencil]
float4 PSFast(Varying i) : SV_Target0 {
    if ((render.w & 32u) != 0u)
        return float4(fastQuantize(fastPixelExact(i))) / 255.0;
    float4 sampled = 1;
    if ((C(0xd3) & 1) == 0 && (C(0x1e) & 1)) sampled = fastSample(i.uvq.xy / i.uvq.z);
    return fastPixel(i, sampled);
}
// Alpha test only. Kept separate so the opaque pipeline does not discard.
// Depth-write draws stay late-Z: a discarded pixel must not update depth.
// Draws that do not write depth can reject occluded pixels before the sample.
[earlydepthstencil]
float4 PSFastAlphaEarly(Varying i) : SV_Target0 {
    if ((render.w & 32u) != 0u) {
        uint4 exact = fastPixelExact(i);
        if (fastRejects(exact)) discard;
        return float4(fastQuantize(exact)) / 255.0;
    }
    float4 sampled = 1;
    if ((C(0xd3) & 1) == 0 && (C(0x1e) & 1)) sampled = fastSample(i.uvq.xy / i.uvq.z);
    float4 s = fastPixel(i, sampled);
    if ((C(0xd3) & 1) == 0 && (C(0x22) & 1)) {
        uint a = uint(saturate(s.a) * 255.0 + 0.5);
        uint mask = (C(0xdb) >> 16) & 255;
        if (!compare(a & mask, ((C(0xdb) >> 8) & 255) & mask, C(0xdb))) discard;
    }
    return s;
}
float4 PSFastAlpha(Varying i) : SV_Target0 {
    if ((render.w & 32u) != 0u) {
        uint4 exact = fastPixelExact(i);
        if (fastRejects(exact)) discard;
        return float4(fastQuantize(exact)) / 255.0;
    }
    float4 sampled = 1;
    if ((C(0xd3) & 1) == 0 && (C(0x1e) & 1)) sampled = fastSample(i.uvq.xy / i.uvq.z);
    float4 s = fastPixel(i, sampled);
    if ((C(0xd3) & 1) == 0 && (C(0x22) & 1)) {
        uint a = uint(saturate(s.a) * 255.0 + 0.5);
        uint mask = (C(0xdb) >> 16) & 255;
        if (!compare(a & mask, ((C(0xdb) >> 8) & 255) & mask, C(0xdb))) discard;
    }
    return s;
}
// Same fixed-function depth and blend, sampling the feedback copy.
[earlydepthstencil]
float4 PSFastFeedback(Varying i) : SV_Target0 {
    return float4(fastQuantize(fastPixelExact(i))) / 255.0;
}
float4 PSFastAlphaFeedback(Varying i) : SV_Target0 {
    uint4 s = fastPixelExact(i);
    if (fastRejects(s)) discard;
    return float4(fastQuantize(s)) / 255.0;
}
struct LoadResult { float4 color : SV_Target0; float depth : SV_Depth; };
// Copies the packed R32 buffers into the compact color attachment and the real
// depth attachment when a hardware draw follows an ordered draw.
LoadResult PSLoad(Varying i) {
    uint2 pixel = uint2(i.position.xy);
    LoadResult result;
    result.color = 0;
    result.depth = 0;
    if (any(pixel >= surface.xy)) return result;
    uint4 c = bytes(unpackFrame(colorTarget[pixel.y * surface.z + pixel.x]));
    result.color = float4(c) / 255.0;
    result.depth = float(depthTarget[pixel.y * surface.w + pixel.x] & 0xFFFF) / 65535.0;
    return result;
}
VK_BIND(12, 0) ByteAddressBuffer hwDepthBits : register(t6);
[numthreads(8, 8, 1)]
void PackColorCS(uint3 id : SV_DispatchThreadID) {
    if (any(id.xy >= surface.xy)) return;
    uint4 c = uint4(saturate(textureImage.Load(int3(id.xy, 0))) * 255.0 + 0.5);
    colorTarget[id.y * surface.z + id.x] = packFrame(pack(min(c, 255)));
}
[numthreads(8, 8, 1)]
void PackDepthCS(uint3 id : SV_DispatchThreadID) {
    if (any(id.xy >= surface.xy)) return;
    uint i = id.y * surface.w + id.x;
    uint pair = hwDepthBits.Load((i & ~1u) * 2u);
    uint z = (i & 1u) ? (pair >> 16) : (pair & 0xFFFF);
    depthTarget[i] = z;
}
#endif
// Direct swapchain presentation reads the GE's resident packed framebuffer.
VK_BIND(4, 0) StructuredBuffer<uint> presentColor : register(t1);
VK_BIND(6, 0) RWStructuredBuffer<uint> computeOutput : register(u2);
// Guest VRAM keeps its original stride and dimensions. Expansion and resolve
// happen on the GPU; high-resolution surfaces survive guest readback.
[numthreads(8,8,1)]
void ExpandCS(uint3 id : SV_DispatchThreadID) {
    uint2 extent=uint2(rasterExtent(surface.x),rasterExtent(surface.y));
    if(any(id.xy>=extent)) return;
    uint2 p=uint2(nativeOf(id.x),nativeOf(id.y));
    computeOutput[id.y*surface.z+id.x]=presentColor[p.y*surface.x+p.x];
}
[numthreads(8,8,1)]
void ResolveCS(uint3 id : SV_DispatchThreadID) {
    if(any(id.xy>=surface.xy)) return;
    // The raster pixels whose centres lie inside this native pixel.
    uint2 base=uint2(rasterExtent(id.x),rasterExtent(id.y));
    uint2 size=uint2(rasterExtent(id.x+1),rasterExtent(id.y+1))-base;
    // A raster below native resolution covers some native pixels with no
    // raster centre: use the covering raster pixel instead.
    base=min(base,uint2(surface.z,rasterExtent(surface.y))-1);
    size=max(size,1);
    uint center=presentColor[(base.y+size.y/2)*surface.z+base.x+size.x/2];
    if(mode.x==4) { computeOutput[id.y*surface.x+id.x]=center; return; }
    uint4 total=0;
    for(uint y=0;y<size.y;++y) for(uint x=0;x<size.x;++x)
        total+=bytes(unpackFrame(presentColor[(base.y+y)*surface.z+base.x+x]));
    uint samples=size.x*size.y;
    uint4 c=(total+samples/2)/samples;
    c.a=bytes(unpackFrame(center)).a; // stencil is never averaged
    computeOutput[id.y*surface.x+id.x]=packFrame(pack(c));
}
float3 outputPixel(int2 p) {
    uint2 extent=surface.xy*render.y;
    p=clamp(p,0,int2(extent)-1);
    if(render.z==3) {
        // SSAA2x: 1.5 raster pixels per output pixel; each output pixel
        // area-weights the raster samples it overlaps.
        float r=rasterScale()/float(render.y);
        float2 lo=float2(p)*r, hi=lo+r;
        int2 first=int2(floor(lo));
        int2 last=min(int2(ceil(hi))-1,int2(surface.z,rasterExtent(surface.y))-1);
        float3 sum=0; float weight=0;
        for(int y=first.y;y<=last.y;++y) for(int x=first.x;x<=last.x;++x) {
            float w=(min(hi.x,x+1)-max(lo.x,x))*(min(hi.y,y+1)-max(lo.y,y));
            sum+=w*channels(unpackFrame(presentColor[y*surface.z+x])).rgb; weight+=w;
        }
        return sum/(255.0*max(weight,1e-6));
    }
    uint ratio=render.x/(2*render.y);
    if(ratio*2*render.y!=render.x) {
        // Android dynamic resolution: the raster can be smaller than (or not a
        // whole multiple of) the output grid. Sample the covering raster pixel.
        int2 q=min(int2((float2(p)+0.5)*rasterScale()/float(render.y)),int2(surface.z,rasterExtent(surface.y))-1);
        return channels(unpackFrame(presentColor[q.y*surface.z+q.x])).rgb/255;
    }
    uint2 base=uint2(p)*ratio;
    if(render.z==2) {
        float3 sum=0;
        for(uint y=0;y<ratio;++y) for(uint x=0;x<ratio;++x)
            sum+=channels(unpackFrame(presentColor[(base.y+y)*surface.z+base.x+x])).rgb;
        return sum/(255.0*ratio*ratio);
    }
    return channels(unpackFrame(presentColor[(base.y+ratio/2)*surface.z+base.x+ratio/2])).rgb/255;
}
float3 outputLinear(float2 p) {
    int2 lo=int2(floor(p)); float2 f=frac(p);
    return lerp(lerp(outputPixel(lo),outputPixel(lo+int2(1,0)),f.x),
                lerp(outputPixel(lo+int2(0,1)),outputPixel(lo+1),f.x),f.y);
}
float luma(float3 c) { return dot(c,float3(0.299,0.587,0.114)); }
float3 displayShade(float2 uv) {
    int2 p=min(int2(uv*surface.xy*render.y),int2(surface.xy*render.y)-1);
    float3 c=outputPixel(p);
    if(render.z!=1) return c;
    // Directional edge filtering in output-pixel coordinates. Flat regions and
    // low-contrast artwork retain their original color.
    float nw=luma(outputPixel(p+int2(-1,-1))), ne=luma(outputPixel(p+int2(1,-1)));
    float sw=luma(outputPixel(p+int2(-1,1))), se=luma(outputPixel(p+int2(1,1))), m=luma(c);
    float low=min(m,min(min(nw,ne),min(sw,se))), high=max(m,max(max(nw,ne),max(sw,se)));
    if(high-low<max(0.03125,high*0.125)) return c;
    float2 direction=float2(-(nw+ne-sw-se),nw+sw-ne-se);
    float reduction=max((nw+ne+sw+se)*0.03125,0.0078125);
    direction=clamp(direction/(min(abs(direction.x),abs(direction.y))+reduction),-8,8);
    float3 a=(outputLinear(p+direction*(-1.0/6))+outputLinear(p+direction*(1.0/6)))*0.5;
    float3 b=a*0.5+(outputLinear(p-direction*0.5)+outputLinear(p+direction*0.5))*0.25;
    float lb=luma(b); return lb<low || lb>high ? a : b;
}
[numthreads(8,8,1)]
void CaptureCS(uint3 id : SV_DispatchThreadID) {
    uint2 extent=surface.xy*render.y;
    if(any(id.xy>=extent)) return;
    float2 uv=(float2(id.xy)+0.5)/extent;
    computeOutput[id.y*extent.x+id.x]=pack(uint4(saturate(displayShade(uv))*255+0.5,255));
}
struct PresentVarying { float4 position : SV_Position; float2 uv : TEXCOORD0; };
PresentVarying PresentVS(uint id : SV_VertexID) {
    PresentVarying o; o.uv=float2((id<<1)&2,id&2);
    o.position=float4(o.uv*float2(2,-2)+float2(-1,1),0,1);
#if defined(MOTORSTORM_VK_ATTACHMENT)
    if(mode.y==2) o.uv=float2(o.uv.y,1-o.uv.x);
    else if(mode.y==4) o.uv=1-o.uv;
    else if(mode.y==8) o.uv=float2(1-o.uv.y,o.uv.x);
#endif
    return o;
}
#if defined(MOTORSTORM_VK_ATTACHMENT)
// SGSR 1 (BSD-3-Clause, Qualcomm). Spatial, single pass, RGBA mode.
// Samples the GE colour buffer instead of a texture gather. EdgeSharpness is
// ViewportInfo.x (1..2). The HUD test below runs after this upscale.
float sgsrFastLanczos2(float x) {
    float wA = x - 4.0;
    float wB = x * wA - wA;
    wA *= wA;
    return wB * wA;
}
float2 sgsrWeight(float dx, float dy, float c, float stddev) {
    float x = ((dx * dx) + (dy * dy)) * 0.5 + clamp(abs(c) * stddev, 0.0, 1.0);
    float w = sgsrFastLanczos2(x);
    return float2(w, w * c);
}
float sgsrLuma(float3 c) { return dot(c, float3(0.299, 0.587, 0.114)); }
// Present source pixels: the raster itself, whatever its scale relative to
// the output grid (dynamic resolution moves it in half-pixel steps).
int2 rasterSize() { return int2(rasterExtent(surface.x), rasterExtent(surface.y)); }
// render.w bit 4: the frame was converted to an RGBA8 texture (PresentConvertCS)
// and is read through the texture cache with hardware filtering.
bool presentTexture() { return (render.w & 16u) != 0; }
float3 rasterPixel(int2 p) {
    p = clamp(p, 0, rasterSize() - 1);
    if (presentTexture()) return textureImage.Load(int3(p, 0)).rgb;
    return channels(unpackFrame(presentColor[p.y * surface.z + p.x])).rgb / 255;
}
float3 rasterLinear(float2 uv) {
    if (presentTexture()) return textureImage.SampleLevel(samplerClampClamp, uv, 0).rgb;
    float2 pos = uv * float2(rasterSize()) - 0.5;
    int2 lo = int2(floor(pos));
    float2 f = pos - floor(pos);
    return lerp(lerp(rasterPixel(lo), rasterPixel(lo + int2(1, 0)), f.x),
                lerp(rasterPixel(lo + int2(0, 1)), rasterPixel(lo + 1), f.x), f.y);
}
float3 sgsr1(float2 uv, float sharpness) {
    float3 pix = rasterLinear(uv);
    float2 imgCoord = uv * float2(rasterSize()) + float2(-0.5, 0.5);
    float2 imgCoordPixel = floor(imgCoord);
    float2 pl = imgCoord - imgCoordPixel;
    int2 base = int2(imgCoordPixel);
    // Qualcomm's HLSL gather order is lower-left, lower-right, upper-right,
    // upper-left. These loads reproduce its four gather locations.
    float leftX = sgsrLuma(rasterPixel(base + int2(-1, 0)));
    float leftY = sgsrLuma(rasterPixel(base));
    float leftZ = sgsrLuma(rasterPixel(base + int2(0, -1)));
    float leftW = sgsrLuma(rasterPixel(base + int2(-1, -1)));
    float center = sgsrLuma(pix);
    float edgeVote = abs(leftZ - leftY) + abs(center - leftY) + abs(center - leftZ);
    if (edgeVote <= 8.0 / 255.0) return pix;
    float rightX = sgsrLuma(rasterPixel(base + int2(1, 0)));
    float rightY = sgsrLuma(rasterPixel(base + int2(2, 0)));
    float rightZ = sgsrLuma(rasterPixel(base + int2(2, -1)));
    float rightW = sgsrLuma(rasterPixel(base + int2(1, -1)));
    float upX = sgsrLuma(rasterPixel(base + int2(0, -2)));
    float upY = sgsrLuma(rasterPixel(base + int2(1, -2)));
    float downZ = sgsrLuma(rasterPixel(base + int2(1, 1)));
    float downW = sgsrLuma(rasterPixel(base + int2(0, 1)));
    float mean = (leftY + leftZ + rightX + rightW) * 0.25;
    float sum = abs(leftX - mean) + abs(leftY - mean) + abs(leftZ - mean) + abs(leftW - mean) +
                abs(rightX - mean) + abs(rightY - mean) + abs(rightZ - mean) + abs(rightW - mean) +
                abs(upX - mean) + abs(upY - mean) + abs(downZ - mean) + abs(downW - mean);
    float sumMean = 10.14185 / max(sum, 1e-5);
    float stddev = sumMean * sumMean;
    float2 acc = sgsrWeight(pl.x, pl.y + 1.0, upX - mean, stddev);
    acc += sgsrWeight(pl.x - 1.0, pl.y + 1.0, upY - mean, stddev);
    acc += sgsrWeight(pl.x - 1.0, pl.y - 2.0, downZ - mean, stddev);
    acc += sgsrWeight(pl.x, pl.y - 2.0, downW - mean, stddev);
    acc += sgsrWeight(pl.x + 1.0, pl.y - 1.0, leftX - mean, stddev);
    acc += sgsrWeight(pl.x, pl.y - 1.0, leftY - mean, stddev);
    acc += sgsrWeight(pl.x, pl.y, leftZ - mean, stddev);
    acc += sgsrWeight(pl.x + 1.0, pl.y, leftW - mean, stddev);
    acc += sgsrWeight(pl.x - 1.0, pl.y - 1.0, rightX - mean, stddev);
    acc += sgsrWeight(pl.x - 2.0, pl.y - 1.0, rightY - mean, stddev);
    acc += sgsrWeight(pl.x - 2.0, pl.y, rightZ - mean, stddev);
    acc += sgsrWeight(pl.x - 1.0, pl.y, rightW - mean, stddev);
    float finalY = acc.x != 0.0 ? acc.y / acc.x : 0.0;
    float max4 = max(max(leftY, leftZ), max(rightX, rightW)) - mean;
    float min4 = min(min(leftY, leftZ), min(rightX, rightW)) - mean;
    finalY = clamp(sharpness * finalY, min4, max4);
    float delta = finalY - (center - mean);
    return saturate(pix + delta);
}
VK_BIND(2, 0) StructuredBuffer<uint> presentDepth : register(t2);
#endif
#if defined(MOTORSTORM_VK_ATTACHMENT)
// The displayed raster as RGBA8 words (R in the low byte), once per frame, so
// the full-screen present reads a texture instead of the packed GE buffer.
[numthreads(8,8,1)]
void PresentConvertCS(uint3 id : SV_DispatchThreadID) {
    uint2 size = uint2(rasterExtent(surface.x), rasterExtent(surface.y));
    if (any(id.xy >= size)) return;
    uint4 c = uint4(channels(unpackFrame(presentColor[id.y * surface.z + id.x])));
    computeOutput[id.y * size.x + id.x] = c.r | (c.g << 8) | (c.b << 16) | 0xFF000000u;
}
#endif
float4 PresentPS(PresentVarying i) : SV_Target {
#if defined(MOTORSTORM_VK_ATTACHMENT)
    // mode.z = 1 runs SGSR 1. mode.w = 1 means the depth snapshot is bound.
    // uvRange.x is EdgeSharpness. HUD-tagged pixels are composited after the
    // upscale with a nearest sample, so text stays sharp.
    uint2 extent = max(surface.xy * render.y, 1);
    uint2 p = min(uint2(i.uv * float2(extent)), extent - 1);
    bool hud = mode.w != 0 && (presentDepth[p.y * extent.x + p.x] & 0x10000u) != 0;
    float3 color = hud ? rasterPixel(int2(i.uv * float2(rasterSize())))
                       : mode.z != 0 ? sgsr1(i.uv, uvRange.x)
                       : presentTexture() && render.z != 1 ? rasterLinear(i.uv)
                                                            : displayShade(i.uv);
    return float4(color, 1);
#else
    return float4(displayShade(i.uv),1);
#endif
}

// GPU texture decoding. presentColor holds the raw PSP texture bytes of one
// level, commands[] the 1024 palette bytes. surface = {width, height, output
// pitch in texels, stride (TBW) in texels}; mode = {format, swizzled, CLUT
// mode (0xC5), level}; feedback.x = texture mode (0xC2). Bit-exact with the
// CPU read_texel path.
// DecodeTargetCS reads a resolved render target instead (one word per pixel
// holding replace.y guest bytes; the texture starts replace.z bytes in). The
// flag is a literal at every call site, so DecodeCS compiles to the plain path.
uint rawByte(uint off, bool target) {
    if(target) { uint o=replace.z+off, bpp=max(replace.y,1u); return (presentColor[o/bpp] >> ((o%bpp)*8)) & 255; }
    return (presentColor[off>>2] >> ((off&3)*8)) & 255;
}
uint rawHalf(uint off, bool target) { return rawByte(off,target) | (rawByte(off+1,target)<<8); }
uint rawWord(uint off, bool target) { return rawHalf(off,target) | (rawHalf(off+2,target)<<16); }
uint swizzledOffset(uint byteX, uint y, uint rowBytes) {
    return ((y>>3)*((rowBytes+15)>>4) + (byteX>>4))*128 + (y&7)*16 + (byteX&15);
}
uint decodePacked(uint packed, uint type) {
    if(type==4) { uint r=packed&31, g=(packed>>5)&63, b=(packed>>11)&31;
        return 0xFF000000u | ((b<<3|b>>2)<<16) | ((g<<2|g>>4)<<8) | (r<<3|r>>2); }
    if(type==5) { uint r=packed&31, g=(packed>>5)&31, b=(packed>>10)&31, a=(packed>>15)!=0 ? 255 : 0;
        return (a<<24) | ((b<<3|b>>2)<<16) | ((g<<3|g>>2)<<8) | (r<<3|r>>2); }
    if(type==6) { uint r=packed&15, g=(packed>>4)&15, b=(packed>>8)&15, a=(packed>>12)&15;
        return ((a*17)<<24) | ((b*17)<<16) | ((g*17)<<8) | (r*17); }
    return packed;
}
uint clutEntry(uint index) {
    uint data=mode.z, format=data&3, shift=(data>>2)&31, mask=(data>>8)&255, start=((data>>16)&31)<<4;
    uint wrapMask = format==3 ? 255 : 511;
    uint wrapped = (((index>>shift)&mask) | (start&wrapMask)) & wrapMask;
    uint entryBytes = format==3 ? 4 : 2;
    uint mipOffset = (mode.x==4 && (feedback.x&0x100)!=0) ? mode.w*16 : 0;
    uint off = ((wrapped+mipOffset)&wrapMask)*entryBytes;
    // Entries never straddle a 32-bit word (16-bit entries are 2-aligned).
    uint word = C(off>>2);
    uint packed = entryBytes==4 ? word : (word >> ((off&2)*8)) & 0xFFFF;
    return decodePacked(packed, format+4);
}
void decodeTexel(uint3 id, bool target) {
    if(any(id.xy>=surface.xy)) return;
    uint x=id.x, y=id.y, stride=surface.w, format=mode.x;
    bool swizzled=mode.y!=0;
    uint texel=0xFFFFFFFFu;
    if(format<=2) {
        uint rowBytes=stride*2, off=swizzled ? swizzledOffset(x*2,y,rowBytes) : y*rowBytes+x*2;
        texel=decodePacked(rawHalf(off,target),format+4);
    } else if(format==3) {
        uint rowBytes=stride*4, off=swizzled ? swizzledOffset(x*4,y,rowBytes) : y*rowBytes+x*4;
        texel=rawWord(off,target);
    } else if(format==4) {
        uint rowBytes=(stride+1)/2, off=swizzled ? swizzledOffset(x>>1,y,rowBytes) : y*rowBytes+(x>>1);
        uint packed=rawByte(off,target);
        texel=clutEntry((x&1)!=0 ? packed>>4 : packed&15);
    } else if(format==5) {
        uint off=swizzled ? swizzledOffset(x,y,stride) : y*stride+x;
        texel=clutEntry(rawByte(off,target));
    } else if(format==6) {
        uint rowBytes=stride*2, off=swizzled ? swizzledOffset(x*2,y,rowBytes) : y*rowBytes+x*2;
        texel=clutEntry(rawHalf(off,target));
    } else if(format==7) {
        uint rowBytes=stride*4, off=swizzled ? swizzledOffset(x*4,y,rowBytes) : y*rowBytes+x*4;
        texel=clutEntry(rawWord(off,target));
    }
    computeOutput[y*surface.z+x]=texel;
}
[numthreads(8,8,1)]
void DecodeCS(uint3 id : SV_DispatchThreadID) { decodeTexel(id, false); }
[numthreads(8,8,1)]
void DecodeTargetCS(uint3 id : SV_DispatchThreadID) { decodeTexel(id, true); }
// GPU vertex processing (VertexCS). The GE thread uploads, per hardware-
// transformed triangle draw, one buffer (presentColor): a parameter block,
// an index table and the raw guest vertex bytes. Each thread produces one
// output vertex of the expanded triangle list, in the GpuVertex layout the
// draw reads (9 words), one per input vertex. It mirrors decode_vertex/light_vertex in
// motorstorm_ge.cpp operation for operation (`precise`: no fused or
// reordered arithmetic), so the result matches the CPU path.
// Parameter block, in words (see gpu_vertex_job in motorstorm_ge.cpp):
static const uint kVCount = 0, kVPrim = 1, kVFlags = 2, kVStride = 3, kVMorphs = 4, kVOneSize = 5,
    kVTypes = 6, kVOffsets = 7, kVWeightOffset = 8, kVIndexBase = 9, kVVertexBase = 10,
    kVMaterialColor = 11, kVMaterialAlpha = 12, kVMaterialUpdate = 13, kVAlphaScale = 14,
    kVMorphWeights = 16, kVBones = 24, kVWorld = 120, kVUvScale = 132, kVTextureSize = 136,
    kVEmissive = 138, kVAmbientLight = 141, kVMaterial = 144, kVViewDirection = 153, kVExponent = 156,
    kVLights = 157, kVLightWords = 32;
// word 0: vertices to decode; flags: 4 lighting, 8 reverse normal, 16 separate specular
static uint gLimit;  // read bound of the current job (bytes)
static uint gJob;    // first word of the current job in presentColor (VertexBatchCS)
uint vword(uint i) { return i*4 < gLimit ? presentColor[gJob+i] : 0; }
float vfloat(uint i) { return asfloat(vword(i)); }
uint typeStep(uint type) { return type == 0 ? 0 : 1u << (type - 1); }
// Every read is bounded by the job's size (word 15): root views are unchecked.
uint vbyte(uint off) { return off < gLimit ? (presentColor[gJob+(off>>2)] >> ((off&3)*8)) & 255 : 0; }
uint vhalf(uint off) {
    if((off&1) == 0 && off+2 <= gLimit) return (presentColor[gJob+(off>>2)] >> ((off&2)*8)) & 0xFFFF;
    return vbyte(off) | (vbyte(off+1)<<8);
}
uint vword32(uint off) {
    if((off&3) == 0 && off+4 <= gLimit) return presentColor[gJob+(off>>2)];
    return vhalf(off) | (vhalf(off+2)<<16);
}
float signedValue(uint at, uint type) {
    if(type==1) { int v=int(vbyte(at)); if(v>=128) v-=256; return float(v)/128.0; }
    if(type==2) { int v=int(vhalf(at)); if(v>=32768) v-=65536; return float(v)/32768.0; }
    return asfloat(vword32(at));
}
float unsignedValue(uint at, uint type) {
    if(type==1) return float(vbyte(at))/128.0;
    if(type==2) return float(vhalf(at))/32768.0;
    return asfloat(vword32(at));
}
uint packedColor(uint packed, uint type) {
    if(type==4) { uint r=packed&31, g=(packed>>5)&63, b=(packed>>11)&31;
        return 0xFF000000u | ((b<<3|b>>2)<<16) | ((g<<2|g>>4)<<8) | (r<<3|r>>2); }
    if(type==5) { uint r=packed&31, g=(packed>>5)&31, b=(packed>>10)&31, a=(packed>>15)!=0 ? 255 : 0;
        return (a<<24) | ((b<<3|b>>2)<<16) | ((g<<3|g>>2)<<8) | (r<<3|r>>2); }
    if(type==6) { uint r=packed&15, g=(packed>>4)&15, b=(packed>>8)&15, a=(packed>>12)&15;
        return ((a*17)<<24) | ((b*17)<<16) | ((g*17)<<8) | (r*17); }
    return packed;
}
float3 transformDirection(uint m, float3 v) {
    precise float3 r;
    r.x = vfloat(m+0)*v.x + vfloat(m+3)*v.y + vfloat(m+6)*v.z;
    r.y = vfloat(m+1)*v.x + vfloat(m+4)*v.y + vfloat(m+7)*v.z;
    r.z = vfloat(m+2)*v.x + vfloat(m+5)*v.y + vfloat(m+8)*v.z;
    return r;
}
float3 transformPosition(uint m, float3 v) {
    precise float3 r = transformDirection(m, v);
    r.x += vfloat(m+9); r.y += vfloat(m+10); r.z += vfloat(m+11);
    return r;
}
float dot3(float3 a, float3 b) { precise float d = a.x*b.x + a.y*b.y + a.z*b.z; return d; }
float3 normalize3(float3 v) {
    precise float length = sqrt(dot3(v, v));
    if(!isfinite(length) || length <= 0.000001) return float3(0,0,1);
    precise float3 r = float3(v.x/length, v.y/length, v.z/length);
    return r;
}
// std::pow semantics for the cases lighting reaches (pow(x,0) = 1).
float powCpu(float x, float y) { return y == 0 ? 1.0 : (x == 0 ? 0.0 : pow(x, y)); }
float3 vfloat3(uint i) { return float3(vfloat(i), vfloat(i+1), vfloat(i+2)); }
float3 colorComponents(uint c) { return float3(c & 255, (c>>8) & 255, (c>>16) & 255) / 255.0; }
struct DecodedVertex { float3 position; uint color, secondary; float u, v; bool drawable; };
DecodedVertex decodeVertex(uint element) {
    uint flags = vword(kVFlags), stride = vword(kVStride), morphs = vword(kVMorphs), oneSize = vword(kVOneSize);
    uint types = vword(kVTypes), offsets = vword(kVOffsets);
    uint positionType = types & 15, normalType = (types>>4) & 15, tcType = (types>>8) & 15,
         colorType = (types>>12) & 15, weightType = (types>>16) & 15, weightCount = (types>>20) & 15;
    uint positionOffset = offsets & 255, normalOffset = (offsets>>8) & 255, tcOffset = (offsets>>16) & 255,
         colorOffset = offsets>>24;
    uint base = vword(kVVertexBase) + element * stride;
    bool hasTexture = tcType != 0, hasColor = colorType >= 4;
    precise float3 p = 0, normal = 0;
    precise float4 color = 0;
    precise float u = 0, v = 0;
    for(uint i = 0; i < morphs; ++i) {
        uint target = base + i * oneSize;
        float weight = morphs == 1 ? 1.0 : vfloat(kVMorphWeights + i);
        uint positionStep = typeStep(positionType);
        [unroll] for(uint j = 0; j < 3; ++j) {
            precise float value = signedValue(target + positionOffset + j*positionStep, positionType);
            p[j] += weight * value;
            precise float n = normalType == 0 ? (j == 2 ? 1.0 : 0.0)
                : signedValue(target + normalOffset + j*typeStep(normalType), normalType);
            normal[j] += weight * n;
        }
        if(hasTexture) {
            uint at = target + tcOffset, step = typeStep(tcType);
            u += weight * unsignedValue(at, tcType);
            v += weight * unsignedValue(at + step, tcType);
        }
        if(hasColor) {
            uint at = target + colorOffset;
            uint packed = packedColor(colorType == 7 ? vword32(at) : vhalf(at), colorType);
            [unroll] for(uint k = 0; k < 4; ++k) color[k] += weight * float((packed >> (k*8)) & 255);
        }
    }
    DecodedVertex result;
    result.secondary = 0;
    result.color = (vword(kVMaterialAlpha) << 24) | vword(kVMaterialColor);
    if(hasColor) {
        result.color = 0;
        [unroll] for(uint k = 0; k < 4; ++k) result.color |= uint(clamp(color[k], 0.0, 255.0)) << (k*8);
    }
    if(flags & 8) normal = -normal;
    if(weightType != 0) {
        precise float3 skinned = 0, skinnedNormal = 0;
        for(uint i = 0; i < weightCount; ++i) {
            precise float weight = unsignedValue(base + vword(kVWeightOffset) + i*typeStep(weightType), weightType);
            precise float3 bone = transformPosition(kVBones + i*12, p);
            precise float3 boneNormal = transformDirection(kVBones + i*12, normal);
            [unroll] for(uint j = 0; j < 3; ++j) {
                skinned[j] += bone[j] * weight;
                skinnedNormal[j] += boneNormal[j] * weight;
            }
        }
        p = skinned;
        normal = skinnedNormal;
    }
    if(flags & 4) {
        // light_vertex
        precise float3 world = transformPosition(kVWorld, p);
        precise float3 worldNormal = normalize3(transformDirection(kVWorld, normal));
        uint update = vword(kVMaterialUpdate);
        float3 material[3];
        [unroll] for(uint m = 0; m < 3; ++m) {
            material[m] = vfloat3(kVMaterial + m*3);
            if(hasColor && (update & (1u << m)) != 0) material[m] = colorComponents(result.color);
        }
        precise float3 lit = vfloat3(kVEmissive) + material[0] * vfloat3(kVAmbientLight);
        precise float3 highlight = 0;
        float exponent = vfloat(kVExponent);
        float3 viewDirection = vfloat3(kVViewDirection);
        for(uint l = 0; l < 4; ++l) {
            uint light = kVLights + l*kVLightWords;
            if(vword(light) == 0) continue;
            uint type = vword(light+1), kind = vword(light+2);
            precise float3 direction = vfloat3(light+3);
            precise float attenuation = 1.0;
            if(type != 0) {
                direction = direction - world;
                precise float distance = sqrt(dot3(direction, direction));
                precise float denominator = vfloat(light+12) + distance*vfloat(light+13) + distance*distance*vfloat(light+14);
                attenuation = denominator > 0 ? clamp(1.0/denominator, 0.0, 1.0) : 1.0;
                direction = normalize3(direction);
            } else {
                direction = vfloat3(light+6);
            }
            if(type >= 2) {
                precise float cosine = -dot3(direction, vfloat3(light+15));
                attenuation *= cosine >= vfloat(light+18) ? powCpu(max(cosine, 0.0), vfloat(light+19)) : 0.0;
            }
            precise float facing = max(0.0, dot3(worldNormal, direction));
            precise float diffuseFactor = kind == 2 ? powCpu(facing, exponent) : facing;
            precise float specularFactor = 0;
            if(kind == 1 && facing > 0) {
                float3 halfway = type == 0 ? vfloat3(light+9) : normalize3(direction + viewDirection);
                specularFactor = powCpu(max(0.0, dot3(worldNormal, halfway)), exponent);
            }
            float3 ambient = vfloat3(light+20), diffuse = vfloat3(light+23), specular = vfloat3(light+26);
            [unroll] for(uint j = 0; j < 3; ++j) {
                lit[j] += attenuation * (material[0][j]*ambient[j] + diffuseFactor*material[1][j]*diffuse[j]);
                highlight[j] += attenuation * specularFactor * material[2][j] * specular[j];
            }
        }
        uint alpha = hasColor && (update & 1) != 0 ? result.color >> 24 : vword(kVMaterialAlpha);
        result.color = ((alpha * vword(kVAlphaScale) + 127) / 255) << 24;
        [unroll] for(uint j = 0; j < 3; ++j) {
            if((flags & 16) == 0) lit[j] += highlight[j];
            else result.secondary |= uint(clamp(highlight[j]*255.0, 0.0, 255.0)) << (j*8);
            result.color |= uint(clamp(lit[j]*255.0, 0.0, 255.0)) << (j*8);
        }
    }
    result.position = p;
    result.u = u; result.v = v;
    if(hasTexture) {
        precise float su = (u * vfloat(kVUvScale) + vfloat(kVUvScale+2)) * vfloat(kVTextureSize);
        precise float sv = (v * vfloat(kVUvScale+1) + vfloat(kVUvScale+3)) * vfloat(kVTextureSize+1);
        result.u = su; result.v = sv;
    }
    result.drawable = isfinite(p.x) && isfinite(p.y) && isfinite(p.z);
    return result;
}
// One thread per input vertex (word 0: count); the draw expands strips/fans.
void storeVertex(uint base, DecodedVertex self) {
    computeOutput[base+0] = asuint(self.position.x);
    computeOutput[base+1] = asuint(self.position.y);
    computeOutput[base+2] = asuint(self.position.z);
    computeOutput[base+3] = self.color;
    computeOutput[base+4] = self.secondary;
    computeOutput[base+5] = asuint(self.u);
    computeOutput[base+6] = asuint(self.v);
    computeOutput[base+7] = asuint(1.0);
    computeOutput[base+8] = asuint(1.0);
}
[numthreads(64,1,1)]
void VertexCS(uint3 id : SV_DispatchThreadID) {
    gJob = 0;
    gLimit = presentColor[15];
    if(id.x >= presentColor[0]) return;
    DecodedVertex self = decodeVertex(id.x);
    uint base = id.x*9;
    computeOutput[base+0] = asuint(self.position.x);
    computeOutput[base+1] = asuint(self.position.y);
    computeOutput[base+2] = asuint(self.position.z);
    computeOutput[base+3] = self.color;
    computeOutput[base+4] = self.secondary;
    computeOutput[base+5] = asuint(self.u);
    computeOutput[base+6] = asuint(self.v);
    computeOutput[base+7] = asuint(1.0);
    computeOutput[base+8] = asuint(1.0);
}
// Next mip level, alpha-weighted 2x2 box (same as texture packs). surface =
// {width, height, output pitch, source pitch}; mode.xy = source size.
[numthreads(8,8,1)]
void MipCS(uint3 id : SV_DispatchThreadID) {
    if(any(id.xy>=surface.xy)) return;
    uint alpha=0; uint3 weighted=0, plain=0;
    for(uint dy=0; dy<2; ++dy) for(uint dx=0; dx<2; ++dx) {
        uint2 p=min(id.xy*2+uint2(dx,dy), mode.xy-1);
        uint4 c=bytes(presentColor[p.y*surface.w+p.x]);
        alpha+=c.a; weighted+=c.rgb*c.a; plain+=c.rgb;
    }
    // Both sides of a vector ?: are evaluated: never divide by zero (undefined in SPIR-V).
    uint3 rgb = alpha ? (weighted+alpha/2)/max(alpha,1u) : (plain+2)/4;
    computeOutput[id.y*surface.z+id.x]=pack(uint4(rgb,(alpha+2)/4));
}

// Race-only image enhancements ([enhancements], see motorstorm_post.hpp). They
// run on the present queue in three passes over the output-resolution image,
// kept as half-float RGB (two words per pixel):
//   PostResolveCS  the presented image (AA resolve, FXAA) -> buffer A
//   DebandCS       removes the steps of 16-bit gradients, A -> B (32-bit colour)
//   PostPS         CAS sharpening, colour correction, dither -> display
// Settings arrive in commands[] (unused by presentation); see PostSlot in C++.
float postF(uint i) { return asfloat(C(i)); }
uint2 postExtent() { return surface.xy*render.y; }
// Each pixel is two words: R|G half floats, then B (low half) and the HUD mask
// (bits 16-23, 0 = scene, 255 = HUD) so every later pass can keep the HUD
// out of the grade. f16tof32 reads only the low half, so the mask is invisible
// to loadHalf.
void storeHalf(uint i, float3 c, float hud) {
    computeOutput[2*i]=f32tof16(c.r)|(f32tof16(c.g)<<16);
    computeOutput[2*i+1]=f32tof16(c.b)|(uint(saturate(hud)*255+0.5)<<16);
}
float3 loadHalf(int2 p) {
    uint2 e=postExtent();
    p=clamp(p,0,int2(e)-1);
    uint i=p.y*e.x+p.x, a=presentColor[2*i], b=presentColor[2*i+1];
    return float3(f16tof32(a),f16tof32(a>>16),f16tof32(b));
}
float loadHud(int2 p) {
    uint2 e=postExtent();
    p=clamp(p,0,int2(e)-1);
    return ((presentColor[2*(p.y*e.x+p.x)+1]>>16)&255)/255.0;
}
// Snapshot of the displayed target's depth words (see kHudTag), one per output
// pixel: the raster sample nearest the output pixel centre. surface = {native
// width, native height, 0, raster depth stride}.
[numthreads(8,8,1)]
void DepthResolveCS(uint3 id : SV_DispatchThreadID) {
    uint2 extent=surface.xy*render.y;
    if(any(id.xy>=extent)) return;
    float r=rasterScale()/float(render.y);
    uint2 limit=uint2(rasterExtent(surface.x),rasterExtent(surface.y))-1;
    uint2 p=min(uint2((float2(id.xy)+0.5)*r),limit);
    computeOutput[id.y*extent.x+id.x]=presentColor[p.y*surface.w+p.x];
}
// HUD coverage of an output pixel from the depth snapshot: the tag of this
// pixel or any of its 8 neighbours, so the one-pixel fringe that edge
// filtering blends around HUD shapes stays ungraded too.
// The depth snapshot (t5) and the other per-frame post inputs.
VK_BIND(8, 0) StructuredBuffer<uint> depthSnapshot : register(t5);
// Every VertexCS job of a submission in one dispatch (Android). Tiny
// per-draw dispatches each paid the GPU's fixed dispatch cost. depthSnapshot
// holds four words per workgroup: the job's first word in presentColor (the
// whole upload buffer), its first output word, its vertex count and the
// group's first vertex. Each job decodes exactly as in VertexCS.
[numthreads(64,1,1)]
void VertexBatchCS(uint3 group : SV_GroupID, uint3 local : SV_GroupThreadID) {
    uint4 entry = uint4(depthSnapshot[group.x*4], depthSnapshot[group.x*4+1], depthSnapshot[group.x*4+2],
                        depthSnapshot[group.x*4+3]);
    uint vertex = entry.w + local.x;
    if(vertex >= entry.z) return;
    gJob = entry.x;
    gLimit = presentColor[gJob+15];
    storeVertex(entry.y + vertex*9, decodeVertex(vertex));
}
float hudMask(int2 p) {
    if((C(0)&64)==0) return 0;
    uint2 e=postExtent();
    float m=0;
    [unroll] for(int dy=-1; dy<=1; ++dy) [unroll] for(int dx=-1; dx<=1; ++dx) {
        int2 q=clamp(p+int2(dx,dy),0,int2(e)-1);
        m=max(m,float((depthSnapshot[q.y*e.x+q.x]>>16)&1));
    }
    return m;
}
uint pcg(uint v) { uint s=v*747796405u+2891336453u; uint w=((s>>((s>>28)+4))^s)*277803737u; return (w>>22)^w; }
float random(uint2 p, uint salt) { return pcg(p.x^pcg(p.y^pcg(salt)))*(1.0/4294967296.0); }
[numthreads(8,8,1)]
void PostResolveCS(uint3 id : SV_DispatchThreadID) {
    uint2 e=postExtent();
    if(any(id.xy>=e)) return;
    float hud=hudMask(int2(id.xy));
    float2 uv=(float2(id.xy)+0.5)/e;
    float3 c=displayShade(uv);
    storeHalf(id.y*e.x+id.x,c,hud);
}
// Debanding (after the mpv deband filter): average four points at a random
// distance and angle. Where every sample is within the threshold of this
// pixel the region is a smooth gradient that 16-bit colour quantized into
// steps, and the average replaces it. A sample beyond twice the threshold (an
// edge or real texture detail) keeps the pixel unchanged.
[numthreads(8,8,1)]
void DebandCS(uint3 id : SV_DispatchThreadID) {
    uint2 e=postExtent();
    if(any(id.xy>=e)) return;
    int2 p=int2(id.xy);
    float3 c=loadHalf(p);
    float3 original=c;
    float threshold=postF(9), range=postF(10);
    [unroll] for(uint it=1; it<=2; ++it) {
        float reach=random(id.xy,C(11)*4+it*2)*range*it*0.5;
        float angle=random(id.xy,C(11)*4+it*2+1)*6.2831853;
        int2 o=int2(round(float2(cos(angle),sin(angle))*reach));
        float3 s0=loadHalf(p+o), s1=loadHalf(p-o), s2=loadHalf(p+int2(-o.y,o.x)), s3=loadHalf(p+int2(o.y,-o.x));
        float3 average=(s0+s1+s2+s3)*0.25;
        float3 spread=max(max(abs(s0-c),abs(s1-c)),max(abs(s2-c),abs(s3-c)));
        float limit=threshold/it;
        if(all(abs(average-c)<limit) && all(spread<2*limit)) c=average;
    }
    // HUD pixels stay exactly as the game drew them.
    float hud=loadHud(p);
    storeHalf(id.y*e.x+id.x,lerp(lerp(original,c,postF(1)),original,hud),hud);
}
// AMD FidelityFX Contrast Adaptive Sharpening (sharpen only, no scaling).
float3 casSharpen(int2 p, float sharpness) {
    float3 a=saturate(loadHalf(p+int2(-1,-1))), b=saturate(loadHalf(p+int2(0,-1))), c=saturate(loadHalf(p+int2(1,-1)));
    float3 d=saturate(loadHalf(p+int2(-1,0))), e=saturate(loadHalf(p)), f=saturate(loadHalf(p+int2(1,0)));
    float3 g=saturate(loadHalf(p+int2(-1,1))), h=saturate(loadHalf(p+int2(0,1))), i=saturate(loadHalf(p+int2(1,1)));
    float3 lo=min(min(min(d,e),min(f,b)),h), hi=max(max(max(d,e),max(f,b)),h);
    lo+=min(lo,min(min(a,c),min(g,i)));
    hi+=max(hi,max(max(a,c),max(g,i)));
    float3 amplitude=sqrt(saturate(min(lo,2-hi)/max(hi,1e-5)));
    float3 w=amplitude*(-1/lerp(8.0,5.0,saturate(sharpness)));
    return saturate((b*w+d*w+f*w+h*w+e)/(1+4*w));
}
// sRGB transfer functions.
float3 toLinear(float3 c) { return c<0.04045 ? c/12.92 : pow(max((c+0.055)/1.055,0),2.4); }
float3 fromLinear(float3 c) { return c<0.0031308 ? c*12.92 : 1.055*pow(max(c,0),1/2.4)-0.055; }
float lumaLinear(float3 c) { return dot(c,float3(0.2126,0.7152,0.0722)); }
// Colour correction in linear light: exposure and white balance (multipliers
// prepared on the CPU), contrast around 18% grey, saturation.
float3 colorCorrect(float3 c) {
    c*=float3(postF(6),postF(7),postF(8))*postF(3);
    c=0.18*pow(max(c,0)/0.18,postF(4));
    float y=lumaLinear(c);
    return max(y+(c-y)*postF(5),0);
}
float3 postColor(int2 p) {
    uint flags=C(0);
    float3 original=saturate(loadHalf(p));
    float3 c=(flags&2)!=0 ? casSharpen(p,postF(2)) : original;
    if((flags&4)!=0) c=saturate(fromLinear(colorCorrect(toLinear(c))));
    // Fade in/out at race start and end.
    c=lerp(original,c,postF(1));
    // The HUD keeps the game's own colours.
    return lerp(c,original,loadHud(p));
}
float3 postDither(float3 c, uint2 q) {
    // Triangular dither to the 8-bit display, so the half-float chain adds
    // no banding of its own.
    if((C(0)&32)!=0) {
        c+=postF(1)*(random(q,C(11)*2)+random(q,C(11)*2+1)-1)/255.0;
    }
    return saturate(c);
}
float3 postShade(int2 p, uint2 q) { return postDither(postColor(p),q); }
float4 PostPS(PresentVarying i) : SV_Target {
    int2 p=min(int2(i.uv*postExtent()),int2(postExtent())-1);
    return float4(postShade(p,uint2(i.position.xy)),1);
}
// Readback of the exact post shading code for pixel checks, before swapchain
// scaling. Diagnostic calls use their own scratch buffers.
[numthreads(8,8,1)]
void PostCaptureCS(uint3 id : SV_DispatchThreadID) {
    uint2 e=postExtent();
    if(any(id.xy>=e)) return;
    computeOutput[id.y*e.x+id.x]=pack(uint4(postShade(int2(id.xy),id.xy)*255+0.5,255));
}
// Colour depends on the output pixel, not on the monitor's pixel density.
// Shade it once on async compute, keeping float32 RGB so no precision is lost.
[numthreads(8,8,1)]
void PostColorCS(uint3 id : SV_DispatchThreadID) {
    uint2 e=postExtent();
    if(any(id.xy>=e)) return;
    float3 c=postColor(int2(id.xy));
    uint p=3*(id.y*e.x+id.x);
    computeOutput[p]=asuint(c.r); computeOutput[p+1]=asuint(c.g); computeOutput[p+2]=asuint(c.b);
}
float3 loadPostColor(uint2 p) {
    uint off=3*(p.y*postExtent().x+p.x);
    return asfloat(uint3(presentColor[off],presentColor[off+1],presentColor[off+2]));
}
float4 PostPresentPS(PresentVarying i) : SV_Target {
    uint2 p=min(uint2(i.uv*postExtent()),postExtent()-1);
    // Dither remains at monitor-pixel resolution with the original seed/fade.
    return float4(postDither(loadPostColor(p),uint2(i.position.xy)),1);
}
[numthreads(8,8,1)]
void PostColorCaptureCS(uint3 id : SV_DispatchThreadID) {
    uint2 e=postExtent();
    if(any(id.xy>=e)) return;
    computeOutput[id.y*e.x+id.x]=pack(uint4(postDither(loadPostColor(id.xy),id.xy)*255+0.5,255));
}
