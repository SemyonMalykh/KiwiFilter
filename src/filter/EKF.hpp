#pragma once
#include "KalmanFilter.hpp"

class EKF : public KalmanFilter {
   public:
    virtual void initialize() override;
    virtual void predict() override;
    virtual void update() override;
    void filterStep(DataProvider& dataProvider) override;
    // EKF-specific member functions and data
};
