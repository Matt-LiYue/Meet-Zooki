# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = "/home/scratch/zduan/game design/pong"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/scratch/zduan/game design/pong"

# Include any dependencies generated for this target.
include CMakeFiles/Igloo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Igloo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Igloo.dir/flags.make

CMakeFiles/Igloo.dir/bin/Igloo.cpp.o: CMakeFiles/Igloo.dir/flags.make
CMakeFiles/Igloo.dir/bin/Igloo.cpp.o: bin/Igloo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report "/home/scratch/zduan/game design/pong/CMakeFiles" $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Igloo.dir/bin/Igloo.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/Igloo.dir/bin/Igloo.cpp.o -c "/home/scratch/zduan/game design/pong/bin/Igloo.cpp"

CMakeFiles/Igloo.dir/bin/Igloo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Igloo.dir/bin/Igloo.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E "/home/scratch/zduan/game design/pong/bin/Igloo.cpp" > CMakeFiles/Igloo.dir/bin/Igloo.cpp.i

CMakeFiles/Igloo.dir/bin/Igloo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Igloo.dir/bin/Igloo.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S "/home/scratch/zduan/game design/pong/bin/Igloo.cpp" -o CMakeFiles/Igloo.dir/bin/Igloo.cpp.s

CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.requires:
.PHONY : CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.requires

CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.provides: CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.requires
	$(MAKE) -f CMakeFiles/Igloo.dir/build.make CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.provides.build
.PHONY : CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.provides

CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.provides.build: CMakeFiles/Igloo.dir/bin/Igloo.cpp.o

# Object files for target Igloo
Igloo_OBJECTS = \
"CMakeFiles/Igloo.dir/bin/Igloo.cpp.o"

# External object files for target Igloo
Igloo_EXTERNAL_OBJECTS =

Igloo: CMakeFiles/Igloo.dir/bin/Igloo.cpp.o
Igloo: CMakeFiles/Igloo.dir/build.make
Igloo: /home/f85/zduancs/local/lib/libsfml-graphics.so
Igloo: /home/f85/zduancs/local/lib/libsfml-window.so
Igloo: /home/f85/zduancs/local/lib/libsfml-system.so
Igloo: /home/f85/zduancs/local/lib/libsfml-audio.so
Igloo: /home/f85/zduancs/local/lib/libsfml-network.so
Igloo: CMakeFiles/Igloo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable Igloo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Igloo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Igloo.dir/build: Igloo
.PHONY : CMakeFiles/Igloo.dir/build

CMakeFiles/Igloo.dir/requires: CMakeFiles/Igloo.dir/bin/Igloo.cpp.o.requires
.PHONY : CMakeFiles/Igloo.dir/requires

CMakeFiles/Igloo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Igloo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Igloo.dir/clean

CMakeFiles/Igloo.dir/depend:
	cd "/home/scratch/zduan/game design/pong" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/scratch/zduan/game design/pong" "/home/scratch/zduan/game design/pong" "/home/scratch/zduan/game design/pong" "/home/scratch/zduan/game design/pong" "/home/scratch/zduan/game design/pong/CMakeFiles/Igloo.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Igloo.dir/depend

