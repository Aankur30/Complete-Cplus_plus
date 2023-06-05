#include <iostream>
#include <cstring>
using namespace std;

class square
{
    double side;
    string name;

public:
    // error in the constructor having default parameter
    //  explicit  square(double side_para,string& name_para="Serious" ):side{side_para},name{name_para}{
    explicit square(double side_para, string name_para = "Serious") : side(side_para), name{name_para} // we can use curely bracces and round braces both as in intilializer lists
    {                                                                                                  // on removing the &sign makes it a copy not by reference
    }
    double surface() const
    {
        return side * side;
    }
};
bool compare(const square &s1, const square &s2)
{
    return (s1.surface() > s2.surface()) ? true : false;
}
int main()
{
    square s1{30.0};
    square s2{34.4};
    cout << boolalpha;
    cout << "After comparing s1 and s2 " << compare(s1, s2) << endl;
    // cout<<" After comparing s1>number :"<<compare(s1,34.4);//this will show error because earlier compiler is implicitly converting 34.4 double  to square surface value but after explicit we get error because it prevent implicit conversion
    return 0;
}
