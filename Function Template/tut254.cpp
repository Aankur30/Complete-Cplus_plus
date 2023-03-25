#include <iostream>
using namespace std;
// (manually either T or P is added)
template <typename T, typename P>
 P maximum(T a, P b)
{
    return (a > b) ? a : b;
}
int main()
{
int a{34};
double b{45.5};
auto result=maximum(b,a);//return type will automatically be taken of the right side like here int is taken
cout<<"the result is : "<<result<<endl;
auto result1=maximum(a,b);//return type will automatically be taken of the right side like here double is taken
cout<<"the result is : "<<result1<<endl;
    return 0;
}