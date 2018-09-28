#pragma once

#include "Distribution.h"

class NegativeBinomial : public Distribution {
public:
    int r;
    double p;

    NegativeBinomial(int, double);

    std::vector<int> generate() override;
};

