#include <cmath>
#include "NegativeBinomial.h"

#include <boost/math/special_functions/gamma.hpp>

NegativeBinomial::NegativeBinomial(int r_, double p_) : r(r_), p(p_){}

std::vector<double> NegativeBinomial::generate()
{
    create_sequency(32771);
    std::vector<double> result_sequence;

    double q = 1 - p;
    double p_copy;

    double x;
    for(double item : sequence)
    {
        p_copy = pow(p, r);
        x = 0;
        do
        {
            item -= p_copy;
            ++x;
            p_copy = p_copy*q*(r - 1 + x)/x;
        }
        while(item > 0);
        result_sequence.push_back(x-1);
    }

    return result_sequence;
}

double NegativeBinomial::expected_value()
{
    return r * (1-p)/p;
}

double NegativeBinomial::variance()
{
    return r * (1-p)/(p*p);
}

double NegativeBinomial::distribution_function(double k)
{
    return boost::math::ibetac(r, k+1, 1-p);
}