# CMake file for blendint project
#

file(GLOB test_HEADER "*.hpp")
file(GLOB test_SRC "*.cpp")

add_executable(testFrame ${test_HEADER} ${test_SRC})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(testFrame blendint gtest ${LIBS})
