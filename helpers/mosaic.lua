-- LuaJIT helper script for Mosaic
--
-- Copy this helper script (and the libraries: raylib, mosaic)
-- to the root of your project and 'require("mosaic")'
-- Have fun with game development!
--
-- This is intended for LuaJIT - regular Lua may cause problems!
--
-- Editing this script is not recommended.

local ffi = require("ffi")

-- Define C function signatures
ffi.cdef[[
    void mosaic_init(uint32_t width, uint32_t height, uint32_t refresh_rate, const char* title);
    void mosaic_start_frame();
    void mosaic_end_frame();
    bool mosaic_should_close();
    void mosaic_shutdown();
]]

-- Detect platform to load the right library
-- Things will definitely break if we load stuff wrong
local libname
if package.config:sub(1,1) == "\\" then
    libname = "Mosaic.dll"
elseif ffi.os == "OSX" then
    libname = "libMosaic.dylib"
else
    libname = "libMosaic.so"
end

local mosaic = ffi.load(libname)

local M = {}

function M.init(width, height, refresh_rate, title)
    mosaic.mosaic_init(width, height, refresh_rate, title)
end

function M.start_frame()
    mosaic.mosaic_start_frame()
end

function M.end_frame()
    mosaic.mosaic_end_frame()
end

function M.should_close()
    return mosaic.mosaic_should_close()
end

function M.shutdown()
    mosaic.mosaic_shutdown()
end

return M
