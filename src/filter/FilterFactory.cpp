#include "FilterFactory.hpp"

#include "EKF.hpp"                 // Include the header file for EKF
#include "MedianWindowFilter.hpp"  // Include the header file for MedianWindowFilter
#include "UKF.hpp"                 // Include the header file for UKF

std::unique_ptr<Filter> FilterFactory::createFilter(FilterType type, int windowSize) {
    switch (type) {
        case FilterType::EKF:
            return std::make_unique<EKF>();
        case FilterType::UKF:
            return std::make_unique<UKF>();
        case FilterType::MEDIAN:
            return std::make_unique<MedianWindowFilter>(windowSize);
        default:
            throw std::invalid_argument("Invalid filter type");
    }
}