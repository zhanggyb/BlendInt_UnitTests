# CMake file for blendint project
#

file(GLOB test_SRC "*.cpp")

add_executable(testNodeView ${test_SRC})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(testNodeView blendint Common gtest ${LIBS})
