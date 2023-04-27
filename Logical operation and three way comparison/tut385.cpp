#include <iostream>
#include <string>
#include <compare>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n1{34};
    int n2{45};
    string m1{"Hello"};
    string m2{"World"};
    auto result = m1.compare(m2);
    if (result > 0)
    {
        cout << "m1 > m2" << endl;
    }
    else if (result == 0)
    {
        cout << "m1 == " << endl;
    }
    else
        cout << "m1 < m2" << endl;
    //Three way comparison operators:Spaceship operator
    auto res = (n1 <=> n2);
    cout << boolalpha;
    cout << "result= (n1<=>n2): " << ((n1 <=> n2) >  0) << endl;
    cout << "result= (n1<=>n2): " << ((n1 <=> n2) >= 0) << endl;
    cout << "result= (n1<=>n2): " << ((n1 <=> n2) == 0) << endl;
    cout << "result= (n1<=>n2): " << ((n1 <=> n2) <= 0) << endl;
    cout << "result= (n1<=>n2): " << ((n1 <=> n2) <  0) << endl;
    cout << "result= (n1<=>n2): " << ((n1 <=> n2) != 0) << endl;
    //spaceship operator is not working in this compiler version
    

    return 0;
}