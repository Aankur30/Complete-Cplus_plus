#include <iostream>
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
    virtual void draw() const
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

    virtual void draw() const
    {
        cout << "circle::draw() called : " << m_description << " with radius  : " << get_x_radius() << endl;
    }
};
int main()
{
    // comapring the object sizes
    cout << "sizeof(shape) :" << sizeof(shape) << endl;   // in dynamic size is 40
    cout << "sizeof(oval) :" << sizeof(oval) << endl;     // in dynamic size is 56
    cout << "sizeof(circle) :" << sizeof(circle) << endl; // in dynamic size is 56
    // it has the difference of the 16 bits means the 2 pointer sizes i.e for the oval and the shape if it was 3 then the difference would have been 24
    cout << " After removing the polymorphism " << endl;
    cout << "sizeof(shape) :" << sizeof(shape) << endl;   // in static size is 32
    cout << "sizeof(oval) :" << sizeof(oval) << endl;     // in static size is 48
    cout << "sizeof(circle) :" << sizeof(circle) << endl; // in static size is  48

    // slicing
    cout << "Slicing" << endl;
    circle c2(223, "circles");
    shape s1 = c2;
    s1.draw();
    // this will call shape not the circle as it will slice of v

    return 0;
}