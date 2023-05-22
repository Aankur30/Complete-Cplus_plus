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
void shape_draw(shape *s){
s->draw();
}
int main(){
    shape s1("shape1");
    oval o1(2.0,30,"oval1");
    circle c1(30,"circle1");


    cout<<"Polymorphism with dynamic binding with reference "<<endl;
// only virtual methods can be called this way using the pointer and the arrow operator non-virtual methods will give the errorgit 
    shape *shape_ptr=&s1;
    shape_ptr->draw();//expcted shape draw will be called 

     shape_ptr=&o1;
    shape_ptr->draw();//oval draw will be called

    shape_ptr=&c1;
    shape_ptr->draw();//circle draw will be called
    //by applying the virtual now the pointer will not looking the type of pointer whereas it will look to the object type assigned to the pointer
 cout<<"----------------------------------"<<endl;

//using teh base references
shape& shape_ref=c1;
shape_ref.draw();

shape & ref =o1;
ref.draw();
cout<<"----"<<endl;
 
 shape_draw(&o1);

    return 0;
}