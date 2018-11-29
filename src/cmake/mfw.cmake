GET_FILENAME_COMPONENT(_MFW_INSTALL_PREFIX ${CMAKE_CURRENT_LIST_FILE} PATH)
GET_FILENAME_COMPONENT(_MFW_INSTALL_PREFIX ${_MFW_INSTALL_PREFIX} PATH)

INCLUDE(${_MFW_INSTALL_PREFIX}/cmake/mfw-libs.cmake)
INCLUDE(${_MFW_INSTALL_PREFIX}/cmake/mfw-sdp.cmake)
INCLUDE_DIRECTORIES(${_MFW_INSTALL_PREFIX}/include)
INCLUDE_DIRECTORIES(${_MFW_INSTALL_PREFIX}/3party-include)
INCLUDE_DIRECTORIES(/usr/local/mfwsdp)

ADD_DEFINITIONS(-Wno-deprecated)

SET(SOURCE_FILES)
SET(LIBRARY_FILES service)
