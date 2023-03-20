#include<iostream>
using namespace std;
int main()
{
    short int var1{10},var2{20};
    char var3{30},var4{40};
    cout<<"Sizeof of var1 = "<<sizeof(var1)<<endl;
    cout<<"Sizeof of var2 = "<<sizeof(var2)<<endl;
    cout<<"Sizeof of var3 = "<<sizeof(var3)<<endl;
    cout<<"Sizeof of var4 = "<<sizeof(var4)<<endl;
    auto result1=var1+var2;
    auto result2=var3+var4;
    cout<<"Size of result1 is = "<<sizeof(result1)<<endl;//automatically typecasted implicitly by the compiler to int 
    cout<<"Size of result2 is = "<<sizeof(result2);
    return 0;
}