#include<iostream>
using namespace std;
double sum(const double(&scores)[10]){
double sum{};
for(size_t i{};i<size(scores);++i)
sum+=scores[i];
return sum;
}

 int main()
 {
    double scores[10];
    double total;
cout<<"Number of elements to be entered : ";

cout<<" Input the elements of the array : "<<endl;
for(size_t i{};i<10;++i){
cout<<"Elements "<<i<<" : ";
cin>>scores[i];
}
total=sum(scores);//only one argumenyt is requires
cout<<"the sum of the total is : "<<total<<endl;
return 0;

 }