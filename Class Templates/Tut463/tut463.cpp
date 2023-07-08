#include <iostream>
#include "Tut463BoxContainer.h"

template <typename T, T threashold>
class Point
{
public:
    Point(T x, T y);
    ~Point() = default;

private:
    T m_x;
    T m_y;
};

template <typename T, T threashold>//regular template type as non type template parameter
Point<T, threashold>::Point(T x, T y)
    : m_x(x), m_y(y)
{
}

int main()
{

    /*
     // One instance
    BoxContainer<int,10> int_box2; // Another instance just on changing the value of the non type template parameter takes more memory also 
    */
    BoxContainer<int, 5> int_box1;
    int_box1.add(11);
    int_box1.add(12);
    int_box1.add(13);
    int_box1.add(14);
    int_box1.add(15);
    int_box1.add(16);

    cout << "Int_box1: " << int_box1 << endl;

    Point<int, 44> point1(10, 20); // Works-this will works as template as non type template parameter
    // Point<double,33.1> point2(11.22,22.33);// Compiler error : double not a valid
    //  non type template parameter : only integral types
    // that can represent sizes or ranges allowed.
    // Point<double,33.1> point2(11.22,22.33);did not works as latest compiler cannot support this thing

    return 0;
}