#include <iostream>
#include<cstring> //strcat is a inside the cstring library

using namespace std;

// Regular class template
template <typename T>
class adder
{
public:
    adder() {}
    T add(T x, T y);
    void do_something()
    {
        cout << "Doing something..." << endl;
    }
};
template <typename T>
T adder<T>::add(T x, T y)
{
    return x + y;
}


//Template specialization
template <>
class adder<char*>
{
    public:
    adder(){}
    char* add(char* x, char* y);
};
//template <>  <= this is not needed if defined outside of the class will get complier error
char* adder<char*>::add(char* x, char* y)
{
    return strcat(x,y);
}
int main()
{
    adder<int> adder_int;
    adder_int.do_something();
    cout << "adding the things = " << adder_int.add(10, 20) << endl;

    // for the char pointers
    char str1[20]{"Hello"};
    char str2[]{" World!!"};

    adder<char *> adder_c_str;
    // adder_c_str.do_something(); this will not work as it is not defined in the template code of the char pointer
    cout << "Adding the char pointers = " << adder_c_str.add(str1, str2) << endl; // not working with the character
    return 0;
}