#include "raylib.h"
#include "stdint.h"

// Come back and fix this later lmao
#ifdef _WIN32
  #define EXPORT __declspec(dllexport)
#else
  #define EXPORT
#endif


// Initalizes graphics backend via Raylib
extern "C" {
    EXPORT void mosaic_init(uint32_t width, uint32_t height, uint32_t refresh_rate, const char* title) {
    InitWindow(width, height, title);
    SetTargetFPS(refresh_rate);
    }
}

// Clears screen to black, ready to draw content on
extern "C" {
    EXPORT void mosaic_start_frame() {
        BeginDrawing();
        ClearBackground(BLACK);
    }
}

// Ends drawing mode, sends content to display
extern "C" {
    EXPORT void mosaic_end_frame() {
        EndDrawing();
    }
}

// A wrapper over the Raylib function of identical name
extern "C" {
    EXPORT bool mosaic_should_close() {
        return WindowShouldClose();
    }
}

extern "C" {
    EXPORT void mosaic_shutdown() {
        CloseWindow();
    }
}