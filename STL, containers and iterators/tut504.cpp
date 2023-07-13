#include <iostream>
#include <array>
#include <experimental/array>
using namespace std;

template <typename T, size_t size>
void print_array(const array<T, size> &arr)
{
    for (size_t i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;
}

template <typename T>
void print_raw_array(const T *p, size_t size)
{
    cout << "data: ";
    for (size_t i = 0; i < size; i++)
        cout << p[i] << " ";
    cout << endl;
}
int main()
{
    array<int, 3> int_array1;
    array<int, 3> int_array2{1, 2};
    array<int, 3> int_array3{};
    array int_array4{1, 2};
    auto int_array5 = experimental::make_array(1, 2, 3, 4, 5);
    //  will works in the specific comp

    cout << "int_array1 : ";
    print_array(int_array1);

    cout << "int_array2 : ";
    print_array(int_array2);

    cout << "int_array3 : ";
    print_array(int_array3);

    cout << "int_array4 : ";
    print_array(int_array4);

    cout << "int_array5 : ";
    print_array(int_array5);

    cout << "filling the array" << endl;
    int_array2.fill(12); // rewriting the data and in the repeated form

    cout << "int_array2 : ";
    print_array(int_array2);

    int_array2.fill(45);
    cout << "int_array2 : ";
    print_array(int_array2);

    cout << "Accessing elements of array" << endl;

    cout << "int_array2[0] : " << int_array2[0] << endl;
    cout << "int_array2.at(1) : " << int_array2.at(1) << endl;
    cout << "int_array2.front() : " << int_array2.front() << endl;
    cout << "int_array2.back() : " << int_array2.back() << endl;

    print_raw_array(int_array2.data(), int_array2.size());
    return 0;
}