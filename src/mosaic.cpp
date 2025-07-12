// Engine modules
#include "graphics.hpp"

#include <stdio.h>

// Predefined consts
#define MOSAIC_MAJOR_VER 1
#define MOSAIC_MINOR_VER 0
#define MOSAIC_PATCH_VER 0

// Misc functions
extern "C" {
    EXPORT void print_mosaic_build() {
        printf("Mosaic Engine: v%d.%d.%d\n",
        MOSAIC_MAJOR_VER, MOSAIC_MINOR_VER, MOSAIC_PATCH_VER);

        printf("Build: %s-%s\n", __DATE__, __TIME__);

        #if defined(_WIN32)
            const char* platform = "WindowsNT";
        #elif defined(__APPLE__) && defined(__MACH__)
            const char* platform = "MacOS";
        #elif defined(__linux__)
            const char* platform = "Linux"
        #else
            const char* platform = "Unknown"
        #endif

        #if defined(__x86_64__) || defined(_M_X64)
            const char* arch = "x86_64";
        #elif defined(__i386__) || defined(_M_IX86)
            const char* arch = "x86";
        #elif defined(__aarch64__)
            const char* arch = "ARM64";
        #elif defined(__arm__)
            const char* arch = "ARM";
        #else
            const char* arch = "Unknown";
        #endif

        printf("Platform: %s (%s)\n", platform, arch);
    }
}