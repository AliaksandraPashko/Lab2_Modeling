#include <cmath>
#include "Binomial.h"

Binomial::Binomial(int m_, double p_) : m(m_), p(p_) {}

std::vector<double> Binomial::generate()
{
    create_sequency(32771);
    std::vector<double> result_sequence;

    double q = 1 - p;
    double c = p/q;
    double p_copy = p;

    double x;
    for(double item : sequence)
    {
        p_copy = pow(q, m);
        x = 0;
        do
        {
            item -= p_copy;
            ++x;
            p_copy = p_copy * c * (m + 1 - x)/ x;
        }
        while(item > 0);
        result_sequence.push_back(x-1);
    }

    return result_sequence;
}

double Binomial::expected_value()
{
    return m * p;
}

double Binomial::variance()
{
    return m * p * (1-p);
}