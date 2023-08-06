add_library(Sort sort/sort.hpp sort/sort.cpp)
add_executable(Main main.cpp)
target_link_libraries(Main Sort)
