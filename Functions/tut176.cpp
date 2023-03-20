#include <iostream>
using namespace std;
void say_age( int *age)//pass by pointer
{
    (*age)++;    
    cout << " the age of the user is : " << *age << endl;
}
int main()
{
    int age{23};
    cout << "Display the age is " << age<<endl;
    say_age(&age);
     cout << "Display the age is " << age<<endl;// this value is also changed by the function 

    return 0;
}
