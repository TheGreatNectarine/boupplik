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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nickmarhal/CLionProjects/PRACTICES

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PRACTICES.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PRACTICES.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PRACTICES.dir/flags.make

CMakeFiles/PRACTICES.dir/main.cpp.o: CMakeFiles/PRACTICES.dir/flags.make
CMakeFiles/PRACTICES.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PRACTICES.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PRACTICES.dir/main.cpp.o -c /Users/nickmarhal/CLionProjects/PRACTICES/main.cpp

CMakeFiles/PRACTICES.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PRACTICES.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nickmarhal/CLionProjects/PRACTICES/main.cpp > CMakeFiles/PRACTICES.dir/main.cpp.i

CMakeFiles/PRACTICES.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PRACTICES.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nickmarhal/CLionProjects/PRACTICES/main.cpp -o CMakeFiles/PRACTICES.dir/main.cpp.s

CMakeFiles/PRACTICES.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/PRACTICES.dir/main.cpp.o.requires

CMakeFiles/PRACTICES.dir/main.cpp.o.provides: CMakeFiles/PRACTICES.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/PRACTICES.dir/build.make CMakeFiles/PRACTICES.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/PRACTICES.dir/main.cpp.o.provides

CMakeFiles/PRACTICES.dir/main.cpp.o.provides.build: CMakeFiles/PRACTICES.dir/main.cpp.o


CMakeFiles/PRACTICES.dir/practice.cpp.o: CMakeFiles/PRACTICES.dir/flags.make
CMakeFiles/PRACTICES.dir/practice.cpp.o: ../practice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PRACTICES.dir/practice.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PRACTICES.dir/practice.cpp.o -c /Users/nickmarhal/CLionProjects/PRACTICES/practice.cpp

CMakeFiles/PRACTICES.dir/practice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PRACTICES.dir/practice.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nickmarhal/CLionProjects/PRACTICES/practice.cpp > CMakeFiles/PRACTICES.dir/practice.cpp.i

CMakeFiles/PRACTICES.dir/practice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PRACTICES.dir/practice.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nickmarhal/CLionProjects/PRACTICES/practice.cpp -o CMakeFiles/PRACTICES.dir/practice.cpp.s

CMakeFiles/PRACTICES.dir/practice.cpp.o.requires:

.PHONY : CMakeFiles/PRACTICES.dir/practice.cpp.o.requires

CMakeFiles/PRACTICES.dir/practice.cpp.o.provides: CMakeFiles/PRACTICES.dir/practice.cpp.o.requires
	$(MAKE) -f CMakeFiles/PRACTICES.dir/build.make CMakeFiles/PRACTICES.dir/practice.cpp.o.provides.build
.PHONY : CMakeFiles/PRACTICES.dir/practice.cpp.o.provides

CMakeFiles/PRACTICES.dir/practice.cpp.o.provides.build: CMakeFiles/PRACTICES.dir/practice.cpp.o


CMakeFiles/PRACTICES.dir/week7.cpp.o: CMakeFiles/PRACTICES.dir/flags.make
CMakeFiles/PRACTICES.dir/week7.cpp.o: ../week7.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PRACTICES.dir/week7.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PRACTICES.dir/week7.cpp.o -c /Users/nickmarhal/CLionProjects/PRACTICES/week7.cpp

CMakeFiles/PRACTICES.dir/week7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PRACTICES.dir/week7.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nickmarhal/CLionProjects/PRACTICES/week7.cpp > CMakeFiles/PRACTICES.dir/week7.cpp.i

CMakeFiles/PRACTICES.dir/week7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PRACTICES.dir/week7.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nickmarhal/CLionProjects/PRACTICES/week7.cpp -o CMakeFiles/PRACTICES.dir/week7.cpp.s

CMakeFiles/PRACTICES.dir/week7.cpp.o.requires:

.PHONY : CMakeFiles/PRACTICES.dir/week7.cpp.o.requires

CMakeFiles/PRACTICES.dir/week7.cpp.o.provides: CMakeFiles/PRACTICES.dir/week7.cpp.o.requires
	$(MAKE) -f CMakeFiles/PRACTICES.dir/build.make CMakeFiles/PRACTICES.dir/week7.cpp.o.provides.build
.PHONY : CMakeFiles/PRACTICES.dir/week7.cpp.o.provides

CMakeFiles/PRACTICES.dir/week7.cpp.o.provides.build: CMakeFiles/PRACTICES.dir/week7.cpp.o


CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o: CMakeFiles/PRACTICES.dir/flags.make
CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o: ../complex_matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o -c /Users/nickmarhal/CLionProjects/PRACTICES/complex_matrix.cpp

CMakeFiles/PRACTICES.dir/complex_matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PRACTICES.dir/complex_matrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nickmarhal/CLionProjects/PRACTICES/complex_matrix.cpp > CMakeFiles/PRACTICES.dir/complex_matrix.cpp.i

CMakeFiles/PRACTICES.dir/complex_matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PRACTICES.dir/complex_matrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nickmarhal/CLionProjects/PRACTICES/complex_matrix.cpp -o CMakeFiles/PRACTICES.dir/complex_matrix.cpp.s

CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.requires:

.PHONY : CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.requires

CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.provides: CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/PRACTICES.dir/build.make CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.provides.build
.PHONY : CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.provides

CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.provides.build: CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o


# Object files for target PRACTICES
PRACTICES_OBJECTS = \
"CMakeFiles/PRACTICES.dir/main.cpp.o" \
"CMakeFiles/PRACTICES.dir/practice.cpp.o" \
"CMakeFiles/PRACTICES.dir/week7.cpp.o" \
"CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o"

# External object files for target PRACTICES
PRACTICES_EXTERNAL_OBJECTS =

PRACTICES: CMakeFiles/PRACTICES.dir/main.cpp.o
PRACTICES: CMakeFiles/PRACTICES.dir/practice.cpp.o
PRACTICES: CMakeFiles/PRACTICES.dir/week7.cpp.o
PRACTICES: CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o
PRACTICES: CMakeFiles/PRACTICES.dir/build.make
PRACTICES: CMakeFiles/PRACTICES.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable PRACTICES"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PRACTICES.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PRACTICES.dir/build: PRACTICES

.PHONY : CMakeFiles/PRACTICES.dir/build

CMakeFiles/PRACTICES.dir/requires: CMakeFiles/PRACTICES.dir/main.cpp.o.requires
CMakeFiles/PRACTICES.dir/requires: CMakeFiles/PRACTICES.dir/practice.cpp.o.requires
CMakeFiles/PRACTICES.dir/requires: CMakeFiles/PRACTICES.dir/week7.cpp.o.requires
CMakeFiles/PRACTICES.dir/requires: CMakeFiles/PRACTICES.dir/complex_matrix.cpp.o.requires

.PHONY : CMakeFiles/PRACTICES.dir/requires

CMakeFiles/PRACTICES.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PRACTICES.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PRACTICES.dir/clean

CMakeFiles/PRACTICES.dir/depend:
	cd /Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nickmarhal/CLionProjects/PRACTICES /Users/nickmarhal/CLionProjects/PRACTICES /Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug /Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug /Users/nickmarhal/CLionProjects/PRACTICES/cmake-build-debug/CMakeFiles/PRACTICES.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PRACTICES.dir/depend

