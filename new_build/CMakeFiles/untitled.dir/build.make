# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/amgalan/CLionProjects/untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/amgalan/CLionProjects/untitled/new_build

# Include any dependencies generated for this target.
include CMakeFiles/untitled.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/untitled.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled.dir/flags.make

CMakeFiles/untitled.dir/src/game.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/src/game.cpp.o: /home/amgalan/CLionProjects/untitled/src/game.cpp
CMakeFiles/untitled.dir/src/game.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled.dir/src/game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/src/game.cpp.o -MF CMakeFiles/untitled.dir/src/game.cpp.o.d -o CMakeFiles/untitled.dir/src/game.cpp.o -c /home/amgalan/CLionProjects/untitled/src/game.cpp

CMakeFiles/untitled.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/src/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amgalan/CLionProjects/untitled/src/game.cpp > CMakeFiles/untitled.dir/src/game.cpp.i

CMakeFiles/untitled.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/src/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amgalan/CLionProjects/untitled/src/game.cpp -o CMakeFiles/untitled.dir/src/game.cpp.s

CMakeFiles/untitled.dir/src/main.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/src/main.cpp.o: /home/amgalan/CLionProjects/untitled/src/main.cpp
CMakeFiles/untitled.dir/src/main.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/src/main.cpp.o -MF CMakeFiles/untitled.dir/src/main.cpp.o.d -o CMakeFiles/untitled.dir/src/main.cpp.o -c /home/amgalan/CLionProjects/untitled/src/main.cpp

CMakeFiles/untitled.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amgalan/CLionProjects/untitled/src/main.cpp > CMakeFiles/untitled.dir/src/main.cpp.i

CMakeFiles/untitled.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amgalan/CLionProjects/untitled/src/main.cpp -o CMakeFiles/untitled.dir/src/main.cpp.s

CMakeFiles/untitled.dir/src/block.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/src/block.cpp.o: /home/amgalan/CLionProjects/untitled/src/block.cpp
CMakeFiles/untitled.dir/src/block.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled.dir/src/block.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/src/block.cpp.o -MF CMakeFiles/untitled.dir/src/block.cpp.o.d -o CMakeFiles/untitled.dir/src/block.cpp.o -c /home/amgalan/CLionProjects/untitled/src/block.cpp

CMakeFiles/untitled.dir/src/block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/src/block.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amgalan/CLionProjects/untitled/src/block.cpp > CMakeFiles/untitled.dir/src/block.cpp.i

CMakeFiles/untitled.dir/src/block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/src/block.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amgalan/CLionProjects/untitled/src/block.cpp -o CMakeFiles/untitled.dir/src/block.cpp.s

CMakeFiles/untitled.dir/src/blocks.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/src/blocks.cpp.o: /home/amgalan/CLionProjects/untitled/src/blocks.cpp
CMakeFiles/untitled.dir/src/blocks.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled.dir/src/blocks.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/src/blocks.cpp.o -MF CMakeFiles/untitled.dir/src/blocks.cpp.o.d -o CMakeFiles/untitled.dir/src/blocks.cpp.o -c /home/amgalan/CLionProjects/untitled/src/blocks.cpp

CMakeFiles/untitled.dir/src/blocks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/src/blocks.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amgalan/CLionProjects/untitled/src/blocks.cpp > CMakeFiles/untitled.dir/src/blocks.cpp.i

CMakeFiles/untitled.dir/src/blocks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/src/blocks.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amgalan/CLionProjects/untitled/src/blocks.cpp -o CMakeFiles/untitled.dir/src/blocks.cpp.s

CMakeFiles/untitled.dir/src/colors.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/src/colors.cpp.o: /home/amgalan/CLionProjects/untitled/src/colors.cpp
CMakeFiles/untitled.dir/src/colors.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/untitled.dir/src/colors.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/src/colors.cpp.o -MF CMakeFiles/untitled.dir/src/colors.cpp.o.d -o CMakeFiles/untitled.dir/src/colors.cpp.o -c /home/amgalan/CLionProjects/untitled/src/colors.cpp

CMakeFiles/untitled.dir/src/colors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/src/colors.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amgalan/CLionProjects/untitled/src/colors.cpp > CMakeFiles/untitled.dir/src/colors.cpp.i

CMakeFiles/untitled.dir/src/colors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/src/colors.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amgalan/CLionProjects/untitled/src/colors.cpp -o CMakeFiles/untitled.dir/src/colors.cpp.s

CMakeFiles/untitled.dir/src/grid.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/src/grid.cpp.o: /home/amgalan/CLionProjects/untitled/src/grid.cpp
CMakeFiles/untitled.dir/src/grid.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/untitled.dir/src/grid.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/src/grid.cpp.o -MF CMakeFiles/untitled.dir/src/grid.cpp.o.d -o CMakeFiles/untitled.dir/src/grid.cpp.o -c /home/amgalan/CLionProjects/untitled/src/grid.cpp

CMakeFiles/untitled.dir/src/grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/src/grid.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amgalan/CLionProjects/untitled/src/grid.cpp > CMakeFiles/untitled.dir/src/grid.cpp.i

CMakeFiles/untitled.dir/src/grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/src/grid.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amgalan/CLionProjects/untitled/src/grid.cpp -o CMakeFiles/untitled.dir/src/grid.cpp.s

CMakeFiles/untitled.dir/src/position.cpp.o: CMakeFiles/untitled.dir/flags.make
CMakeFiles/untitled.dir/src/position.cpp.o: /home/amgalan/CLionProjects/untitled/src/position.cpp
CMakeFiles/untitled.dir/src/position.cpp.o: CMakeFiles/untitled.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/untitled.dir/src/position.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled.dir/src/position.cpp.o -MF CMakeFiles/untitled.dir/src/position.cpp.o.d -o CMakeFiles/untitled.dir/src/position.cpp.o -c /home/amgalan/CLionProjects/untitled/src/position.cpp

CMakeFiles/untitled.dir/src/position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled.dir/src/position.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amgalan/CLionProjects/untitled/src/position.cpp > CMakeFiles/untitled.dir/src/position.cpp.i

CMakeFiles/untitled.dir/src/position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled.dir/src/position.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amgalan/CLionProjects/untitled/src/position.cpp -o CMakeFiles/untitled.dir/src/position.cpp.s

# Object files for target untitled
untitled_OBJECTS = \
"CMakeFiles/untitled.dir/src/game.cpp.o" \
"CMakeFiles/untitled.dir/src/main.cpp.o" \
"CMakeFiles/untitled.dir/src/block.cpp.o" \
"CMakeFiles/untitled.dir/src/blocks.cpp.o" \
"CMakeFiles/untitled.dir/src/colors.cpp.o" \
"CMakeFiles/untitled.dir/src/grid.cpp.o" \
"CMakeFiles/untitled.dir/src/position.cpp.o"

# External object files for target untitled
untitled_EXTERNAL_OBJECTS =

untitled: CMakeFiles/untitled.dir/src/game.cpp.o
untitled: CMakeFiles/untitled.dir/src/main.cpp.o
untitled: CMakeFiles/untitled.dir/src/block.cpp.o
untitled: CMakeFiles/untitled.dir/src/blocks.cpp.o
untitled: CMakeFiles/untitled.dir/src/colors.cpp.o
untitled: CMakeFiles/untitled.dir/src/grid.cpp.o
untitled: CMakeFiles/untitled.dir/src/position.cpp.o
untitled: CMakeFiles/untitled.dir/build.make
untitled: _deps/raylib-build/raylib/libraylib.a
untitled: /usr/lib/x86_64-linux-gnu/libOpenGL.so
untitled: /usr/lib/x86_64-linux-gnu/libGLX.so
untitled: /usr/lib/x86_64-linux-gnu/libGLU.so
untitled: _deps/raylib-build/raylib/external/glfw/src/libglfw3.a
untitled: /usr/lib/x86_64-linux-gnu/librt.a
untitled: /usr/lib/x86_64-linux-gnu/libm.so
untitled: CMakeFiles/untitled.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/amgalan/CLionProjects/untitled/new_build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable untitled"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled.dir/build: untitled
.PHONY : CMakeFiles/untitled.dir/build

CMakeFiles/untitled.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled.dir/clean

CMakeFiles/untitled.dir/depend:
	cd /home/amgalan/CLionProjects/untitled/new_build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/amgalan/CLionProjects/untitled /home/amgalan/CLionProjects/untitled /home/amgalan/CLionProjects/untitled/new_build /home/amgalan/CLionProjects/untitled/new_build /home/amgalan/CLionProjects/untitled/new_build/CMakeFiles/untitled.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/untitled.dir/depend
