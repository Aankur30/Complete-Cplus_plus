#include <iostream>
using namespace std;

class point
{
    double *x;
    double *y;
    void invalidate()
    {
        x = nullptr;
        y = nullptr;
    }

public:
    point(double x_para, double y_para) : x(new double(x_para)), // dynamically allocated memory in the heap
                                          y(new double(y_para))
    {
        cout << "Point constructed successfully " << this << endl;
    }
    // move constructor
    point(point &&source_point) : x((source_point.steal_x())),
                                  y((source_point.steal_y()))
    { // without using the invalidate function we have already done it in the new getter function
        // source_point.invalidate();//good pratice can able to see the invalidation of the temporary object
        cout << "Point moved successfully " << endl;
    }

    ~point()
    {
        delete x;
        delete y;
    }

    // copy constructor
    point(const point &source_point) : x(new double(*(source_point.get_x()))),
                                       y(new double(*(source_point.get_y())))
    {
        cout << "Body of the copy constructor " << endl;
    } // we are doing deep copy

    // setters
    void set_x(double x)
    {
        *(this->x) = x; // dereference and assignment
    }

    void set_y(double y)
    {
        *(this->y) = y; // dereference and assignment
    }

    // getters
    double *get_x() const
    {
        return x;
    }
    double *get_y() const
    {
        return y;
    }
    // new getters
    double *steal_x()
    {
        double *new_x = x;
        x = nullptr;
        return new_x;
    }
    double *steal_y()
    {
        double *new_y = y;
        y = nullptr;
        return new_y;
    }
    // utilities
    void display() const
    {
        cout << "point [x: " << (*x) << ", y: " << (*y) << "]" << endl;
    }
};
int main()
{
    // point p1(10.0,15.0);
    // p1.display();

    // creat a copy from the temperory
    point p3(move(point(20.5, 56.6))); // without move it was the copy with move it will be treated as temporary
    p3.display();                      // the data is not stolen from the temperory objects
}