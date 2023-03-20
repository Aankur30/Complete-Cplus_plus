#include <iostream>
using namespace std;
int main()
{
    int value{30};
    const int &ref_value{value};
    cout << "ref_value : " << ref_value << endl;
    //ref_value=45; this will give you an error modifing const expression 
     value = 45;
    cout << "ref_value : " << ref_value << endl;
    return 0;
}