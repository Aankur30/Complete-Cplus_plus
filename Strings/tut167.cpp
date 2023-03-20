#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "-----------String copies----------" << endl;
    string messages{"hello worlld!"};
    string messages2{messages};
    cout << "message : " << messages << endl;
    cout << "message2 : " << messages2 << endl;

    char *p1 = messages.data();
    char *p2 = messages2.data();

    cout << "&message[0] : " << (void *)p1 << endl;
    cout << "&message2[0] : " << (void *)p2 << endl;
    return 0;
}