cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)

find_package(Eigen3 REQUIRED)
message(Eigen: ${EIGEN3_INCLUDE_DIR})
include_directories(
	${catkin_INCLUDE_DIRS} 
  ${EIGEN3_INCLUDE_DIR}
  
  
  
  
  
  include)

# Add the executable
add_executable(matrix eigen_matrix/main.cpp)
target_link_libraries(matrix ${catkin_LIBRARIES})
target_include_directories(matrix PRIVATE )

# Add the executable
add_executable(vector eigen_vector/main.cpp)
target_link_libraries(vector ${catkin_LIBRARIES})
target_include_directories(vector PRIVATE )

# Add the executable
add_executable(inheritance inheritance/Student/main.cpp)
target_link_libraries(inheritance ${catkin_LIBRARIES})
target_include_directories(inheritance PRIVATE )

# Add the executable
add_executable(kalman KalmanFilter/KalmanFilter.cpp)
target_link_libraries(kalman ${catkin_LIBRARIES})
target_include_directories(kalman PRIVATE )
