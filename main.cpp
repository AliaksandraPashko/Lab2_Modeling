#include <iostream>
#include "Poisson.h"
#include "Binomial.h"



int main() {

    Poisson poisson_distribution(1);
    std::vector<int> poisson_result = poisson_distribution.generate();
    std::copy(poisson_result.begin(), poisson_result.end(), std::ostream_iterator<int>(std::cout, " "));

    std::cout << std::endl;

    Binomial binomial_distribution(5, 0.75);
    std::vector<int> binomial_result = poisson_distribution.generate();
    std::copy(binomial_result.begin(), binomial_result.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}