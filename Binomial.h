#pragma once

#include "Distribution.h"

class Binomial : public Distribution {
public:
    int m;
    double p;

    Binomial(int, double);

    std::vector<int> generate();

};

