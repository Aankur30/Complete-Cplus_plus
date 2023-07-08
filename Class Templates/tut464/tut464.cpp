#include <iostream>
#include "boxcontainer.h"
using namespace std;
int main()
{

    BoxContainer int_box; // Defaults to <int,10>
    int_box.add(10);
    int_box.add(11);
    int_box.add(62);
    int_box.add(30);
    int_box.add(3);
    int_box.add(7);
    int_box.add(9);
    int_box.add(8);
    int_box.add(11);
    int_box.add(62);
    cout << "int_box : " << int_box << endl;
    int_box.add(55); // Maximum capacity is the default : 10

    /*
     BoxContainer <double> double_box; // Defaults to <double,10>
     double_box.add(11.1);
     cout << "double box : " << double_box << endl;
     */

    BoxContainer<char, 5> char_box; // Defaults are overriden
    char_box.add('H');
    char_box.add('e');
    char_box.add('l');
    char_box.add('l');
    char_box.add('o');
    cout << "char_box : " << char_box << endl;
    char_box.add('o');
    cout << "char_box : " << char_box << endl;
    return 0;
}