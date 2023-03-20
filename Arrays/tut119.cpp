#include<iostream>
using namespace std;
int main()
{   
    int a[4][3];
    cout<<" Size of array is = "<<sizeof(a)<<endl;//  48  this will give number  of bytes accquired in the memory 
    cout<<" size of array is = "<<size(a)<<endl;//4
//  because it contain 4 elements only which itself contain 3 elements
   cout<<" Size of array is = "<<sizeof(a)/sizeof(int)<<endl;//this will give total number of the elements in the array
    return 0;
}