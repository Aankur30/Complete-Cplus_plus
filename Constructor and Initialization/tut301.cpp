/*
                               Event Sequence-in Costructor deligations
    The one parameter consrtuctor is called
    Before we get into the body of the one param constructor, the compiler realises the deligation and calls the three param constructor to do actual object creation with the provided data

    The three param constructor constructs the object and initialises with the provided data. Notice that the actual object is constructed by the three param constructor

    Controls reaches the body of the three param constructor

    Control reaches the body of the single param constructor

     Control goes back to main

     All these calls to constructor can be seem in the call stack with the debugger
                            */
#include <iostream>
#include <cstring>
using namespace std;
class square
{
    double side;
    string color;
    int shading;
    double position;

public:
    square(double side_para)
        : square(side_para, 3, 303.0) // can;t do furthur intialization of the position before and after here but can be done in the body
                                      //  : square(side_para, 3, 303.0) position(0.0) gives the error
                                      //  : position(0.0) square(side_para, 3, 303.0) gives the error cannot be done before and after in the list

    { // here compiler is using 3 parameter constructor first and then 1 parameter constructor
        // square(side_para, 3, 303.0); // it is not doing the constructor deligation it is simply making the another object can be verified through the invoking of the destructor
        cout << "constructor with one parameter " << endl;
        position = 0.0; // allowed by the compiler
    }
    square(double side_para, int shading_para, double position_para)
        : side(side_para), shading(shading_para), position(position_para)
    {
        cout << "Constructor with multiple parameters " << endl;
    }
    ~square()
    {
        cout << "Destructor is called " << endl;
    }
};
int main()
{
    square s1{100.0};
    return 0;
}