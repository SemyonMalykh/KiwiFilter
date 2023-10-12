#pragma once
#include "Filter.hpp"

class KalmanFilter : public Filter {
   public:
    virtual void predict() = 0;
    virtual void update() = 0;
    // EKF-specific member functions and data
};
