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
CMAKE_SOURCE_DIR = "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/344__Reverse_String.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/344__Reverse_String.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/344__Reverse_String.dir/flags.make

CMakeFiles/344__Reverse_String.dir/main.cpp.o: CMakeFiles/344__Reverse_String.dir/flags.make
CMakeFiles/344__Reverse_String.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/344__Reverse_String.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/344__Reverse_String.dir/main.cpp.o -c "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/main.cpp"

CMakeFiles/344__Reverse_String.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/344__Reverse_String.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/main.cpp" > CMakeFiles/344__Reverse_String.dir/main.cpp.i

CMakeFiles/344__Reverse_String.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/344__Reverse_String.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/main.cpp" -o CMakeFiles/344__Reverse_String.dir/main.cpp.s

CMakeFiles/344__Reverse_String.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/344__Reverse_String.dir/main.cpp.o.requires

CMakeFiles/344__Reverse_String.dir/main.cpp.o.provides: CMakeFiles/344__Reverse_String.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/344__Reverse_String.dir/build.make CMakeFiles/344__Reverse_String.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/344__Reverse_String.dir/main.cpp.o.provides

CMakeFiles/344__Reverse_String.dir/main.cpp.o.provides.build: CMakeFiles/344__Reverse_String.dir/main.cpp.o


# Object files for target 344__Reverse_String
344__Reverse_String_OBJECTS = \
"CMakeFiles/344__Reverse_String.dir/main.cpp.o"

# External object files for target 344__Reverse_String
344__Reverse_String_EXTERNAL_OBJECTS =

344__Reverse_String: CMakeFiles/344__Reverse_String.dir/main.cpp.o
344__Reverse_String: CMakeFiles/344__Reverse_String.dir/build.make
344__Reverse_String: CMakeFiles/344__Reverse_String.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 344__Reverse_String"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/344__Reverse_String.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/344__Reverse_String.dir/build: 344__Reverse_String

.PHONY : CMakeFiles/344__Reverse_String.dir/build

CMakeFiles/344__Reverse_String.dir/requires: CMakeFiles/344__Reverse_String.dir/main.cpp.o.requires

.PHONY : CMakeFiles/344__Reverse_String.dir/requires

CMakeFiles/344__Reverse_String.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/344__Reverse_String.dir/cmake_clean.cmake
.PHONY : CMakeFiles/344__Reverse_String.dir/clean

CMakeFiles/344__Reverse_String.dir/depend:
	cd "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String" "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String" "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/cmake-build-debug" "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/cmake-build-debug" "/home/hammer/Desktop/面试准备/LeetCode1/344. Reverse String/cmake-build-debug/CMakeFiles/344__Reverse_String.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/344__Reverse_String.dir/depend

