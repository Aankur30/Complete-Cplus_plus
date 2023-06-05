
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double weight{-5000};
  short int a = 0;
  cout << "The absolute value of the value is " << abs(weight) << endl;
  double exponential = exp(10);
  cout << "the exponential value is = " << exponential << endl;
  cout << "the log of the number is = " << log(23.33);
  cout << endl
       << "the log of the number with base 10 is = " << log10(23.33);
  cout << "the size is " << sizeof(a) << endl;
  return 0;
}