#include <cmath>
#include "Poisson.h"

#include <boost/math/special_functions/gamma.hpp>
#include <boost/math/special_functions/factorials.hpp>

Poisson ::Poisson(int lambda_) : lambda(lambda_) {}

std::vector<double> Poisson::generate()
{
    create_sequency(32771);
    std::vector<double> result_sequence;

    double x = 0;
    double p;

    for(double item : sequence)
    {
        p = exp(-lambda);
        x = 0;
        do
        {
            item -= p;
            p = p*lambda/ ++x;
        }
        while(item > 0);
        result_sequence.push_back(x-1);
    }
    return result_sequence;
}

double Poisson::expected_value()
{
    return lambda;
}

double Poisson::variance()
{
    return lambda;
}

double Poisson::distribution_function(double k)
{
    return boost::math::gamma_p(k+1, lambda)/boost::math::factorial<double>(k);
}