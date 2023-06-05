#include <iostream>
#include <ctime>
using namespace std;
int main()

{
  //-------------Non Const pointer to non const data-----------
  int *p{nullptr};
  int num{23};
  p = &num;
  cout << " num is = " << num << endl;
  // change the pointed to value through pointer
  *p = 22;
  cout << " new num = " << num << endl
       << " *p = " << *p << endl;
  cout << endl;
  // change the pointer itself to make it point somewhere else
  int num2{30};
  p = &num2;
  cout << "num2 = " << num2 << endl
       << " *p = " << *p << endl;
  //-------------------pointer to const-------------
  cout << endl;
  int num3{632};
  const int *p_num3{&num3};
  // since it a comst pointer it can't change the value by derefrencing
  //*p=444   //compile error
  cout << "num3 = " << num3 << endl
       << " *p_num3 = " << *p_num3 << endl;
  // still can change the value of num3
  num3 = 22;
  cout << " modified num3 = " << num3 << endl;
  return 0;
}