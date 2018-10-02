#include "Geometric.h"
#include <cmath>

Geometric::Geometric(double p_) : p(p_) {}

std::vector<double> Geometric::generate()
{
    create_sequency(32771);
    std::vector<double> result_sequence;

    double x;
    for(double item : sequence)
    {
        x = (double)std::ceil(log(item)/log(1-p));
        result_sequence.push_back(x);
    }

    return result_sequence;
}

double Geometric::expected_value()
{
    return 1/p;
}

double Geometric::variance()
{
    return (1-p)/(p*p);
}

double Geometric::distribution_function(double k)
{
    return 1-pow(1-p,k);
}