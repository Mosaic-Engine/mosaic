# Mosaic CMake file
#
# C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat


cmake_minimum_required(VERSION 3.20)
project(Mosaic CXX)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Sets project as a shared lib / object - not a binary!
add_library(Mosaic SHARED
    src/mosaic.cpp
)

target_include_directories(Mosaic
    PUBLIC ${PROJECT_SOURCE_DIR}/include
    PRIVATE "C:/ExternalLibs/raylib-5.5_win64_msvc16/include"
)

target_link_libraries(Mosaic PRIVATE 
    "C:/ExternalLibs/raylib-5.5_win64_msvc16/lib/raylib.lib"
    opengl32
    gdi32
    winmm
    kernel32
)

# Exporting symbols on Win32
if(WIN32)
    target_compile_definitions(Mosaic PRIVATE MOSAIC_DLL_EXPORTS)
endif()

install(TARGETS Mosaic
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)
install(DIRECTORY include/ DESTINATION include)