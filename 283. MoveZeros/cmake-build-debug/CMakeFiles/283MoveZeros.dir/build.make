# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/hammer/Documents/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/hammer/Documents/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/283MoveZeros.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/283MoveZeros.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/283MoveZeros.dir/flags.make

CMakeFiles/283MoveZeros.dir/main.cpp.o: CMakeFiles/283MoveZeros.dir/flags.make
CMakeFiles/283MoveZeros.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/283MoveZeros.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/283MoveZeros.dir/main.cpp.o -c /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/main.cpp

CMakeFiles/283MoveZeros.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/283MoveZeros.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/main.cpp > CMakeFiles/283MoveZeros.dir/main.cpp.i

CMakeFiles/283MoveZeros.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/283MoveZeros.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/main.cpp -o CMakeFiles/283MoveZeros.dir/main.cpp.s

CMakeFiles/283MoveZeros.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/283MoveZeros.dir/main.cpp.o.requires

CMakeFiles/283MoveZeros.dir/main.cpp.o.provides: CMakeFiles/283MoveZeros.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/283MoveZeros.dir/build.make CMakeFiles/283MoveZeros.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/283MoveZeros.dir/main.cpp.o.provides

CMakeFiles/283MoveZeros.dir/main.cpp.o.provides.build: CMakeFiles/283MoveZeros.dir/main.cpp.o


# Object files for target 283MoveZeros
283MoveZeros_OBJECTS = \
"CMakeFiles/283MoveZeros.dir/main.cpp.o"

# External object files for target 283MoveZeros
283MoveZeros_EXTERNAL_OBJECTS =

283MoveZeros: CMakeFiles/283MoveZeros.dir/main.cpp.o
283MoveZeros: CMakeFiles/283MoveZeros.dir/build.make
283MoveZeros: CMakeFiles/283MoveZeros.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 283MoveZeros"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/283MoveZeros.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/283MoveZeros.dir/build: 283MoveZeros

.PHONY : CMakeFiles/283MoveZeros.dir/build

CMakeFiles/283MoveZeros.dir/requires: CMakeFiles/283MoveZeros.dir/main.cpp.o.requires

.PHONY : CMakeFiles/283MoveZeros.dir/requires

CMakeFiles/283MoveZeros.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/283MoveZeros.dir/cmake_clean.cmake
.PHONY : CMakeFiles/283MoveZeros.dir/clean

CMakeFiles/283MoveZeros.dir/depend:
	cd /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/cmake-build-debug /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/cmake-build-debug /home/hammer/Desktop/面试准备/LeetCode1/283MoveZeros/cmake-build-debug/CMakeFiles/283MoveZeros.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/283MoveZeros.dir/depend
