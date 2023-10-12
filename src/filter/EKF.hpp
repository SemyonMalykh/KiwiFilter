#pragma once
#include "KalmanFilter.hpp"

class EKF : public KalmanFilter {
   public:
    virtual void initialize() override;
    virtual void predict() override;
    virtual void update() override;
    virtual void filterStep() override;
    // EKF-specific member functions and data
};