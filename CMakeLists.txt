 project(main.cpp)
 set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
 set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 # Find includes in corresponding build directories
 set(CMAKE_INCLUDE_CURRENT_DIR ON)
 # Find the library
 find_package(yaml-cpp REQUIRED)  # here to ensure library exists
 file(GLOB project_SOURCES
        "src/*.h"
      "src/*.hpp"
       "src/*.cpp"
        )
#Main app
add_executable(${PROJECT_NAME} "main.cpp" ${project_SOURCES})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} yaml-cpp)