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

# Include any dependencies generated for this target.
include CMakeFiles/q.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/q.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q.out.dir/flags.make

CMakeFiles/q.out.dir/q.cpp.o: CMakeFiles/q.out.dir/flags.make
CMakeFiles/q.out.dir/q.cpp.o: q.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/haikus-for-codespaces/MyCMakeproject/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/q.out.dir/q.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/q.out.dir/q.cpp.o -c /workspaces/haikus-for-codespaces/MyCMakeproject/q.cpp

CMakeFiles/q.out.dir/q.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/q.out.dir/q.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/haikus-for-codespaces/MyCMakeproject/q.cpp > CMakeFiles/q.out.dir/q.cpp.i

CMakeFiles/q.out.dir/q.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/q.out.dir/q.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/haikus-for-codespaces/MyCMakeproject/q.cpp -o CMakeFiles/q.out.dir/q.cpp.s

# Object files for target q.out
q_out_OBJECTS = \
"CMakeFiles/q.out.dir/q.cpp.o"

# External object files for target q.out
q_out_EXTERNAL_OBJECTS =

q.out: CMakeFiles/q.out.dir/q.cpp.o
q.out: CMakeFiles/q.out.dir/build.make
q.out: CMakeFiles/q.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/haikus-for-codespaces/MyCMakeproject/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable q.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/q.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q.out.dir/build: q.out

.PHONY : CMakeFiles/q.out.dir/build

CMakeFiles/q.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/q.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/q.out.dir/clean

CMakeFiles/q.out.dir/depend:
	cd /workspaces/haikus-for-codespaces/MyCMakeproject && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject /workspaces/haikus-for-codespaces/MyCMakeproject/CMakeFiles/q.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/q.out.dir/depend

