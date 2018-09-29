#pragma once

#include "Distribution.h"

class Poisson : public Distribution {
public:
    int lambda;

    Poisson(int);

    std::vector<double> generate() override;

    double expected_value() override;
    double variance() override;
};

