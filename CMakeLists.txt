cmake_minimum_required(VERSION 3.14)
project(OrderBookProject VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
enable_testing()

# Add the googletest subdirectory
add_subdirectory(googletest)

# Main executable
add_executable(orderbook_main main.cpp orderbook.cpp)

# Test executable
add_executable(OrderBookTest
    test/OrderBookTest.cpp
    orderbook.cpp
    # Add other source files
)

target_link_libraries(OrderBookTest gtest_main)  # link google test to this executable
target_include_directories(OrderBookTest PRIVATE .)  

include(GoogleTest)
gtest_discover_tests(OrderBookTest) # discovers tests by asking the compiled test executable to enumerate its tests