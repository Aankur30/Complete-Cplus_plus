#include <iostream>
using namespace std;

class streamInsertable
{
    friend ostream &operator<<(ostream &out, streamInsertable &operand);

public:
    virtual void stream_insert(ostream &out) const = 0;
};
ostream &operator<<(ostream &out, streamInsertable &operand)
{
    operand.stream_insert(out);
    return out;
}

class point : public streamInsertable
{
public:
    point() = default;
    point(double x, double y) : m_x(x), m_y(y) {}
    virtual void stream_insert(ostream &out) const override
    {
        out << "Point [x: " << m_x << ", y: " << m_y << "]" << endl;
    }

private:
    double m_x;
    double m_y;
};
//if you are inheriting from the pure virtual class and not implementing its fumction then you also become the anstract class
int main()
{

    return 0;
}