#pragma once

#include "Distribution.h"

class Poisson : public Distribution {
public:
    int lambda;

    Poisson(int);

    std::vector<int> generate() override;

};

