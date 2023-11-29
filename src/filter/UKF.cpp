#include "UKF.hpp"

void UKF::initialize() { std::cout << "UKF::initialize()" << std::endl; }

void UKF::predict() { std::cout << "UKF::predict()" << std::endl; }

void UKF::update() { std::cout << "UKF::update()" << std::endl; }

void UKF::filterStep(DataProvider& dataProvider) { std::cout << "UKF::filterStep()" << std::endl; }