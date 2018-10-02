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

double Bernoulli::distribution_function(double k)
{
    if(k < 0)
        return 0;
    if(k >= 1)
        return 1;
    else
        return 1-p;
}