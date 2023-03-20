#include<iostream>
using namespace std;
int main()
{
    int *ptr{nullptr};
    ptr=new int;
    //dynamic allocation of the memory of 1 int size
    *ptr=55;//writing into dynamic allocated memory 
    cout<<endl<<"---------------Dynamic Allocated Memory--------------"<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    delete ptr;
    cout<<"---------After deleting----------"<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"---------Initialization while declaration"<<endl;
    int *ptr1{new int(22)};
    int *ptr3{new int{23}};
    cout<<" ptr1 = "<<*ptr1<<endl;
    cout<<" ptr3 = "<<*ptr3<<endl;
    delete ptr1;
    ptr1=nullptr;
    delete ptr3;
    ptr3=nullptr;
    cout<<"ptr1  and ptr3 : "<<ptr1<<"&"<<ptr3<<endl;
    int *p{new int{7}};
    cout<<"--------Noww this will be deleted twice------------"<<endl;
    delete p;
    cout<<"----------Deleted Once one more to go--------------"<<endl;
    delete p;
    cout<<"-----------After deleting twice----------"<<endl;
    return 0;
}