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
CMAKE_SOURCE_DIR = /Users/nickmarhal/CLionProjects/06Marhal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MarhalLab6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MarhalLab6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MarhalLab6.dir/flags.make

CMakeFiles/MarhalLab6.dir/main.cpp.o: CMakeFiles/MarhalLab6.dir/flags.make
CMakeFiles/MarhalLab6.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MarhalLab6.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MarhalLab6.dir/main.cpp.o -c /Users/nickmarhal/CLionProjects/06Marhal/main.cpp

CMakeFiles/MarhalLab6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MarhalLab6.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nickmarhal/CLionProjects/06Marhal/main.cpp > CMakeFiles/MarhalLab6.dir/main.cpp.i

CMakeFiles/MarhalLab6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MarhalLab6.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nickmarhal/CLionProjects/06Marhal/main.cpp -o CMakeFiles/MarhalLab6.dir/main.cpp.s

CMakeFiles/MarhalLab6.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/MarhalLab6.dir/main.cpp.o.requires

CMakeFiles/MarhalLab6.dir/main.cpp.o.provides: CMakeFiles/MarhalLab6.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/MarhalLab6.dir/build.make CMakeFiles/MarhalLab6.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/MarhalLab6.dir/main.cpp.o.provides

CMakeFiles/MarhalLab6.dir/main.cpp.o.provides.build: CMakeFiles/MarhalLab6.dir/main.cpp.o


CMakeFiles/MarhalLab6.dir/sorting.cpp.o: CMakeFiles/MarhalLab6.dir/flags.make
CMakeFiles/MarhalLab6.dir/sorting.cpp.o: ../sorting.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MarhalLab6.dir/sorting.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MarhalLab6.dir/sorting.cpp.o -c /Users/nickmarhal/CLionProjects/06Marhal/sorting.cpp

CMakeFiles/MarhalLab6.dir/sorting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MarhalLab6.dir/sorting.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nickmarhal/CLionProjects/06Marhal/sorting.cpp > CMakeFiles/MarhalLab6.dir/sorting.cpp.i

CMakeFiles/MarhalLab6.dir/sorting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MarhalLab6.dir/sorting.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nickmarhal/CLionProjects/06Marhal/sorting.cpp -o CMakeFiles/MarhalLab6.dir/sorting.cpp.s

CMakeFiles/MarhalLab6.dir/sorting.cpp.o.requires:

.PHONY : CMakeFiles/MarhalLab6.dir/sorting.cpp.o.requires

CMakeFiles/MarhalLab6.dir/sorting.cpp.o.provides: CMakeFiles/MarhalLab6.dir/sorting.cpp.o.requires
	$(MAKE) -f CMakeFiles/MarhalLab6.dir/build.make CMakeFiles/MarhalLab6.dir/sorting.cpp.o.provides.build
.PHONY : CMakeFiles/MarhalLab6.dir/sorting.cpp.o.provides

CMakeFiles/MarhalLab6.dir/sorting.cpp.o.provides.build: CMakeFiles/MarhalLab6.dir/sorting.cpp.o


# Object files for target MarhalLab6
MarhalLab6_OBJECTS = \
"CMakeFiles/MarhalLab6.dir/main.cpp.o" \
"CMakeFiles/MarhalLab6.dir/sorting.cpp.o"

# External object files for target MarhalLab6
MarhalLab6_EXTERNAL_OBJECTS =

MarhalLab6: CMakeFiles/MarhalLab6.dir/main.cpp.o
MarhalLab6: CMakeFiles/MarhalLab6.dir/sorting.cpp.o
MarhalLab6: CMakeFiles/MarhalLab6.dir/build.make
MarhalLab6: CMakeFiles/MarhalLab6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MarhalLab6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MarhalLab6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MarhalLab6.dir/build: MarhalLab6

.PHONY : CMakeFiles/MarhalLab6.dir/build

CMakeFiles/MarhalLab6.dir/requires: CMakeFiles/MarhalLab6.dir/main.cpp.o.requires
CMakeFiles/MarhalLab6.dir/requires: CMakeFiles/MarhalLab6.dir/sorting.cpp.o.requires

.PHONY : CMakeFiles/MarhalLab6.dir/requires

CMakeFiles/MarhalLab6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MarhalLab6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MarhalLab6.dir/clean

CMakeFiles/MarhalLab6.dir/depend:
	cd /Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nickmarhal/CLionProjects/06Marhal /Users/nickmarhal/CLionProjects/06Marhal /Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug /Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug /Users/nickmarhal/CLionProjects/06Marhal/cmake-build-debug/CMakeFiles/MarhalLab6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MarhalLab6.dir/depend

