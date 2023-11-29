#include "DataProvider.hpp"

double SingleValueDataProvider::getValue(int index) {
    if (index == 0) {
        return value;
    } else {
        // Throw an exception
        throw std::invalid_argument("Invalid index");

        return 0.0;
    }
}

double VectorDataProvider::getValue(int index) {
    if (index >= 0 && index < values.size()) {
        return values[index];
    } else {
        throw std::invalid_argument("Invalid index");
        return 0.0;
    }
}