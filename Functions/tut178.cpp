#include <iostream>
using namespace std;
int data{55};
void say_age(const int *const age) // pass by pointer
{
    // (*age)++;    error as we can't modify the address
    cout << " the age of the user is : " << *age << endl;
    cout << "Pointer points somewhere else gives the error " << endl;
    // age=&data;  //error points somewhere else
}
int main()
{
    int age{23};
    cout << "Display the age is " << age << endl;
    say_age(&age);
    cout << "Display the age is " << age << endl; // this value is also changed by the function

    return 0;
}
