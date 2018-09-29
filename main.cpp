#include <iostream>
#include "Poisson.h"
#include "Binomial.h"
#include "NegativeBinomial.h"
#include "Geometric.h"
#include "Bernoulli.h"

void print_generated_values(Distribution* distribution)
{
    std::vector<int> result = distribution->generate();
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));

    std::cout << std::endl;
}

int main() {

    Distribution* poisson_distribution = new Poisson(1);
//    print_generated_values(poisson_distribution);

    Distribution* binomial_distribution = new Binomial(5, 0.75);
//    print_generated_values(binomial_distribution);

    Distribution* negativeBinomial_distribution = new NegativeBinomial(5, 0.9);
//    print_generated_values(negativeBinomial_distribution);

    Distribution* geometric_distribution = new Geometric(0.7);
//    print_generated_values(geometric_distribution);

    Distribution* bernoulli_distribution = new Bernoulli(0.6);
//    print_generated_values(bernoulli_distribution);

    return 0;
}