# CMakeList.txt : CMake project for AccountMangement, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("AccountMangement")

# Add source to this project's executable.
add_executable (AccountMangement "AccountMangement.cpp" "AccountMangement.h" "AccountOperation.h")

# TODO: Add tests and install targets if needed.
