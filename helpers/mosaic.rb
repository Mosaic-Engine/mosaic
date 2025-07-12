# Ruby helper script for Mosaic
#
# Copy this helper script (and the libraries: raylib, mosaic)
# to the root of your project and " require_relative 'mosaic' "
# Have fun with game development!
#
# Editing this script is not recommended.

require 'fiddle'
require 'fiddle/import'

module Mosaic
    extend Fiddle::Importer

    dll_path = RbConfig::CONFIG['host_os'] =~ /mswin|mingw|cygwin/ ? 'Mosaic.dll' : 'libMosaic.so'
    dlload = dll_path

    extern 'void mosaic_init(uint32_t, uint32_t, uint32_t, const char*)'
    extern 'void mosaic_start_frame()'
    extern 'void mosaic_end_frame()'
    extern 'bool mosaic_should_close()'
    extern 'void mosaic_shutdown()'
end