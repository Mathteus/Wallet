# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /media/henrique/A/my-projects/wallet/backend

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/henrique/A/my-projects/wallet/backend/build

# Include any dependencies generated for this target.
include CMakeFiles/DataBaseServer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DataBaseServer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DataBaseServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataBaseServer.dir/flags.make

CMakeFiles/DataBaseServer.dir/src/main.cpp.o: CMakeFiles/DataBaseServer.dir/flags.make
CMakeFiles/DataBaseServer.dir/src/main.cpp.o: /media/henrique/A/my-projects/wallet/backend/src/main.cpp
CMakeFiles/DataBaseServer.dir/src/main.cpp.o: CMakeFiles/DataBaseServer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/henrique/A/my-projects/wallet/backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataBaseServer.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataBaseServer.dir/src/main.cpp.o -MF CMakeFiles/DataBaseServer.dir/src/main.cpp.o.d -o CMakeFiles/DataBaseServer.dir/src/main.cpp.o -c /media/henrique/A/my-projects/wallet/backend/src/main.cpp

CMakeFiles/DataBaseServer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataBaseServer.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/henrique/A/my-projects/wallet/backend/src/main.cpp > CMakeFiles/DataBaseServer.dir/src/main.cpp.i

CMakeFiles/DataBaseServer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataBaseServer.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/henrique/A/my-projects/wallet/backend/src/main.cpp -o CMakeFiles/DataBaseServer.dir/src/main.cpp.s

CMakeFiles/DataBaseServer.dir/src/database.cpp.o: CMakeFiles/DataBaseServer.dir/flags.make
CMakeFiles/DataBaseServer.dir/src/database.cpp.o: /media/henrique/A/my-projects/wallet/backend/src/database.cpp
CMakeFiles/DataBaseServer.dir/src/database.cpp.o: CMakeFiles/DataBaseServer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/henrique/A/my-projects/wallet/backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DataBaseServer.dir/src/database.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataBaseServer.dir/src/database.cpp.o -MF CMakeFiles/DataBaseServer.dir/src/database.cpp.o.d -o CMakeFiles/DataBaseServer.dir/src/database.cpp.o -c /media/henrique/A/my-projects/wallet/backend/src/database.cpp

CMakeFiles/DataBaseServer.dir/src/database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataBaseServer.dir/src/database.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/henrique/A/my-projects/wallet/backend/src/database.cpp > CMakeFiles/DataBaseServer.dir/src/database.cpp.i

CMakeFiles/DataBaseServer.dir/src/database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataBaseServer.dir/src/database.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/henrique/A/my-projects/wallet/backend/src/database.cpp -o CMakeFiles/DataBaseServer.dir/src/database.cpp.s

CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o: CMakeFiles/DataBaseServer.dir/flags.make
CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o: /media/henrique/A/my-projects/wallet/backend/src/encrypt.cpp
CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o: CMakeFiles/DataBaseServer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/henrique/A/my-projects/wallet/backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o -MF CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o.d -o CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o -c /media/henrique/A/my-projects/wallet/backend/src/encrypt.cpp

CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/henrique/A/my-projects/wallet/backend/src/encrypt.cpp > CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.i

CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/henrique/A/my-projects/wallet/backend/src/encrypt.cpp -o CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.s

CMakeFiles/DataBaseServer.dir/src/base64.cpp.o: CMakeFiles/DataBaseServer.dir/flags.make
CMakeFiles/DataBaseServer.dir/src/base64.cpp.o: /media/henrique/A/my-projects/wallet/backend/src/base64.cpp
CMakeFiles/DataBaseServer.dir/src/base64.cpp.o: CMakeFiles/DataBaseServer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/henrique/A/my-projects/wallet/backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DataBaseServer.dir/src/base64.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataBaseServer.dir/src/base64.cpp.o -MF CMakeFiles/DataBaseServer.dir/src/base64.cpp.o.d -o CMakeFiles/DataBaseServer.dir/src/base64.cpp.o -c /media/henrique/A/my-projects/wallet/backend/src/base64.cpp

CMakeFiles/DataBaseServer.dir/src/base64.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataBaseServer.dir/src/base64.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/henrique/A/my-projects/wallet/backend/src/base64.cpp > CMakeFiles/DataBaseServer.dir/src/base64.cpp.i

CMakeFiles/DataBaseServer.dir/src/base64.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataBaseServer.dir/src/base64.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/henrique/A/my-projects/wallet/backend/src/base64.cpp -o CMakeFiles/DataBaseServer.dir/src/base64.cpp.s

CMakeFiles/DataBaseServer.dir/src/app.cpp.o: CMakeFiles/DataBaseServer.dir/flags.make
CMakeFiles/DataBaseServer.dir/src/app.cpp.o: /media/henrique/A/my-projects/wallet/backend/src/app.cpp
CMakeFiles/DataBaseServer.dir/src/app.cpp.o: CMakeFiles/DataBaseServer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/henrique/A/my-projects/wallet/backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/DataBaseServer.dir/src/app.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataBaseServer.dir/src/app.cpp.o -MF CMakeFiles/DataBaseServer.dir/src/app.cpp.o.d -o CMakeFiles/DataBaseServer.dir/src/app.cpp.o -c /media/henrique/A/my-projects/wallet/backend/src/app.cpp

CMakeFiles/DataBaseServer.dir/src/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataBaseServer.dir/src/app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/henrique/A/my-projects/wallet/backend/src/app.cpp > CMakeFiles/DataBaseServer.dir/src/app.cpp.i

CMakeFiles/DataBaseServer.dir/src/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataBaseServer.dir/src/app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/henrique/A/my-projects/wallet/backend/src/app.cpp -o CMakeFiles/DataBaseServer.dir/src/app.cpp.s

# Object files for target DataBaseServer
DataBaseServer_OBJECTS = \
"CMakeFiles/DataBaseServer.dir/src/main.cpp.o" \
"CMakeFiles/DataBaseServer.dir/src/database.cpp.o" \
"CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o" \
"CMakeFiles/DataBaseServer.dir/src/base64.cpp.o" \
"CMakeFiles/DataBaseServer.dir/src/app.cpp.o"

# External object files for target DataBaseServer
DataBaseServer_EXTERNAL_OBJECTS =

DataBaseServer: CMakeFiles/DataBaseServer.dir/src/main.cpp.o
DataBaseServer: CMakeFiles/DataBaseServer.dir/src/database.cpp.o
DataBaseServer: CMakeFiles/DataBaseServer.dir/src/encrypt.cpp.o
DataBaseServer: CMakeFiles/DataBaseServer.dir/src/base64.cpp.o
DataBaseServer: CMakeFiles/DataBaseServer.dir/src/app.cpp.o
DataBaseServer: CMakeFiles/DataBaseServer.dir/build.make
DataBaseServer: /usr/local/lib/libbcrypt.a
DataBaseServer: CMakeFiles/DataBaseServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/henrique/A/my-projects/wallet/backend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable DataBaseServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataBaseServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataBaseServer.dir/build: DataBaseServer
.PHONY : CMakeFiles/DataBaseServer.dir/build

CMakeFiles/DataBaseServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataBaseServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataBaseServer.dir/clean

CMakeFiles/DataBaseServer.dir/depend:
	cd /media/henrique/A/my-projects/wallet/backend/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/henrique/A/my-projects/wallet/backend /media/henrique/A/my-projects/wallet/backend /media/henrique/A/my-projects/wallet/backend/build /media/henrique/A/my-projects/wallet/backend/build /media/henrique/A/my-projects/wallet/backend/build/CMakeFiles/DataBaseServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataBaseServer.dir/depend
