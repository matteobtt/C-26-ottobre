# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/es4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/es4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/es4.dir/flags.make

CMakeFiles/es4.dir/es4.c.obj: CMakeFiles/es4.dir/flags.make
CMakeFiles/es4.dir/es4.c.obj: ../es4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/es4.dir/es4.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\es4.dir\es4.c.obj   -c "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\es4.c"

CMakeFiles/es4.dir/es4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/es4.dir/es4.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\es4.c" > CMakeFiles\es4.dir\es4.c.i

CMakeFiles/es4.dir/es4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/es4.dir/es4.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\es4.c" -o CMakeFiles\es4.dir\es4.c.s

CMakeFiles/es4.dir/es4.c.obj.requires:

.PHONY : CMakeFiles/es4.dir/es4.c.obj.requires

CMakeFiles/es4.dir/es4.c.obj.provides: CMakeFiles/es4.dir/es4.c.obj.requires
	$(MAKE) -f CMakeFiles\es4.dir\build.make CMakeFiles/es4.dir/es4.c.obj.provides.build
.PHONY : CMakeFiles/es4.dir/es4.c.obj.provides

CMakeFiles/es4.dir/es4.c.obj.provides.build: CMakeFiles/es4.dir/es4.c.obj


# Object files for target es4
es4_OBJECTS = \
"CMakeFiles/es4.dir/es4.c.obj"

# External object files for target es4
es4_EXTERNAL_OBJECTS =

es4.exe: CMakeFiles/es4.dir/es4.c.obj
es4.exe: CMakeFiles/es4.dir/build.make
es4.exe: CMakeFiles/es4.dir/linklibs.rsp
es4.exe: CMakeFiles/es4.dir/objects1.rsp
es4.exe: CMakeFiles/es4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable es4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\es4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/es4.dir/build: es4.exe

.PHONY : CMakeFiles/es4.dir/build

CMakeFiles/es4.dir/requires: CMakeFiles/es4.dir/es4.c.obj.requires

.PHONY : CMakeFiles/es4.dir/requires

CMakeFiles/es4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\es4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/es4.dir/clean

CMakeFiles/es4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre" "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre" "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\cmake-build-debug" "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\cmake-build-debug" "C:\Users\Matteo\Documents\LEZIONI\C e C++\esercizi-C\23-novembre\cmake-build-debug\CMakeFiles\es4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/es4.dir/depend
