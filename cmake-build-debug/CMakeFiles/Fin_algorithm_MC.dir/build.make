# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lindazhong/Fin-algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lindazhong/Fin-algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Fin_algorithm_MC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Fin_algorithm_MC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Fin_algorithm_MC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fin_algorithm_MC.dir/flags.make

CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o: CMakeFiles/Fin_algorithm_MC.dir/flags.make
CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o: ../main.cpp
CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o: CMakeFiles/Fin_algorithm_MC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lindazhong/Fin-algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o -MF CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o.d -o CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o -c /Users/lindazhong/Fin-algorithm/main.cpp

CMakeFiles/Fin_algorithm_MC.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fin_algorithm_MC.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lindazhong/Fin-algorithm/main.cpp > CMakeFiles/Fin_algorithm_MC.dir/main.cpp.i

CMakeFiles/Fin_algorithm_MC.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fin_algorithm_MC.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lindazhong/Fin-algorithm/main.cpp -o CMakeFiles/Fin_algorithm_MC.dir/main.cpp.s

CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o: CMakeFiles/Fin_algorithm_MC.dir/flags.make
CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o: ../src/Simulator.cpp
CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o: CMakeFiles/Fin_algorithm_MC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lindazhong/Fin-algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o -MF CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o.d -o CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o -c /Users/lindazhong/Fin-algorithm/src/Simulator.cpp

CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lindazhong/Fin-algorithm/src/Simulator.cpp > CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.i

CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lindazhong/Fin-algorithm/src/Simulator.cpp -o CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.s

CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o: CMakeFiles/Fin_algorithm_MC.dir/flags.make
CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o: ../src/Payoff.cpp
CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o: CMakeFiles/Fin_algorithm_MC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lindazhong/Fin-algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o -MF CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o.d -o CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o -c /Users/lindazhong/Fin-algorithm/src/Payoff.cpp

CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lindazhong/Fin-algorithm/src/Payoff.cpp > CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.i

CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lindazhong/Fin-algorithm/src/Payoff.cpp -o CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.s

# Object files for target Fin_algorithm_MC
Fin_algorithm_MC_OBJECTS = \
"CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o" \
"CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o" \
"CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o"

# External object files for target Fin_algorithm_MC
Fin_algorithm_MC_EXTERNAL_OBJECTS =

Fin_algorithm_MC: CMakeFiles/Fin_algorithm_MC.dir/main.cpp.o
Fin_algorithm_MC: CMakeFiles/Fin_algorithm_MC.dir/src/Simulator.cpp.o
Fin_algorithm_MC: CMakeFiles/Fin_algorithm_MC.dir/src/Payoff.cpp.o
Fin_algorithm_MC: CMakeFiles/Fin_algorithm_MC.dir/build.make
Fin_algorithm_MC: CMakeFiles/Fin_algorithm_MC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lindazhong/Fin-algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Fin_algorithm_MC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fin_algorithm_MC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fin_algorithm_MC.dir/build: Fin_algorithm_MC
.PHONY : CMakeFiles/Fin_algorithm_MC.dir/build

CMakeFiles/Fin_algorithm_MC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Fin_algorithm_MC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Fin_algorithm_MC.dir/clean

CMakeFiles/Fin_algorithm_MC.dir/depend:
	cd /Users/lindazhong/Fin-algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lindazhong/Fin-algorithm /Users/lindazhong/Fin-algorithm /Users/lindazhong/Fin-algorithm/cmake-build-debug /Users/lindazhong/Fin-algorithm/cmake-build-debug /Users/lindazhong/Fin-algorithm/cmake-build-debug/CMakeFiles/Fin_algorithm_MC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Fin_algorithm_MC.dir/depend

