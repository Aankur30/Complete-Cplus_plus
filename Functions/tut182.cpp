#include <iostream>
#include <array>
using namespace std;
double sum(double array[], int count)
{
    double sum{};
    // array=&sum;
    // garbage value is assign at the first array index
    array[0] = 70.0; // we can do this because the array is not const
    cout << "size of the array : " << sizeof(array) << endl;
    cout << "size of int* : " << sizeof(int *) << endl;
    cout << "size of long int * : " << sizeof(long int *) << endl;
    for (size_t i{}; i < count; i++)
        sum += *(array++);
    return sum;
}
int main()
{
    double array[50]{};
    int num;
    double total{};
    cout << "Input how many numbers : " << endl;
    cin >> num;
    cout << "Input the array : " << endl;
    for (size_t i{}; i < num; i++)
    {
        cout << "Element" << i << " : ";
        cin >> array[i];
    }
    cout << "size of the array : " << size(array) << endl;
    total = sum(array, num);
    cout << "The total sum is : " << total;
    return 0;
}