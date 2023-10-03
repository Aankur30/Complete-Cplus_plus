#include <iostream>
#include <limits>
using namespace std;
int main()
{
    cout << "The range of short is from = " << numeric_limits<short>::max() << endl
         << "for minimum value is = " << numeric_limits<short>::min() << endl;
    // this gives the range of any data type from minimum to maximum and we have to include limits header file
    cout << endl;

    cout << "The range of long is from = " << numeric_limits<long>::max() << endl;
    cout << "The range of long is from = " << numeric_limits<long>::min() << endl;

    return 0;
}

//this can be used to find the limit of any data type like whether this lies inside the limit or not we can verify that 