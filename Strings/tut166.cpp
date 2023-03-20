#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "------------ROW STRING LITERALS------------------" << endl;
    string list{R"(
                                                                         clean the house
                                                                         walk the dog
                                                                         Do laundary
                                                                         pick groceries
    )"};
    cout << "list is : " << list << endl;
    cout << "-----------------Using the assignment-------------" << endl;

    string list2;
    list2 = R"(statement1 
    statement2
    data3
    data4)";
    cout << "list is : " << list2 << endl;
    string warning{R"---(The message was"(Stay out of this)")---"};
    cout << " warning is :" << warning << endl;
    return 0;
}
