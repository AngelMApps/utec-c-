# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/164/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/164/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sem4_lab_2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/sem4_lab_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sem4_lab_2.dir/flags.make

CMakeFiles/sem4_lab_2.dir/main.cpp.o: CMakeFiles/sem4_lab_2.dir/flags.make
CMakeFiles/sem4_lab_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sem4_lab_2.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sem4_lab_2.dir/main.cpp.o -c /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/main.cpp

CMakeFiles/sem4_lab_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sem4_lab_2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/main.cpp > CMakeFiles/sem4_lab_2.dir/main.cpp.i

CMakeFiles/sem4_lab_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sem4_lab_2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/main.cpp -o CMakeFiles/sem4_lab_2.dir/main.cpp.s

CMakeFiles/sem4_lab_2.dir/funciones.cpp.o: CMakeFiles/sem4_lab_2.dir/flags.make
CMakeFiles/sem4_lab_2.dir/funciones.cpp.o: ../funciones.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sem4_lab_2.dir/funciones.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sem4_lab_2.dir/funciones.cpp.o -c /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/funciones.cpp

CMakeFiles/sem4_lab_2.dir/funciones.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sem4_lab_2.dir/funciones.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/funciones.cpp > CMakeFiles/sem4_lab_2.dir/funciones.cpp.i

CMakeFiles/sem4_lab_2.dir/funciones.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sem4_lab_2.dir/funciones.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/funciones.cpp -o CMakeFiles/sem4_lab_2.dir/funciones.cpp.s

# Object files for target sem4_lab_2
sem4_lab_2_OBJECTS = \
"CMakeFiles/sem4_lab_2.dir/main.cpp.o" \
"CMakeFiles/sem4_lab_2.dir/funciones.cpp.o"

# External object files for target sem4_lab_2
sem4_lab_2_EXTERNAL_OBJECTS =

sem4_lab_2: CMakeFiles/sem4_lab_2.dir/main.cpp.o
sem4_lab_2: CMakeFiles/sem4_lab_2.dir/funciones.cpp.o
sem4_lab_2: CMakeFiles/sem4_lab_2.dir/build.make
sem4_lab_2: CMakeFiles/sem4_lab_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sem4_lab_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sem4_lab_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sem4_lab_2.dir/build: sem4_lab_2
.PHONY : CMakeFiles/sem4_lab_2.dir/build

CMakeFiles/sem4_lab_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sem4_lab_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sem4_lab_2.dir/clean

CMakeFiles/sem4_lab_2.dir/depend:
	cd /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2 /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2 /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug /home/dev/Escritorio/utec-c-/lab/sem4/sem4-lab-2/cmake-build-debug/CMakeFiles/sem4_lab_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sem4_lab_2.dir/depend

