#include <iostream>
#include <limits>
using namespace std;
int main()
{
    cout << "The range of short is from = " << numeric_limits<short>::max() << endl
         << "for minimum value is = " << numeric_limits<short>::min();
    return 0;
}