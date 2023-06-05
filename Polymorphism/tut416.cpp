#include <iostream>
#include <memory>
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

    circle c1(7.2, "circle1");
    oval o1(23, 34, "oval1");
    circle c2(7.2, "circle1");
    oval o2(23, 34, "oval1");
    circle c3(7.2, "circle1");
    oval o3(23, 34, "oval1");

    shape s1[]{c1, o1, c2, o2, c3, o3};
    cout << "the size of the c1 is " << sizeof(c1) << endl; // this would be more as it would be sliced of later

    for (shape s : s1)
    {
        cout << "the size of the s is " << sizeof(s) << endl;
        shape *shape_ptr = &s;
        shape_ptr->draw(); // slicing of the data
        cout << "------------------------" << endl;
    }

    // what if we store this in references??
    //  const shape& s2[]{c1, o1, c2, o2, c3, o3};//this is not going to work because the reference are not left assignable

    // what if we store in raw pointers
    cout << "--------------------------------" << endl;
    cout << "Stored in the raw pointers " << endl;
    shape *s3[]{&c1, &o1, &c2, &o2, &c3, &o3};
    //    this will work
    for (shape *shape_pointer : s3)
    {
        cout << "the size of the s is " << sizeof(*shape_pointer) << endl;
        shape_pointer->draw(); // slicing of the data
        cout << "------------------------" << endl;
    }
    // no slicing takes place works just fine

    cout << "------------------------" << endl;
    cout << "working with smart pointers..." << endl;
    shared_ptr<shape> shape4[]{make_shared<circle>(12.2, "circles0"), make_shared<oval>(12, 34, "oval0")};
    for (auto s : shape4)
    {
        s->draw();
    }
    // it also works with the smart pointers as well

    return 0;
}