#include <iostream>
#include <cstring>
using namespace std;
int main()
{
     char des[50]{"hello"};
     char src[50]{" World!"};
     strcat(des, src);
     cout << " After concatenation : " << des << endl;
     strcat(des, " Goodbye Everyone!!!");
     cout << " After second concatenation : " << des << endl;

     cout << endl
          << "--------------------MORE CONCATENATION------------" << endl;
     char *dest = new char[30]{'F', 'i', 'r', 'e', '\0'};
     char *source = new char[30]{'l', 'o', 'r', 'd', '\0'};
     strcat(dest, source);
     cout << "After concatenation : " << dest << endl;
     cout << endl
          << "--------------------MORE CONCATENATION------------" << endl;
     cout << "Specific Concatenation" << endl;
     cout << "after concatenation of specific characteres" << endl
          << strncat(des, src, 2); // this will modifiy the des character arryay.
     const char *source3{"this is the c++ program used to copy strings"};
     char *dest3{new char[strlen(source3) + 1]};
     strcpy(dest3, source3);
     cout << " dest3 : " << dest3 << endl;
     cout << "sizeof(source3) : " << sizeof(source3) << endl
          << " sizeof(dest3) : " << sizeof(dest3) << endl; // gives 8 as both are pointers
     cout << "strlen(dest3) : " << strlen(dest3) << endl;

     return 0;
}