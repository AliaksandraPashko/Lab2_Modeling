#include <iostream>
#include "Poisson.h"
#include "Binomial.h"
#include "NegativeBinomial.h"

template <class Distribution>
void print_generated_values(Distribution distribution)
{
    std::vector<int> result = distribution.generate();
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));

    std::cout << std::endl;
}

int main() {

    Poisson poisson_distribution(1);
//    print_generated_values(poisson_distribution);

    Binomial binomial_distribution(5, 0.75);
//    print_generated_values(binomial_distribution);

    NegativeBinomial negativeBinomial_distribution(5, 0.9);
//    print_generated_values(negativeBinomial_distribution);

    return 0;
}