#include <iostream>
#include <string_view>
#include <memory>
using namespace std;

class shape
{
protected:
    string m_descrption;

public:
    shape() = default;
    shape(string_view description) : m_descrption(description) {}
    ~shape() {}
    void draw() const
    {
        cout << "draw function called with shape::draw(): " << m_descrption << endl;
    }

private:
    void func() const
    {
        cout << "shape::func() called with " << m_descrption << endl;
    }
};
class ellipse : public shape
{
private:
    double m_x_radius;
    double m_y_radius;

public:
    ellipse() = default;
    ellipse(double x_radius, double y_radius, string_view description) : m_x_radius(x_radius), m_y_radius(y_radius), shape(description) {}
    ~ellipse() {}

    void func() const
    {
        cout << "ellipse::func() called with " << m_descrption << endl;
    }

private:
    void draw() const
    {
        cout << "ellipse::draw() called with " << m_descrption << endl;
    }
};
int main() {}