# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/build"

# Include any dependencies generated for this target.
include CMakeFiles/list_stack_app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/list_stack_app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/list_stack_app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/list_stack_app.dir/flags.make

CMakeFiles/list_stack_app.dir/main.cpp.o: CMakeFiles/list_stack_app.dir/flags.make
CMakeFiles/list_stack_app.dir/main.cpp.o: ../main.cpp
CMakeFiles/list_stack_app.dir/main.cpp.o: CMakeFiles/list_stack_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/list_stack_app.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/list_stack_app.dir/main.cpp.o -MF CMakeFiles/list_stack_app.dir/main.cpp.o.d -o CMakeFiles/list_stack_app.dir/main.cpp.o -c "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/main.cpp"

CMakeFiles/list_stack_app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/list_stack_app.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/main.cpp" > CMakeFiles/list_stack_app.dir/main.cpp.i

CMakeFiles/list_stack_app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/list_stack_app.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/main.cpp" -o CMakeFiles/list_stack_app.dir/main.cpp.s

# Object files for target list_stack_app
list_stack_app_OBJECTS = \
"CMakeFiles/list_stack_app.dir/main.cpp.o"

# External object files for target list_stack_app
list_stack_app_EXTERNAL_OBJECTS =

list_stack_app: CMakeFiles/list_stack_app.dir/main.cpp.o
list_stack_app: CMakeFiles/list_stack_app.dir/build.make
list_stack_app: CMakeFiles/list_stack_app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable list_stack_app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/list_stack_app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/list_stack_app.dir/build: list_stack_app
.PHONY : CMakeFiles/list_stack_app.dir/build

CMakeFiles/list_stack_app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/list_stack_app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/list_stack_app.dir/clean

CMakeFiles/list_stack_app.dir/depend:
	cd "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject" "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject" "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/build" "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/build" "/home/oo/CPP-Udemy-Course/section 12 - Fundamentals of Data Structures/ListStackProject/build/CMakeFiles/list_stack_app.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/list_stack_app.dir/depend

