// Distance between the elements
#include <iostream>
using namespace std;
int main()
{
    int score[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr1{score + 0};
    int *ptr2{score + 8};

    cout << "the pointer difference is " << ptr2 - ptr1 << endl;
    cout << "-----------Using Special Keyword------------" << endl;
    ptrdiff_t positive = ptr2 - ptr1;
    cout << "the size of ptrdiff_t is = " << sizeof(ptrdiff_t) << endl; // the size is 8

    return 0;
}
