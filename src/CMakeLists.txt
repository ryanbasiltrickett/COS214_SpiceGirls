cmake_minimum_required(VERSION 3.12)
project(COS214SpiceGirls VERSION 0.1)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB COS214SpiceGirls_SRC CONFIGURE_DEPENDS "*.h" "*.cpp")
add_executable(build ${COS214SpiceGirls_SRC})
target_link_libraries(build ${GTEST_LIBRARIES} pthread)