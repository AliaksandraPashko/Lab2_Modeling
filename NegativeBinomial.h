#pragma once

#include "Distribution.h"

class NegativeBinomial : public Distribution {
public:
    int r;
    double p;

    NegativeBinomial(int, double);

    std::vector<double> generate() override;

    double expected_value() override;
    double variance() override;
    double distribution_function(double) override;
};

