# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /home/david/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/david/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/david/Documents/Scrabble-client/Scrabble

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Scrabble.pro.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Scrabble.pro.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Scrabble.pro.dir/flags.make

CMakeFiles/Scrabble.pro.dir/main.cpp.o: CMakeFiles/Scrabble.pro.dir/flags.make
CMakeFiles/Scrabble.pro.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Scrabble.pro.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.pro.dir/main.cpp.o -c /home/david/Documents/Scrabble-client/Scrabble/main.cpp

CMakeFiles/Scrabble.pro.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.pro.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/david/Documents/Scrabble-client/Scrabble/main.cpp > CMakeFiles/Scrabble.pro.dir/main.cpp.i

CMakeFiles/Scrabble.pro.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.pro.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/david/Documents/Scrabble-client/Scrabble/main.cpp -o CMakeFiles/Scrabble.pro.dir/main.cpp.s

CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.o: CMakeFiles/Scrabble.pro.dir/flags.make
CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.o: Scrabble.pro_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.o -c /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug/Scrabble.pro_autogen/mocs_compilation.cpp

CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug/Scrabble.pro_autogen/mocs_compilation.cpp > CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.i

CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug/Scrabble.pro_autogen/mocs_compilation.cpp -o CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.s

# Object files for target Scrabble.pro
Scrabble_pro_OBJECTS = \
"CMakeFiles/Scrabble.pro.dir/main.cpp.o" \
"CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.o"

# External object files for target Scrabble.pro
Scrabble_pro_EXTERNAL_OBJECTS =

Scrabble.pro: CMakeFiles/Scrabble.pro.dir/main.cpp.o
Scrabble.pro: CMakeFiles/Scrabble.pro.dir/Scrabble.pro_autogen/mocs_compilation.cpp.o
Scrabble.pro: CMakeFiles/Scrabble.pro.dir/build.make
Scrabble.pro: CMakeFiles/Scrabble.pro.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Scrabble.pro"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Scrabble.pro.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Scrabble.pro.dir/build: Scrabble.pro

.PHONY : CMakeFiles/Scrabble.pro.dir/build

CMakeFiles/Scrabble.pro.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Scrabble.pro.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Scrabble.pro.dir/clean

CMakeFiles/Scrabble.pro.dir/depend:
	cd /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/david/Documents/Scrabble-client/Scrabble /home/david/Documents/Scrabble-client/Scrabble /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug /home/david/Documents/Scrabble-client/Scrabble/cmake-build-debug/CMakeFiles/Scrabble.pro.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Scrabble.pro.dir/depend

