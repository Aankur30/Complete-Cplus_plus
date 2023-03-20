#include<iostream>
#include<bitset>
using namespace std;
int main()
{
unsigned short int data{15};
cout<<dec<<"data in decimal format is = "<<data<<endl;
cout<<"The data in the Octal  format is = "<<oct<<showbase<<data<<endl;
cout<<"The data in the hexadecimal format is = "<<hex<<showbase<<data<<endl;
cout<<"the data in the binary format is = "<<bitset<16>(data);
return 0;
}