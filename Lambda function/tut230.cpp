#include <iostream>
using namespace std;

int main()
{
    auto func = []()
    {
        cout << "hello world " << endl;
    };
     func();
    cout << "size of the func : " << sizeof(func) << endl;

    cout << "----------------------" << endl;
    cout << "call the lambda function directly " << endl;
    []()
    {
        cout << "hello world " << endl;
    }(); // this braces will call the lambda fuction automaticaly through this method function is called only once in the program

    cout << "-----------------------------" << endl;
    [](double a, double b)
    {
        cout << "the sum is a+b : " << a + b << endl;
    }(12.4, 45.6); // this function will be called once
    cout << "-----------------" << endl;
    cout << "passing the parameters :" << endl;

    auto func1 = [](double a, double b)
    {
        cout << "the sum is a+b : " << a + b << endl;
    };
    func1(12.2, 34.4);
    func1(23.3, 45.5); // through this function can be called multiple times

    cout << "--------------" << endl;
    cout << "Lambda function returning directly " << endl;
    [](double a, double b)
    {
        return a + b;
    }(23.3, 334.5);
    //using variable to return the value from the function
     auto result=[](double a, double b)
    {
        return a + b;
    }(23.3, 334.5);
    cout<<"the value of the result is  : "<<result<<endl;
    cout<<"------------------"<<endl;
    cout<<"Explicitly specify the return type "<<endl;
     auto rresult2=[](double a, double b)->int
    {
        return a + b;
    }(23.3, 334.5);
    cout<<"the reslut of the sum is : "<<rresult2<<endl;

    return 0;
}