#include<iostream>
using namespace std;
int main()
{
    int score[]{1,2,3,4,5,6,7,8,9,10};
    int *p_score{score};//no need of & in referencing the arrray in a pointer
    cout<<"-------------Pointer Arithematic--------------------"<<endl;
    cout<<"--------Printing in reverse order--------------"<<endl;
    for(size_t i{size(score)};i>0;--i)
    cout<<" value is = "<<*(score+i-1)<<endl;
cout<<endl;

    //using the p_score
    p_score=score+size(score)-1;
    for(size_t i{size(score)};i>0;--i)
    cout<<" value is = "<<*(p_score--)<<endl;

    return 0;

}