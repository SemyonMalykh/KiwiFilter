#pragma once

#include <stdexcept>
#include <vector>

class DataProvider {
   public:
    virtual ~DataProvider() {}
    virtual double getValue(int index = 0) = 0;
    virtual std::vector<double> getValues() = 0;

    virtual void setValue(double value, int index = 0) = 0;
    virtual void setValues(const std::vector<double>& values) = 0;
};

class SingleValueDataProvider : public DataProvider {
   private:
    double value;

   public:
    SingleValueDataProvider(double val) : value(val) {}

    double getValue(int index = 0) override;

    std::vector<double> getValues() override { return {value}; }

    void setValue(double value, int index = 0) override { this->value = value; }

    void setValues(const std::vector<double>& values) override {
        if (values.size() == 1) {
            value = values[0];
        } else {
            throw std::invalid_argument("Invalid number of values");
        }
    }
};

class VectorDataProvider : public DataProvider {
   private:
    std::vector<double> values;

   public:
    VectorDataProvider(const std::vector<double>& vals) : values(vals) {}

    double getValue(int index = 0) override;

    std::vector<double> getValues() override { return values; }

    void setValue(double value, int index = 0) override {
        if (index >= 0 && index < values.size()) {
            values[index] = value;
        } else {
            throw std::invalid_argument("Invalid index");
        }
    }

    void setValues(const std::vector<double>& values) override { this->values = values; }
};