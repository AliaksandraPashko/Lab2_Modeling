#include <cmath>
#include "NegativeBinomial.h"

NegativeBinomial::NegativeBinomial(int r_, double p_) : r(r_), p(p_){}

std::vector<int> NegativeBinomial::generate()
{
    create_sequency(32771);
    std::vector<int> result_sequence;

    double q = 1 - p;
    double p_copy;

    int x;
    for(double item : sequence)
    {
        p_copy = pow(p, r);
        x = 0;
        do
        {
            item -= p_copy;
            ++x;
            p_copy = p_copy*q*(r - 1 + x)/ x;
        }
        while(item > 0);
        result_sequence.push_back(x-1);
    }

    return result_sequence;
}