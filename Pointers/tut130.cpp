#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int arr0[]{1,2,3,4,5};
    int arr1[]{6,7,8,9,10};
    
    int *p_arr0=arr0;
    int *p_arr1=arr1;
    int *temp{nullptr};
    
        temp=p_arr0;
        p_arr0=p_arr1;
        p_arr1=temp;
    
    for(size_t i{0};i<size(arr0);i++)
    cout<<p_arr0[i]<<"\t"<<p_arr1[i]<<endl;
    return 0;
}
