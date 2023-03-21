#include <iostream>
using namespace std;
void print(int age = 33)
{
    cout << "the int version of the function is called : ";
    cout << age << endl;
}
void print(long int age = 44)
{
    cout << "the long int version of the function is called : ";
    cout << age << endl;
}
int main()
{
    // print();ambigious overloading 
     long int age=34;
    print(age);
    return 0;
}