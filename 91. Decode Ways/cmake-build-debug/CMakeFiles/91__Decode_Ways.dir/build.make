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
CMAKE_SOURCE_DIR = "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/91__Decode_Ways.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/91__Decode_Ways.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/91__Decode_Ways.dir/flags.make

CMakeFiles/91__Decode_Ways.dir/main.cpp.o: CMakeFiles/91__Decode_Ways.dir/flags.make
CMakeFiles/91__Decode_Ways.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/91__Decode_Ways.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/91__Decode_Ways.dir/main.cpp.o -c "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/main.cpp"

CMakeFiles/91__Decode_Ways.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/91__Decode_Ways.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/main.cpp" > CMakeFiles/91__Decode_Ways.dir/main.cpp.i

CMakeFiles/91__Decode_Ways.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/91__Decode_Ways.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/main.cpp" -o CMakeFiles/91__Decode_Ways.dir/main.cpp.s

CMakeFiles/91__Decode_Ways.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/91__Decode_Ways.dir/main.cpp.o.requires

CMakeFiles/91__Decode_Ways.dir/main.cpp.o.provides: CMakeFiles/91__Decode_Ways.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/91__Decode_Ways.dir/build.make CMakeFiles/91__Decode_Ways.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/91__Decode_Ways.dir/main.cpp.o.provides

CMakeFiles/91__Decode_Ways.dir/main.cpp.o.provides.build: CMakeFiles/91__Decode_Ways.dir/main.cpp.o


# Object files for target 91__Decode_Ways
91__Decode_Ways_OBJECTS = \
"CMakeFiles/91__Decode_Ways.dir/main.cpp.o"

# External object files for target 91__Decode_Ways
91__Decode_Ways_EXTERNAL_OBJECTS =

91__Decode_Ways: CMakeFiles/91__Decode_Ways.dir/main.cpp.o
91__Decode_Ways: CMakeFiles/91__Decode_Ways.dir/build.make
91__Decode_Ways: CMakeFiles/91__Decode_Ways.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 91__Decode_Ways"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/91__Decode_Ways.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/91__Decode_Ways.dir/build: 91__Decode_Ways

.PHONY : CMakeFiles/91__Decode_Ways.dir/build

CMakeFiles/91__Decode_Ways.dir/requires: CMakeFiles/91__Decode_Ways.dir/main.cpp.o.requires

.PHONY : CMakeFiles/91__Decode_Ways.dir/requires

CMakeFiles/91__Decode_Ways.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/91__Decode_Ways.dir/cmake_clean.cmake
.PHONY : CMakeFiles/91__Decode_Ways.dir/clean

CMakeFiles/91__Decode_Ways.dir/depend:
	cd "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways" "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways" "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/cmake-build-debug" "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/cmake-build-debug" "/media/hammer/HAMMER/Github/MyLeetCode/91. Decode Ways/cmake-build-debug/CMakeFiles/91__Decode_Ways.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/91__Decode_Ways.dir/depend

