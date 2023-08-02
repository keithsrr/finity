
# Configure the version file
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/compilation_config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/compilation_config.h)

add_executable(finity
        finity_main.cpp
)

target_include_directories(finity PUBLIC "${CMAKE_SOURCE_DIR}/third_party/linenoise")

target_link_libraries(
        finity
)