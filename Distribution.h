#pragma once

#include <iostream>
#include <vector>

class Distribution {
public:
    std::vector<double> sequence;

    Distribution();

    std::vector<double> create_sequency(long);

    virtual std::vector<double> generate() = 0;
    virtual double expected_value() = 0;
    virtual double variance() = 0;
};
