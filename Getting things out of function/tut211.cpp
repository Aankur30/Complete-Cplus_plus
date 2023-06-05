#include <iostream>
using namespace std;
const double *max_address(const double array[], size_t count)
{
    size_t max_index{};
    double max{};
    for (int i = 0; i < count; ++i)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_index = i;
        }
    }
    cout << "the value is : " << array[max_index] << endl;
    cout << "the address of the highest number in the array is : ";
    return &array[max_index];
}
int main()
{
    double array[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 13, 1, 3, 2, 12, 211, 2, 2, 12, 12};
    cout << "max address of the array is : " << max_address(array, size(array)) << endl;

    return 0;
}