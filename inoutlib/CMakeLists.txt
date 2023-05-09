file(GLOB INOUT_LIB_SRC "./*.cpp")

add_library(inoutlib STATIC ${INOUT_LIB_SRC})

target_include_directories(inoutlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})