#include "Geometric.h"
#include <cmath>

Geometric::Geometric(double p_) : p(p_) {}

std::vector<int> Geometric::generate()
{
    create_sequency(32771);
    std::vector<int> result_sequence;

    int x;
    for(double item : sequence)
    {
        x = (int)std::ceil(log(item)/log(1-p));
        result_sequence.push_back(x);
    }

    return result_sequence;
}