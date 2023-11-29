#include "MedianWindowFilter.hpp"

MedianWindowFilter::MedianWindowFilter(unsigned int maxWindowSize) : WindowFilter(maxWindowSize) {
    this->resultDataProvider = std::make_unique<SingleValueDataProvider>(0.0);
    std::cout << "MedianWindowFilter::MedianWindowFilter()" << std::endl;
}

void MedianWindowFilter::filterStep(DataProvider& data) {
    // Uptade the window with the new measurement
    double measurement = data.getValue();

    this->updateWindow(measurement);

    // If window is not full, return the measurement
    if (this->window.size() < this->maxWindowSize) {
        this->resultDataProvider->setValue(measurement);
        return;
    }

    // Compute the median of the window
    double median = 0.0;

    // Create copy of the window
    std::vector<double> windowCopy = this->window;

    // Sort the copy of the window
    std::sort(windowCopy.begin(), windowCopy.end());

    // Compute the median
    if (windowCopy.size() % 2 == 0) {
        // Even number of elements
        median = (windowCopy[windowCopy.size() / 2 - 1] + windowCopy[windowCopy.size() / 2]) / 2.0;
    } else {
        // Odd number of elements
        median = windowCopy[windowCopy.size() / 2];
    }

    this->resultDataProvider->setValue(median);
}

void MedianWindowFilter::initialize() { std::cout << "MedianWindowFilter::initialize()" << std::endl; }