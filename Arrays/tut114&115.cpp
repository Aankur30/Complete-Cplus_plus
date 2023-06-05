#include <iostream>
using namespace std;
int main()
{
    int a[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char b[]{'h', 'e', 'l', 'l', 'o', '\0'};
    char message[]{"hello world!"};

    cout << "---------------CHARACTER STRING--------------" << endl;
    cout << "character string " << b << endl;
    cout << "-----------------MESSAGE------------" << endl;
    cout << " character array is " << message << endl;
    cout << "-------------SIZE OF ARRAY------------" << endl;
    cout << "Size of the score is : " << size(a) << endl;
    cout << "Size of a  " << (sizeof(a) / sizeof(int)) << endl;
    return 0;
}