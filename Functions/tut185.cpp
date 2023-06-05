#include <iostream>
using namespace std;

double sum(const double array[][3], size_t size)
{
    double sum{};
    for (size_t i{}; i < size; ++i)
        for (size_t j{}; j < 3; ++j)
        {
            sum += *(*(array + i) + j);
            return sum;
        }
        return 0;
}

