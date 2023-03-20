#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i{0};i<10;i++)
    a[i]=i*3;
    cout<<"Dispaly the elemnts of array"<<endl;
    for(int i{0};i<10;i++)
    cout<<"a"<<"["<<i<<"]"<<" = "<<a[i]<<endl;//
int number;
cin>>number;
    for(size_t i{1};i<=10;i++)
    cout<<number<<" X "<<i<<" = "<<i*number<<endl;
    //using for each loop 
    for(int value:a)
    cout<<"value"<<" = "<<value<<endl;
    return 0;
}
