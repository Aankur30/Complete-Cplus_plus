#include <iostream>
using namespace std;

class point
{
    double p_x;
    double p_y;

public:
    static inline size_t count; // cannot initialize the static member variables here
    point() = default;
    point(double x, double y) : p_x(x), p_y(y)
    {
        cout << "this is a two parameter constructor " << endl;
        ++count;
        cout << "number --- " << count << " --- object is created " << endl;
        // to get the count of number of objects created
    }
    point(double x) : p_x(x)
    {
        cout << "this is a single parameter constructor " << endl;
    }
    size_t get_count() const
    {
        ++count; // we can modify the static variables inside the const functions also there will be no errors
        return count;
    }
    ~point()
    {
        cout << "----------------this is a destructor-------------- " << endl;
        // to get the count of number of objects destroyed
        cout << "number --" << count-- << "-- is destroyed" << endl;
    }
};
size_t point::count = 0; // should be initialized before the main function or before any objects are created
int main()
{

    cout << "the value of count : " << point::count << endl; // this is why the static member variable are called class variables not object variables,doesn't belong to any object
    // we can do this before any objects are created
    point P1{1, 2};
    point P2{23, 3};
    point P3{23.3, 32.3};
    size_t result = P1.get_count();
    cout << "the result is: " << result << endl;
    return 0;
}