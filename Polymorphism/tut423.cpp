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
    virtual void draw() const
    {
        cout << "draw function called with shape::draw(): " << m_descrption << endl;
    }

private:
    virtual void func() const
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

    virtual void func() const override
    {
        cout << "ellipse::func() called with " << m_descrption << endl;
    }

private:
    virtual void draw() const override
    {
        cout << "ellipse::draw() called with " << m_descrption << endl;
    }
};
int main()
{
    shared_ptr<shape> shape1 = make_shared<ellipse>(1, 5, "ellipse1");
    shape1->draw();
    // shape1->func(); func is private in shape
    ellipse e1(22, 3, "ellipse1");
    e1.func();
    // e1.draw();error  draw is private in ellipse . Static binding
    shape s2 = ellipse(3, 4, "ellipse2");
    s2.draw();
    // s2.func(); func is private in shape slicing takes place

    return 0;
}