#include <cmath>
#include "Poisson.h"

Poisson ::Poisson(int lambda_) : lambda(lambda_) {}

std::vector<int> Poisson::generate()
{
    create_sequency(32771);
    std::vector<int> result_sequence;

    int x = 0;
    double p;

    for(double& r : sequence)
    {
        p = exp(-lambda);
        x = 0;
        do
        {
            r -= p;
            p = p*lambda/ ++x;
        }
        while(r > 0);
        result_sequence.push_back(x-1);
    }
    return result_sequence;
}
