# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.3

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
CMAKE_COMMAND = /tools/Xilinx/Vitis/2020.1/tps/lnx64/cmake-3.3.2/bin/cmake

# The command to remove a file.
RM = /tools/Xilinx/Vitis/2020.1/tps/lnx64/cmake-3.3.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mzdev/workspace/RFA/rocket_launcher

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mzdev/workspace/RFA/rocket_launcher/build

# Include any dependencies generated for this target.
include CMakeFiles/RFAOneLaunch.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RFAOneLaunch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RFAOneLaunch.dir/flags.make

CMakeFiles/RFAOneLaunch.dir/main.cpp.o: CMakeFiles/RFAOneLaunch.dir/flags.make
CMakeFiles/RFAOneLaunch.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mzdev/workspace/RFA/rocket_launcher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RFAOneLaunch.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RFAOneLaunch.dir/main.cpp.o -c /home/mzdev/workspace/RFA/rocket_launcher/main.cpp

CMakeFiles/RFAOneLaunch.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RFAOneLaunch.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mzdev/workspace/RFA/rocket_launcher/main.cpp > CMakeFiles/RFAOneLaunch.dir/main.cpp.i

CMakeFiles/RFAOneLaunch.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RFAOneLaunch.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mzdev/workspace/RFA/rocket_launcher/main.cpp -o CMakeFiles/RFAOneLaunch.dir/main.cpp.s

CMakeFiles/RFAOneLaunch.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/RFAOneLaunch.dir/main.cpp.o.requires

CMakeFiles/RFAOneLaunch.dir/main.cpp.o.provides: CMakeFiles/RFAOneLaunch.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/RFAOneLaunch.dir/build.make CMakeFiles/RFAOneLaunch.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/RFAOneLaunch.dir/main.cpp.o.provides

CMakeFiles/RFAOneLaunch.dir/main.cpp.o.provides.build: CMakeFiles/RFAOneLaunch.dir/main.cpp.o


CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o: CMakeFiles/RFAOneLaunch.dir/flags.make
CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o: ../statemachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mzdev/workspace/RFA/rocket_launcher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o -c /home/mzdev/workspace/RFA/rocket_launcher/statemachine.cpp

CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mzdev/workspace/RFA/rocket_launcher/statemachine.cpp > CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.i

CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mzdev/workspace/RFA/rocket_launcher/statemachine.cpp -o CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.s

CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.requires:

.PHONY : CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.requires

CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.provides: CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.requires
	$(MAKE) -f CMakeFiles/RFAOneLaunch.dir/build.make CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.provides.build
.PHONY : CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.provides

CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.provides.build: CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o


# Object files for target RFAOneLaunch
RFAOneLaunch_OBJECTS = \
"CMakeFiles/RFAOneLaunch.dir/main.cpp.o" \
"CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o"

# External object files for target RFAOneLaunch
RFAOneLaunch_EXTERNAL_OBJECTS =

RFAOneLaunch: CMakeFiles/RFAOneLaunch.dir/main.cpp.o
RFAOneLaunch: CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o
RFAOneLaunch: CMakeFiles/RFAOneLaunch.dir/build.make
RFAOneLaunch: CMakeFiles/RFAOneLaunch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mzdev/workspace/RFA/rocket_launcher/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable RFAOneLaunch"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RFAOneLaunch.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RFAOneLaunch.dir/build: RFAOneLaunch

.PHONY : CMakeFiles/RFAOneLaunch.dir/build

CMakeFiles/RFAOneLaunch.dir/requires: CMakeFiles/RFAOneLaunch.dir/main.cpp.o.requires
CMakeFiles/RFAOneLaunch.dir/requires: CMakeFiles/RFAOneLaunch.dir/statemachine.cpp.o.requires

.PHONY : CMakeFiles/RFAOneLaunch.dir/requires

CMakeFiles/RFAOneLaunch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RFAOneLaunch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RFAOneLaunch.dir/clean

CMakeFiles/RFAOneLaunch.dir/depend:
	cd /home/mzdev/workspace/RFA/rocket_launcher/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mzdev/workspace/RFA/rocket_launcher /home/mzdev/workspace/RFA/rocket_launcher /home/mzdev/workspace/RFA/rocket_launcher/build /home/mzdev/workspace/RFA/rocket_launcher/build /home/mzdev/workspace/RFA/rocket_launcher/build/CMakeFiles/RFAOneLaunch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RFAOneLaunch.dir/depend
