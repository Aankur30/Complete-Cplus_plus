#include <iostream>
#include<string>
using namespace std;
int main()
{
    int a[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char b[]{'h', 'e', 'l', 'l', 'o', '\0'};//if we put characters like this in the array then we have to explicitly put last character as null character 
    char message[]{"hello world!"};//in this null character is not required but both b and message are character arrays
    string message2="hello world!";//string has inbuilt character array so need to array brackets though works similarly

    cout << "---------------CHARACTER STRING--------------" << endl;
    cout << "character string " << b << endl;
    cout << "-----------------MESSAGE------------" << endl;
    cout << " character array is " << message << endl;
    cout << "-------------SIZE OF ARRAY------------" << endl;
    cout << "Size of the score is : " << size(a) << endl;
    cout << "Size of a  " << (sizeof(a) / sizeof(int)) << endl;
    cout<<"----------------STRING-------------"<<endl;
    cout<<"The string is : "<<message2<<endl;
    return 0;
}