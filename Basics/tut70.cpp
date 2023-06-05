#include <iostream>
using namespace std;
int main()
{
   unsigned char data{254};
   ++data;
   cout << hex << "the hex value of the variable is = " << static_cast<int>(data) << endl;
   ++data;
   cout << "Value of data is = " << static_cast<int>(data) << endl;
   return 0;
}