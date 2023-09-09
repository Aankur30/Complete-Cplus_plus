#include <iostream>
using namespace std;
int main()
{
   const size_t length{15};
   char member[][length]{"John", "Samuel", "Rashid", "Rodriguezzzz"};
   // printing members
   cout << "the memebers of the array is : " << endl;
   for (size_t i{0}; i < size(member); ++i) //here i=0 and j=15 so there should be 1 row and 15 columns 
      cout << member[i] << endl;
   return 0;
}