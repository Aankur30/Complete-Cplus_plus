
#include <iostream>
#include <string_view>
using namespace std;

class shape
{
public:
    shape() = default;
    shape(string_view description) : m_description(description)
    {
    }
    ~shape()=default;
    void draw() const
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
    void draw() const
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
    circle(double radius, string_view description):oval(radius,radius,description){}
    ~circle() = default;

    void draw() const
    {
        cout << "circle::draw() called : " << m_description << " with radius  : " << get_x_radius() << endl;
    }
};
int main()
{
    shape s1("shape1");
    s1.draw();
    oval oval1(2.0, 3.5, "Oval1");
    oval1.draw();
    circle c1(3.33, "Circle1");
    c1.draw();
    shape *shape_ptr=&s1;
    shape_ptr->draw();
    shape_ptr=&oval1;
    // ever time its goona call the shape draw because the compiler only sees the type of the pointer 
    shape_ptr->draw();
    shape_ptr=&c1;
    shape_ptr->draw();
    // even though we passed on oval and circle it should pass draw of the oval and circle but it is giving the draw of the shape class

    // using the base references
    shape& shape_ref=s1;
    shape_ref.draw();
    shape& shape_ref2=oval1;
    shape_ref.draw();
    shape& shape_ref3=c1;
    shape_ref.draw();
    // this is only returning the shape value only not even the description of the other shape like in the pointer section 
        return 0;
}