
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double weight{-5000};
  short int a = 0;
  int b = 0;
  cout << "The absolute value of the value is " << abs(weight) << endl; // its give the magnitude of the value only
  double exponential = exp(10);                                         // this is the e raised to 10 i.e e=2.718281828 raised to power of 10
  cout << "the exponential value is = " << exponential << endl;
  cout << "the log of the number is = " << log(23.33); // this will give the log of the number with natural base e
  cout << endl
       << "the log of the number with base 10 is = " << log10(23.33) << endl; // this gives the log with respect to base 10
  cout << "the size is " << sizeof(a) << endl;                                // short int is of two bytes
  cout << "the size is " << sizeof(b) << endl;                                // normal or sized int is of 4 bytes
  return 0;
}