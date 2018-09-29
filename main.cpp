#include <iostream>
#include <cmath>
#include <numeric>
#include "Poisson.h"
#include "Binomial.h"
#include "NegativeBinomial.h"
#include "Geometric.h"
#include "Bernoulli.h"

double expected_value(std::vector<double> values)
{
    return std::accumulate(values.begin(), values.end(), 0.0)/values.size();
}

double variance(std::vector<double> values)
{
    double m = expected_value(values);
    std::transform(values.begin(), values.end(), values.begin(), [&m](int value)
    {
        return (value - m)*(value - m);
    });

    return std::accumulate(values.begin(), values.end(), 0.0)/(values.size() - 1) ;
}


void print_generated_values(Distribution* distribution)
{
    std::vector<double> result = distribution->generate();
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));

    std::cout << std::endl;
}

void print_expected_values_difference(Distribution* distribution)
{
    std::vector<double> result = distribution->generate();
    std::cout << expected_value(result) << " ";
    std::cout << distribution->expected_value();

    std::cout << std::endl;
}

void print_variance_difference(Distribution* distribution)
{
    std::vector<double> result = distribution->generate();
    std::cout << variance(result) << " ";
    std::cout << distribution->variance();

    std::cout << std::endl;
}



int main() {

    Distribution* poisson_distribution = new Poisson(1);
//    print_generated_values(poisson_distribution);
//    print_expected_values_difference(poisson_distribution);
//    print_variance_difference(poisson_distribution);

    Distribution* binomial_distribution = new Binomial(5, 0.75);
//    print_generated_values(binomial_distribution);
//    print_expected_values_difference(binomial_distribution);
//    print_variance_difference(binomial_distribution);


    Distribution* bernoulli_distribution = new Bernoulli(0.6);
//    print_generated_values(bernoulli_distribution);
//    print_expected_values_difference(bernoulli_distribution);
//    print_variance_difference(bernoulli_distribution);


    Distribution* negativeBinomial_distribution = new NegativeBinomial(5, 0.9);
//    print_generated_values(negativeBinomial_distribution);
//    print_expected_values_difference(negativeBinomial_distribution);
//    print_variance_difference(negativeBinomial_distribution);

    Distribution* geometric_distribution = new Geometric(0.7);
//    print_generated_values(geometric_distribution);
//    print_expected_values_difference(geometric_distribution);
//    print_variance_difference(geometric_distribution);


    return 0;
}