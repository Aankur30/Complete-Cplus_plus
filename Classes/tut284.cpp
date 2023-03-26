#include <iostream>
using namespace std;

class dog
{
public:
    dog() = default;

private:
    size_t leg_count; // 8
    size_t arm_cout;  // 8
    int *p_age;       // 8
};
int main()
{
    dog d1;
    cout << " sizeof(size_t) = " << sizeof(size_t) << endl;
    // cout<<" sizeof(d1) = "<<sizeof(d1)<<endl;//both have the same size because only one data member is there in class
    // cout<<" sizeof(d1) = "<<sizeof(d1)<<endl;
    cout << " sizeof(p_age) = " << sizeof(int *) << endl;
    cout << " sizeof(d1) = " << sizeof(d1) << endl; // sum of three variables
    string name{"Hello"};
    cout << " sizeof(name) = " << sizeof(name) << endl; // it is the size of the pointer not where it pointed to
    return 0;
}