#include "FilterFactory.hpp"

#include "EKF.hpp"  // Include the header file for EKF
#include "UKF.hpp"  // Include the header file for UKF

std::unique_ptr<Filter> FilterFactory::createFilter(FilterType type) {
    switch (type) {
        case FilterType::EKF:
            return std::make_unique<EKF>();
        case FilterType::UKF:
            return std::make_unique<UKF>();
        default:
            throw std::invalid_argument("Invalid filter type");
    }
}
