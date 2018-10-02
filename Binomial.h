#pragma once

#include "Distribution.h"

class Binomial : public Distribution {
public:
    int m;
    double p;

    Binomial(int, double);

    std::vector<double> generate() override;

    double expected_value() override;
    double variance() override;
    double distribution_function(double) override;
};

