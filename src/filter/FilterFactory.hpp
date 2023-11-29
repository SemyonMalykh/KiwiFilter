#pragma once

#include "Filter.hpp"

enum struct FilterType { EKF, UKF, MEDIAN };

class FilterFactory {
   public:
    static std::unique_ptr<Filter> createFilter(FilterType type, int windowSize = 0);
};
