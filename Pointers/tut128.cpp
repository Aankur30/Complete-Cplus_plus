#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    const char *students[]{"hello", "hello_2", "hello_3"};
    cout << "--------------Printing the values---------" << endl;
    for (const char *student : students)
        cout << " students = " << student << endl;
    const char *new1{"Hello World!!"};
    students[0] = new1;
    cout << endl;
    for (const char *student : students)
        cout << " students = " << student << endl;
    return 0;
}