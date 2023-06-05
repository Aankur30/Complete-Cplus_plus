#include <iostream>
using namespace std;
void say_age(const int &age)
{
    // age++;    this  will give an error can't change the value of the parameter as it is const
    cout << " the age of the user is : " << age << endl;
}
int main()
{
    int age{23};
    cout << "Display the age is " << endl;
    say_age(age);
    ++age;
    say_age(age);
    ++age;
    say_age(age);
    ++age;
    say_age(age);
    ++age;
    say_age(age);
    return 0;
}
