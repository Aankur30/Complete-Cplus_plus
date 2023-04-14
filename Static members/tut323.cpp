#include <iostream>
using namespace std;

class integer
{
private:
    int inner_int{10};

public:
    explicit integer(int value) : inner_int(value)
    {
        cout << "this is the constructor for integer class" << endl;
    }
    integer() = default;
    ~integer()
    {
        cout << "this is the destructor for the integer class" << endl;
    }
};
class point
{
private:
    double m_x;
    double m_y;
    static size_t m_point_count;

public:
    point(double x, double y);
    integer i1{1};
    const integer i2{2};
    static inline integer i3{3};
    static inline const integer i4{4};
    integer *p_i5{nullptr};
    static integer i6;
    static const integer i7;
};
  point::point(double x, double y) : m_x(x), m_y(y),p_i5(new integer(5))//point constructor calling integer constructor
    {
        ++m_point_count;
        cout << "this is the constructor for the point class" << endl;
    }
     size_t point:: m_point_count{0};
int main()
{

    return 0;
}