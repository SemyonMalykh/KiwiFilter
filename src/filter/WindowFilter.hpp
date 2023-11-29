#pragma once
#include "Filter.hpp"

class WindowFilter : public Filter {
   public:
    WindowFilter(unsigned int maxWindowSize);
    void updateWindow(double measurement);

   protected:
    unsigned int maxWindowSize;
    std::vector<double> window;
    // EKF-specific member functions and data
};
