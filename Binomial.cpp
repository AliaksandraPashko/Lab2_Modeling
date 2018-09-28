#include <cmath>
#include "Binomial.h"

Binomial::Binomial(int m_, double p_) : m(m_), p(p_) {}

std::vector<int> Binomial::generate()
{
    create_sequency(32771);
    std::vector<int> result_sequence;

    double q;
    double c;

    int x;
    for(double& r : sequence)
    {
        q = 1 - p;
        c = p/q;
        p = pow(q, m);
        x = 0;
        do
        {
            r -= p;
            p = p*c*(m + 1 - x)/ ++x;
        }
        while(r > 0);
        result_sequence.push_back(x-1);
    }

    return result_sequence;
}