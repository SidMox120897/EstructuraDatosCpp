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
CMAKE_SOURCE_DIR = "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/build"

# Include any dependencies generated for this target.
include CMakeFiles/OrderMox.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/OrderMox.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/OrderMox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OrderMox.dir/flags.make

CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o: CMakeFiles/OrderMox.dir/flags.make
CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o: ../Ordenamiento/main.cpp
CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o: CMakeFiles/OrderMox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o -MF CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o.d -o CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o -c "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/Ordenamiento/main.cpp"

CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/Ordenamiento/main.cpp" > CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.i

CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/Ordenamiento/main.cpp" -o CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.s

# Object files for target OrderMox
OrderMox_OBJECTS = \
"CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o"

# External object files for target OrderMox
OrderMox_EXTERNAL_OBJECTS =

OrderMox: CMakeFiles/OrderMox.dir/Ordenamiento/main.cpp.o
OrderMox: CMakeFiles/OrderMox.dir/build.make
OrderMox: Ordenamiento/Lib/libOrderAll.so
OrderMox: CMakeFiles/OrderMox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OrderMox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OrderMox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OrderMox.dir/build: OrderMox
.PHONY : CMakeFiles/OrderMox.dir/build

CMakeFiles/OrderMox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OrderMox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OrderMox.dir/clean

CMakeFiles/OrderMox.dir/depend:
	cd "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos" "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos" "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/build" "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/build" "/home/sidmox/Escritorio/Area de Trabajo/Andre/Estructura de Datos/build/CMakeFiles/OrderMox.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/OrderMox.dir/depend
