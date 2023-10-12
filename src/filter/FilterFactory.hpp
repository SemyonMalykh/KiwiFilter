#pragma once

#include "Filter.hpp"

enum struct FilterType { EKF, UKF };

class FilterFactory {
   public:
    static std::unique_ptr<Filter> createFilter(FilterType type);
};
