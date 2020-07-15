cmake_minimum_required(VERSION 3.7)

project(stickynote_qt)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -g")

# Find the library
find_package(PkgConfig REQUIRED)
find_package(Qt5Widgets REQUIRED)

include_directories(.)
add_executable(${PROJECT_NAME} "main.cpp" "stickynote.cpp"
)

target_include_directories(stickynote_qt PUBLIC ${OBJECT_BINARY_DIR} ${Qt5Widgets_INCLUDE_DIRS}) 
target_link_libraries(stickynote_qt
    ${Qt5Widgets_LIBRARIES}
)