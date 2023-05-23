#include<iostream>
using namespace std;

class shape
{
public:
    shape() = default;
    shape(string_view description) : m_description(description)
    {
    }
    ~shape() = default;
    virtual void draw() const
    {
        cout << "shape::Draw() called for drawing : " << m_description << endl;
    }

protected:
    string m_description{" "};
};


class oval : public shape
{
public:
    oval() = default;
    oval(double x_radius, double y_radius, string_view description) : m_x_radius(x_radius), m_y_radius(y_radius), shape(description) {} // here class name should be given to the initilize list of another class
    ~oval() = default;
    virtual void draw() const  override //this will give the same output but it will not be same function to show polymorphich behaviour that's why we use override keyword to avoid this  
    {
        cout << "oval::draw() called : " << m_description << " with x_radius : " << m_x_radius << " with y_radius : " << m_y_radius << endl;
    }

protected:
    double get_x_radius() const
    {
        return m_x_radius;
    }
    double get_y_radius() const
    {
        return m_y_radius;
    }

private:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};
class circle : public oval
{
public:
    circle() = default;
    circle(double radius, string_view description) : oval(radius, radius, description) {}
    ~circle() = default;

    virtual void draw() const override
    {
        cout << "circle::draw() called : " << m_description << " with radius  : " << get_x_radius() << endl;
    }
};
int main()
{
circle c1(7.2, "circle1");
    oval o1(23, 34, "oval1");
    circle c2(7.2, "circle1");
    oval o2(23, 34, "oval1");
    circle c3(7.2, "circle1");
    oval o3(23, 34, "oval1");

    shape s1[]{c1, o1, c2, o2, c3, o3};
    
    for (shape s : s1) {
        shape *shape_ptr = &s;
        shape_ptr->draw(); // slicing of the data
        cout << "------------------------" << endl;
    }

return 0;
}