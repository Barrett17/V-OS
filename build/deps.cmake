set(BUILD_ICU ON)
set(ICU_BUILD_VERSION 57.2)
set(HEADERS_PATH_BASE "/usr/include")

set(EXR_LIBRARIES "IlmImf;Half")
set(EXR_INCLUDES "${HEADERS_PATH_BASE}/OpenEXR/")

set(FREETYPE_LIBRARIES "freetype")

set(GIF_LIBRARIES "gif")

set(ICNS_LIBRARIES "icns")

set(INPUT_LIBRARIES "input")

set(JPEG_LIBRARIES "jpeg")

set(PNG_LIBRARIES "png")
set(PNG_INCLUDES "${HEADERS_PATH_BASE}/libpng/")

set(TIFF_LIBRARIES "tiff")

set(UDEV_LIBRARIES "udev")

set(WEBP_LIBRARIES "webp")


add_subdirectory(external/icu-cmake)

find_package(ZLIB REQUIRED)
