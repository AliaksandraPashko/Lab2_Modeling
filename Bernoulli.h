#pragma once

#include "Distribution.h"

class Bernoulli : public Distribution {
public:
    double p;

    Bernoulli(double);

    std::vector<double> generate() override;

    double expected_value() override;
    double variance() override;
};

