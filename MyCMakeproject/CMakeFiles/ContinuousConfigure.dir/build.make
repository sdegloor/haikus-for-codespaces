# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/haikus-for-codespaces/MyCMakeproject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/haikus-for-codespaces/MyCMakeproject

# Utility rule file for ContinuousConfigure.

# Include the progress variables for this target.
include CMakeFiles/ContinuousConfigure.dir/progress.make

CMakeFiles/ContinuousConfigure:
	/usr/bin/ctest -D ContinuousConfigure

ContinuousConfigure: CMakeFiles/ContinuousConfigure
ContinuousConfigure: CMakeFiles/ContinuousConfigure.dir/build.make

.PHONY : ContinuousConfigure

# Rule to build all files generated by this target.
CMakeFiles/ContinuousConfigure.dir/build: ContinuousConfigure

.PHONY : CMakeFiles/ContinuousConfigure.dir/build

CMakeFiles/ContinuousConfigure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ContinuousConfigure.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ContinuousConfigure.dir/clean

CMakeFiles/ContinuousConfigure.dir/depend:
	cd /workspaces/haikus-for-codespaces/MyCMakeproject && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject/CMakeFiles/ContinuousConfigure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ContinuousConfigure.dir/depend

