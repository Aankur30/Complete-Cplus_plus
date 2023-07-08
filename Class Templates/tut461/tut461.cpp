#include <iostream>
#include "tut461boxcontainer.h"
using namespace std;
/*
More about class templates
1. A template is only instantiated once, it is reuesd every time the type is needed in your code.

2.Also, all the class members are inline by default, so we are safe from ODR issues if the template header is included many files
*/

class Point
{
    friend ostream &operator<<(std::ostream &out, const Point &operand);

public:
    Point(double x, double y) : m_x(x), m_y(y)
    {
    }
    // The default constructor must be there for bags of Points to be able
    // initializable with the new T[] statement in the BoxContainer<T> constructor.
    Point() : m_x(0.0), m_y(0.0)
    {
    }

private:
    double m_x{};
    double m_y{};
};

ostream &operator<<(std::ostream &out, const Point &operand)
{
    out << "Point [ x : " << operand.m_x << ",y : " << operand.m_y << "]";
    return out;
}

int main()
{

    // int
    cout << "BoxContainer of int : " << endl;
    BoxContainer<int> int_box;
    int_box.add(33);
    int_box.add(44);
    cout << "int_box : " << int_box << endl;

    // double
    cout << endl;
    cout << "BoxContainer of double : " << endl;
    BoxContainer<double> double_box;
    double_box.add(100.11);
    double_box.add(200.22);
    cout << "double_box : " << double_box << endl;

    // Point
    cout << endl;
    cout << "BoxContainer of Point   (for the custom types): " << endl;
    BoxContainer<Point> point_box;
    point_box.add(Point(20.1, 20.2));
    point_box.add(Point(200.22, 300.33));
    cout << "point_box : " << point_box << endl;

    // std::string
    cout << std::endl;
    cout << "BoxContainer of std::string" << endl;
    BoxContainer<std::string> string_box;
    string_box.add("Hello");
    string_box.add("World");
    cout << "string_box : " << string_box << endl;

    // char
    cout << endl;
    cout << "BoxContainer of char" << endl;
    BoxContainer<char> char_box;
    char_box.add('H');
    char_box.add('e');
    char_box.add('l');
    char_box.add('l');
    char_box.add('o');
    char_box.add('o');
    cout << "char_box : " << char_box << endl;

    //------------------------------------------------------

    cout << endl;
    cout << "Trying out all the methods: " << endl;

    BoxContainer<int> int_box1;
    int_box1.add(10);
    int_box1.add(21);
    int_box1.add(44);

    cout << "int_box1 : " << int_box1 << endl;

    int_box1.add(10);
    int_box1.add(55);
    int_box1.add(10);
    cout << "int_box1 : " << int_box1 << endl;

    int_box1.remove_item(55);
    cout << "int_box1 : " << int_box1 << endl;

    size_t removed = int_box1.remove_all(10);
    cout << removed << " items removed" << endl;
    cout << "int_box1 : " << int_box1 << endl;

    // Copy construct
    cout << std::endl;
    cout << "Copy construction" << endl;
    BoxContainer<int> int_box2(int_box);
    cout << "int_box : " << int_box << endl;
    cout << "int_box2 : " << int_box2 << endl;

    // Copy assign
    cout << endl;
    cout << "Copy assignment" << endl;
    int_box2 = int_box1;
    cout << "int_box1 : " << int_box1 << endl;
    cout << "int_box2 : " << int_box2 << endl;

    cout << std::endl;
    cout << "operator+= : " << endl;
    int_box2 += int_box;
    cout << "int_box : " << int_box << endl;
    cout << "int_box2 : " << int_box2 << endl;

    cout << endl;
    cout << "operator+" << endl;
    BoxContainer<int> int_box3;
    int_box3.add(100);
    int_box3.add(200);

    BoxContainer<int> int_box4;
    int_box4 = int_box2 + int_box3;
    cout << "int_box4 : " << int_box4 << endl;

    cout << "END." << endl;

    return 0;
}