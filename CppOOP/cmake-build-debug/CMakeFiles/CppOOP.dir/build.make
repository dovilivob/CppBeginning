# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\dovilivob\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\213.6777.58\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\dovilivob\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\213.6777.58\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CppOOP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CppOOP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CppOOP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppOOP.dir/flags.make

CMakeFiles/CppOOP.dir/main.cpp.obj: CMakeFiles/CppOOP.dir/flags.make
CMakeFiles/CppOOP.dir/main.cpp.obj: ../main.cpp
CMakeFiles/CppOOP.dir/main.cpp.obj: CMakeFiles/CppOOP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppOOP.dir/main.cpp.obj"
	C:\Users\dovilivob\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\213.6777.58\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CppOOP.dir/main.cpp.obj -MF CMakeFiles\CppOOP.dir\main.cpp.obj.d -o CMakeFiles\CppOOP.dir\main.cpp.obj -c C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\main.cpp

CMakeFiles/CppOOP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppOOP.dir/main.cpp.i"
	C:\Users\dovilivob\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\213.6777.58\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\main.cpp > CMakeFiles\CppOOP.dir\main.cpp.i

CMakeFiles/CppOOP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppOOP.dir/main.cpp.s"
	C:\Users\dovilivob\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\213.6777.58\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\main.cpp -o CMakeFiles\CppOOP.dir\main.cpp.s

# Object files for target CppOOP
CppOOP_OBJECTS = \
"CMakeFiles/CppOOP.dir/main.cpp.obj"

# External object files for target CppOOP
CppOOP_EXTERNAL_OBJECTS =

CppOOP.exe: CMakeFiles/CppOOP.dir/main.cpp.obj
CppOOP.exe: CMakeFiles/CppOOP.dir/build.make
CppOOP.exe: CMakeFiles/CppOOP.dir/linklibs.rsp
CppOOP.exe: CMakeFiles/CppOOP.dir/objects1.rsp
CppOOP.exe: CMakeFiles/CppOOP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CppOOP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CppOOP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppOOP.dir/build: CppOOP.exe
.PHONY : CMakeFiles/CppOOP.dir/build

CMakeFiles/CppOOP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CppOOP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CppOOP.dir/clean

CMakeFiles/CppOOP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\cmake-build-debug C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\cmake-build-debug C:\Users\dovilivob\Programming\C++\CppBeginning\CppOOP\cmake-build-debug\CMakeFiles\CppOOP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppOOP.dir/depend

