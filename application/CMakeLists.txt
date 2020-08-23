# Add source to this project's executable.
add_executable (application "src/cmake-project.cpp" "src/cmake-project.h")

target_link_libraries(application PRIVATE say-hello)
# TODO: Add tests and install targets if needed.

