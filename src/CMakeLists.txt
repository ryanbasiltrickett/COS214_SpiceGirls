cmake_minimum_required(VERSION 3.12)
project(COS214SpiceGirls VERSION 0.1)

file(GLOB COS214SpiceGirls_SRC CONFIGURE_DEPENDS "*.h" "*.cpp")
add_executable(build ${COS214SpiceGirls_SRC})