#pragma once

#include "Distribution.h"

class Geometric : public Distribution{
public:
    double p;

    Geometric(double);

    std::vector<int> generate() override;
};

