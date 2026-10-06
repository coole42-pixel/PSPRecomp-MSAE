plugins { id("com.android.application") }
val sdlSource = providers.gradleProperty("sdlSource").orElse("../../../../out/android/deps/SDL3-3.4.18")
android {
    namespace = "org.psprecomp.motorstorm"
    compileSdk = 36
    ndkVersion = "28.2.13676358"
    defaultConfig {
        applicationId = "org.psprecomp.motorstorm"
        minSdk = 29
        targetSdk = 36
        versionCode = 1
        versionName = "0.1-dev"
        ndk { abiFilters += "arm64-v8a" }
        externalNativeBuild { cmake { arguments += listOf("-DCMAKE_BUILD_TYPE=RelWithDebInfo", "-DMOTORSTORM_SDL_SOURCE=${file(sdlSource.get()).canonicalPath}") } }
    }
    externalNativeBuild { cmake { path = file("src/main/cpp/CMakeLists.txt"); version = "3.22.1" } }
    // Required by libadrenotools: hooks must exist in nativeLibraryDir.
    packaging { jniLibs { useLegacyPackaging = true } }
    compileOptions { sourceCompatibility = JavaVersion.VERSION_17; targetCompatibility = JavaVersion.VERSION_17 }
    buildTypes { release { isMinifyEnabled = false } }
    sourceSets { getByName("main").java.srcDir(file("${sdlSource.get()}/android-project/app/src/main/java")) }
}
