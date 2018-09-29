#pragma once

#include <iostream>
#include <vector>

class Distribution {
public:
    std::vector<double> sequence;

    Distribution();

    std::vector<double> create_sequency(long);

    virtual std::vector<int> generate() = 0;
};
