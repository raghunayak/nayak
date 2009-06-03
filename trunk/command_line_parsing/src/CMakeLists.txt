cmake_minimum_required(VERSION 2.6)

project (clip)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# add the executable
add_library(clip command_line_parser.cpp command_line_parser.h command_line_parser_inl.h debug_helper.h main.cpp)

