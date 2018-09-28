#pragma once

#include "Distribution.h"

class Bernoulli : public Distribution {
public:
    double p;

    Bernoulli(double);

    std::vector<int> generate() override;
};

