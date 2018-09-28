#include "Distribution.h"

Distribution :: Distribution()
{
    sequence.resize(1000);
}

std::vector<double> Distribution::create_sequency(long alpha0)
{
    long M = 2147483648;
    long beta = 32771;

    for (int i = 0; i < 1000; ++i) {
        sequence[i] = beta * alpha0 - M * (int) ((beta * alpha0) / M);

        alpha0 = sequence[i];

        sequence[i] /= M;
    }
    return sequence;
}


