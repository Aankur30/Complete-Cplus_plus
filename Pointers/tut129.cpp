#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int scores[10]{1,2,3,4,5,6,7,8,9,10};
    int *p{scores};//stores address of array 
    cout<<"-----------printing values"<<endl;
    cout<<" scores = "<<scores<<endl;
    cout<<"pointer is = "<<p<<endl;
    cout<<"pointer  value is = "<<*p<<endl;
    cout<<"*score is =   "<<*scores<<endl;
    cout<<"p[0] = "<<p[0]<<endl;
    return 0;


}
