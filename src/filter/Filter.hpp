#pragma once

#include <iostream>
#include <memory>

#include "Eigen/Dense"

class Filter {
   public:
    virtual ~Filter() {} // Virtual destructor
    virtual void initialize() = 0;
    virtual void filterStep() = 0;
};
