// Distance between the elements
#include <iostream>
using namespace std;
int main()
{
    int score[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr1{score + 0};
    int *ptr2{score + 8};
    cout << "--------------Pointer Comparing------------" << endl;
    cout << boolalpha << endl;
    cout << "ptr1 > ptr2 = " << (ptr1 > ptr2) << endl;
    cout << "ptr1 < ptr2 = " << (ptr1 < ptr2) << endl;
    return 0;
}