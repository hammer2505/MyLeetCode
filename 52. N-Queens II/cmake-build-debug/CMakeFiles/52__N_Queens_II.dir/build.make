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
CMAKE_SOURCE_DIR = "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/52__N_Queens_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/52__N_Queens_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/52__N_Queens_II.dir/flags.make

CMakeFiles/52__N_Queens_II.dir/main.cpp.o: CMakeFiles/52__N_Queens_II.dir/flags.make
CMakeFiles/52__N_Queens_II.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/52__N_Queens_II.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/52__N_Queens_II.dir/main.cpp.o -c "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/main.cpp"

CMakeFiles/52__N_Queens_II.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/52__N_Queens_II.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/main.cpp" > CMakeFiles/52__N_Queens_II.dir/main.cpp.i

CMakeFiles/52__N_Queens_II.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/52__N_Queens_II.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/main.cpp" -o CMakeFiles/52__N_Queens_II.dir/main.cpp.s

CMakeFiles/52__N_Queens_II.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/52__N_Queens_II.dir/main.cpp.o.requires

CMakeFiles/52__N_Queens_II.dir/main.cpp.o.provides: CMakeFiles/52__N_Queens_II.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/52__N_Queens_II.dir/build.make CMakeFiles/52__N_Queens_II.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/52__N_Queens_II.dir/main.cpp.o.provides

CMakeFiles/52__N_Queens_II.dir/main.cpp.o.provides.build: CMakeFiles/52__N_Queens_II.dir/main.cpp.o


# Object files for target 52__N_Queens_II
52__N_Queens_II_OBJECTS = \
"CMakeFiles/52__N_Queens_II.dir/main.cpp.o"

# External object files for target 52__N_Queens_II
52__N_Queens_II_EXTERNAL_OBJECTS =

52__N_Queens_II: CMakeFiles/52__N_Queens_II.dir/main.cpp.o
52__N_Queens_II: CMakeFiles/52__N_Queens_II.dir/build.make
52__N_Queens_II: CMakeFiles/52__N_Queens_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 52__N_Queens_II"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/52__N_Queens_II.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/52__N_Queens_II.dir/build: 52__N_Queens_II

.PHONY : CMakeFiles/52__N_Queens_II.dir/build

CMakeFiles/52__N_Queens_II.dir/requires: CMakeFiles/52__N_Queens_II.dir/main.cpp.o.requires

.PHONY : CMakeFiles/52__N_Queens_II.dir/requires

CMakeFiles/52__N_Queens_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/52__N_Queens_II.dir/cmake_clean.cmake
.PHONY : CMakeFiles/52__N_Queens_II.dir/clean

CMakeFiles/52__N_Queens_II.dir/depend:
	cd "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II" "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II" "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/cmake-build-debug" "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/cmake-build-debug" "/media/hammer/HAMMER/Github/MyLeetCode/52. N-Queens II/cmake-build-debug/CMakeFiles/52__N_Queens_II.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/52__N_Queens_II.dir/depend

