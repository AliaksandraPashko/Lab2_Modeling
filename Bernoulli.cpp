#include "Bernoulli.h"

Bernoulli::Bernoulli(double p_) : p(p_){}

std::vector<double> Bernoulli::generate()
{
    create_sequency(32771);
    std::vector<double> result_sequence;

    double x;
    for(double item : sequence)
    {
        x = (item <= p) ? 1 : 0;
        result_sequence.push_back(x);
    }

    return result_sequence;
}

double Bernoulli::expected_value()
{
    return p;
}

double Bernoulli::variance()
{
    return p*(1 - p);
}