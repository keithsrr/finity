include_directories(BEFORE SYSTEM ${CMAKE_SOURCE_DIR}/third_party/googletest/googletest/include)
include_directories(BEFORE SYSTEM ${CMAKE_SOURCE_DIR}/third_party/googletest/googlemock/include)
include_directories(BEFORE SYSTEM ./)
include_directories(AFTER SYSTEM /usr/local/include)

file(GLOB_RECURSE
        test_src
        CONFIGURE_DEPENDS
        test_body.cpp
        )

#file(GLOB_RECURSE
#        third_party_src
#        CONFIGURE_DEPENDS
#        third_party/*.cpp
#        )

add_executable(test_main
        main.cpp
        ${test_src}
        ${third_party_src}
        )

target_link_libraries(test_main
        gtest
        gtest_main
        gmock
        gmock_main
        )

