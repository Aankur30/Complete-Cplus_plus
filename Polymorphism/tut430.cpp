#include <iostream>
#include <string_view>
using namespace std;
class shape
{
protected:
    shape() = default;
    shape(string_view description) : m_description(description)
    {
    }

public:
    virtual ~shape() = default;
    virtual double perimeter() const = 0; // no need to put the implementation
    virtual double surface() const = 0;

private:
    string m_description;
};

/*
NOTES{

1. If a class at least one pure virtual function,it becomes an abstract class
2. You can't create objects of an abstract class ,if you do that ,you will get a hard compiler error
3. Derived classes from an abstract class must explicitly override all the pure virtual functions from the abstract parent class, if they don't they themselves become abstract
4. Pure virtual functions don't have the implementation in the abstract class. They are meant to be implemented by deriving classes
5. You can't call the pure virtual functions from the constructors of the abstract class
6. The constructors of the abstract class is used by deriving class to build up the base part of the object
}
*/
class rectangle : public shape
{
public:
    rectangle() = default;
    rectangle(double width, double height, string_view description) : m_width(width), m_height(height), shape(description) {}
    virtual ~rectangle() = default;

public:
    virtual double perimeter() const override
    {
        return 2 * (m_width + m_height);
    }
    virtual double surface() const override
    {
        return m_width * m_height;
    }

private:
    double m_width;
    double m_height;
};
class circle : public shape
{
public:
    circle() = default;
    circle(double radius, string_view description) : m_radius(radius), shape(description) {}
    virtual ~circle() = default;

public:
    virtual double perimeter() const
    {
        return 2 * PI * m_radius;
    }
    virtual double surface() const
    {
        return PI * m_radius * m_radius;
    }

private:
    double m_radius{0.0};
    inline static double PI{3.14159265};
};

int main()
{
    //  shape *shape1=new shape(); gives error that object of shape abstract class is not allowed
    const shape *shape_rect = new rectangle(10, 10, "rectangle1");
    double surface = shape_rect->surface();
    cout << "The surface of the rectangle is " << surface << endl;
    cout << "--------------------------------" << endl;

    const shape *shape_circle = new circle(10, "circle1");
    surface = shape_circle->surface();
    cout << "The surface of the circle is " << surface << endl;
    return 0;
}