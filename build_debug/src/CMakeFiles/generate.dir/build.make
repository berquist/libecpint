# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.12.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.12.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/robertshaw/devfiles/libecpint_new

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/robertshaw/devfiles/libecpint_new/build_debug

# Include any dependencies generated for this target.
include src/CMakeFiles/generate.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/generate.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/generate.dir/flags.make

src/CMakeFiles/generate.dir/generate.cpp.o: src/CMakeFiles/generate.dir/flags.make
src/CMakeFiles/generate.dir/generate.cpp.o: ../src/generate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robertshaw/devfiles/libecpint_new/build_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/generate.dir/generate.cpp.o"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate.dir/generate.cpp.o -c /Users/robertshaw/devfiles/libecpint_new/src/generate.cpp

src/CMakeFiles/generate.dir/generate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate.dir/generate.cpp.i"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robertshaw/devfiles/libecpint_new/src/generate.cpp > CMakeFiles/generate.dir/generate.cpp.i

src/CMakeFiles/generate.dir/generate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate.dir/generate.cpp.s"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robertshaw/devfiles/libecpint_new/src/generate.cpp -o CMakeFiles/generate.dir/generate.cpp.s

src/CMakeFiles/generate.dir/lib/mathutil.cpp.o: src/CMakeFiles/generate.dir/flags.make
src/CMakeFiles/generate.dir/lib/mathutil.cpp.o: ../src/lib/mathutil.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robertshaw/devfiles/libecpint_new/build_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/generate.dir/lib/mathutil.cpp.o"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate.dir/lib/mathutil.cpp.o -c /Users/robertshaw/devfiles/libecpint_new/src/lib/mathutil.cpp

src/CMakeFiles/generate.dir/lib/mathutil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate.dir/lib/mathutil.cpp.i"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robertshaw/devfiles/libecpint_new/src/lib/mathutil.cpp > CMakeFiles/generate.dir/lib/mathutil.cpp.i

src/CMakeFiles/generate.dir/lib/mathutil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate.dir/lib/mathutil.cpp.s"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robertshaw/devfiles/libecpint_new/src/lib/mathutil.cpp -o CMakeFiles/generate.dir/lib/mathutil.cpp.s

src/CMakeFiles/generate.dir/lib/angular.cpp.o: src/CMakeFiles/generate.dir/flags.make
src/CMakeFiles/generate.dir/lib/angular.cpp.o: ../src/lib/angular.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/robertshaw/devfiles/libecpint_new/build_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/generate.dir/lib/angular.cpp.o"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/generate.dir/lib/angular.cpp.o -c /Users/robertshaw/devfiles/libecpint_new/src/lib/angular.cpp

src/CMakeFiles/generate.dir/lib/angular.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/generate.dir/lib/angular.cpp.i"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/robertshaw/devfiles/libecpint_new/src/lib/angular.cpp > CMakeFiles/generate.dir/lib/angular.cpp.i

src/CMakeFiles/generate.dir/lib/angular.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/generate.dir/lib/angular.cpp.s"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/robertshaw/devfiles/libecpint_new/src/lib/angular.cpp -o CMakeFiles/generate.dir/lib/angular.cpp.s

# Object files for target generate
generate_OBJECTS = \
"CMakeFiles/generate.dir/generate.cpp.o" \
"CMakeFiles/generate.dir/lib/mathutil.cpp.o" \
"CMakeFiles/generate.dir/lib/angular.cpp.o"

# External object files for target generate
generate_EXTERNAL_OBJECTS =

src/generate: src/CMakeFiles/generate.dir/generate.cpp.o
src/generate: src/CMakeFiles/generate.dir/lib/mathutil.cpp.o
src/generate: src/CMakeFiles/generate.dir/lib/angular.cpp.o
src/generate: src/CMakeFiles/generate.dir/build.make
src/generate: src/CMakeFiles/generate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/robertshaw/devfiles/libecpint_new/build_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable generate"
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/generate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/generate.dir/build: src/generate

.PHONY : src/CMakeFiles/generate.dir/build

src/CMakeFiles/generate.dir/clean:
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug/src && $(CMAKE_COMMAND) -P CMakeFiles/generate.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/generate.dir/clean

src/CMakeFiles/generate.dir/depend:
	cd /Users/robertshaw/devfiles/libecpint_new/build_debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/robertshaw/devfiles/libecpint_new /Users/robertshaw/devfiles/libecpint_new/src /Users/robertshaw/devfiles/libecpint_new/build_debug /Users/robertshaw/devfiles/libecpint_new/build_debug/src /Users/robertshaw/devfiles/libecpint_new/build_debug/src/CMakeFiles/generate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/generate.dir/depend

