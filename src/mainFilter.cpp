#include "filter/FilterFactory.hpp"
// This is the main function
// It receives filename as argument
int main(int argc, char* argv[]) {
    std::unique_ptr<Filter> filter = FilterFactory::createFilter(FilterType::EKF);
    filter->initialize();
    return 0;
}