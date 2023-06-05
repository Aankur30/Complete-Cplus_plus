#include <iostream>
using namespace std;
int main()
{
    const char *p{"hello World!"};
    char message[]{"hello"};
    message[0] = 'H';
    cout << "the message is " << p << endl;
    cout << "the message is " << *p << endl;
    cout << "the message is " << message << endl;
    return 0;
}