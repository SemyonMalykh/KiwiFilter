#include <iostream>

#include "filter/DataProvider.hpp"
#include "filter/FilterFactory.hpp"

// This is the main function
// It receives filename as argument
int main(int argc, char* argv[]) {
    std::unique_ptr<Filter> filter = FilterFactory::createFilter(FilterType::MEDIAN, 3);
   
    SingleValueDataProvider singleValueProvider(0.0);

    filter->filterStep(singleValueProvider);

    singleValueProvider.setValue(2.0);
    filter->filterStep(singleValueProvider);

    singleValueProvider.setValue(1.1);
    filter->filterStep(singleValueProvider);

    singleValueProvider.setValue(2.1);
    filter->filterStep(singleValueProvider);

    std::cout << "Median: " << filter->resultDataProvider->getValue() << std::endl;

    return 0;
}