#include "Bernoulli.h"

Bernoulli::Bernoulli(double p_) : p(p_){}

std::vector<int> Bernoulli::generate()
{
    create_sequency(32771);
    std::vector<int> result_sequence;

    int x;
    for(double item : sequence)
    {
        x = (item <= p) ? 1 : 0;
        result_sequence.push_back(x);
    }

    return result_sequence;
}