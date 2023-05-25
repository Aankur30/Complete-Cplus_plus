#include <iostream>
#include <string>
#include <string_view>
using namespace std;

class shape
{
protected:
    string m_discription;

public:
    static int int_count;
    shape()
    {
        int_count++;
    }
    shape(string_view discription) : m_discription(discription)
    {
        int_count++;
    }
    virtual ~shape() = default;
    void draw() const
    {
        cout << "shape::draw() called for " << m_discription << endl;
    }
    virtual int get_count() const
    {
        return int_count;
    }
};
int shape::int_count = 0;

class ellipse : public shape
{
private:
    double m_x_radius;
    double m_y_radius;

public:
    static int int_count;
    ellipse()
    {
        int_count++;
    }
    ellipse(double x_radius, double y_radius, string_view discription) : m_x_radius(x_radius), m_y_radius(y_radius), shape(discription)
    {
        int_count++;
    }
    virtual ~ellipse() = default;
    virtual int get_count() const override
    {
        return int_count;
    }
};
int ellipse::int_count = 0;
int main()
{
    shape s1("shape1");
    cout << "shape count: " << shape::int_count << endl;
    shape s2("shape2");
    cout << "shape count: " << shape::int_count << endl;
    // ellipse
    ellipse e1(12, 13, "ellipse1");
    cout << "shape count: " << shape::int_count << endl;
    cout << "Ellipse count: " << ellipse::int_count << endl; //this is also giving the value 3 but as there is only one ellipse so we should get 1 as answer for this we have to make seperate static variable for the ellipse class
  shape *shapes[]{&s1,&e1};
  for( auto &shapes1:shapes){
    cout<<shapes1->get_count() << endl;
  }
    return 0;
}