#include "WindowFilter.hpp"

WindowFilter::WindowFilter(unsigned int maxWindowSize) {
    if (maxWindowSize < 1) {
        throw std::invalid_argument("Window size must be greater than 0");
    }
    this->maxWindowSize = maxWindowSize;
}

void WindowFilter::updateWindow(double measurement) {
    this->window.push_back(measurement);
    if (this->window.size() > this->maxWindowSize) {
        this->window.erase(this->window.begin());
    }
}