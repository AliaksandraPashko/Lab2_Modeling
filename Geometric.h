#pragma once

#include "Distribution.h"

class Geometric : public Distribution{
public:
    double p;

    Geometric(double);

    std::vector<double> generate() override;

    double expected_value() override;
    double variance() override;
    double distribution_function(double) override;
};

