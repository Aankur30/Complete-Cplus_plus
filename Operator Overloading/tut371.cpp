#include <iostream>
using namespace std;
class number
{
    int num{};

public:
    number() = default;
    number(int value) : num(value)
    {
    }
    friend ostream &operator<<(ostream &os, const number &n1);
    friend number operator+(const number &left_operand, const number &right_operand);
    ~number()
    {
    }
    number operator+(const number &n2)
    {

        return num + n2.num;
    }
};
inline ostream &operator<<(ostream &os, const number &n1)
{
    os << n1.num;
    return os;
}
number operator+(const number &left_operand, const number &right_operand)
{
    return left_operand.num + right_operand.num; // this cannot be done memeber wise
}

int main()
{
    number n1(23);
    cout << "the number is  : " << n1 << endl;
    cout << "n1+5 :" << n1 + 5 << endl;
    cout << "the other way around" << endl;
    cout << "5+n1 :" << 5 + n1 << endl;
    return 0;
}