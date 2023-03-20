#include <iostream>
using namespace std;
int main()
{
    char operation;
    double num1, num2;
    bool end{false};
    cout << "Welcome to awesome calculator" << endl;
    while ((end == false))
    {
        cout << "--------------------------------------------------" << endl;
        cout << "what operation do you want to help with " << endl;
        cout << "+ , - , * , / are suppoerted operations . Please choose one and type below" << endl;
        cout << "your operation" << endl;
        cin >> operation;
        if((operation!='+')&&(operation!='-')&&(operation!='/')&&(operation!='*'))
        {
        cout<<"Not Supported this "<<operation<< " operation"<<endl;
        break;
        }
        cout << endl;
        cout << "Please type your two operands " << endl;
        cin >> num1 >> num2;
        cout << endl;
        switch (operation)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << operation << "opeartion not supported" << endl;
            break;
        }
        cout << "(Continue ? (Y|N) : " << endl;
        char go;
        cin >> go;
        if ((go == 'Y') | (go == 'y'))
            end = false;
        else
            end = true;
    }
    cout << "Done helping out,BYE!" << endl;
    return 0;
}