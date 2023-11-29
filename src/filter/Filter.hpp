#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "DataProvider.hpp"

class Filter {
   public:
    virtual ~Filter() {}  // Virtual destructor
    virtual void initialize() = 0;

    virtual void filterStep(DataProvider& data) = 0;
    
    std::unique_ptr<DataProvider> resultDataProvider;
};
