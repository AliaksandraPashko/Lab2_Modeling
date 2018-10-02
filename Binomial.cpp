#define MAX 100

#include <cmath>
#include "Binomial.h"


int combination(int, int);


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

double Binomial::distribution_function(double k)
{
    return combination(k, m) * pow(p, k) * pow((1-p), k);
}


int combination(int m, int n)
{
    int mat[MAX][MAX];
    int i, j;
    if (n > m) return 0;
    if( (n == 0) || (m == n) ) return 1;
    for(j = 0; j < n; ++j)
    {
        mat[0][j] = 1;
        if (j == 0)
        {
            for (i = 1; i<= m - n; ++i)
                mat[i][j] = i + 1;
        }
        else
        {
            for (i = 1; i<= m - n; ++i)
                mat[i][j] = mat[i - 1][j] + mat[i][j - 1];
        }
    }
    return (mat[m - n][n - 1]);
}