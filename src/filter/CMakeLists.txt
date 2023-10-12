set (KIWI_FILTER_SRC
    Filter.hpp
    KalmanFilter.hpp
    EKF.hpp EKF.cpp
    UKF.hpp UKF.cpp
    FilterFactory.hpp FilterFactory.cpp 
)

add_library(kiwifilter 
    ${KIWI_FILTER_SRC}
)

# Include the Eigen library
target_include_directories(kiwifilter PUBLIC "${CMAKE_SOURCE_DIR}/include/eigen")
