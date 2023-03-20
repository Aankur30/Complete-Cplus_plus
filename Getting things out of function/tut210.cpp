#include <iostream>
using namespace std;
int *max_return(int *a, int *b)

{
    if (*a > *b)
        return a;
    else
        return b;
}
int main()
{
    int a{23}, b{34};
    int *p_num = max_return(&a, &b);
    cout << "the value of the p_num" << *p_num << endl;
    ++(*p_num);
    cout << "the value  of a is : " << a << endl;
    cout << "the value of b is : " << b << endl;
    return 0;
}