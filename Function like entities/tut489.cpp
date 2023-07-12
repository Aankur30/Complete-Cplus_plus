#include <iostream>
using namespace std;

char encrypt(const char &param)
{ // Callback function
    return static_cast<char>(param + 3);
}

char decrypt(const char &param)
{ // Callback function
    return static_cast<char>(param - 3);
}

string & modify(string &str_param,
               char (*modifier)(const char &))
{
    for (size_t i{}; i < str_param.size(); ++i)
    {
        str_param[i] = modifier(str_param[i]); // Calling the callback
    }
    return str_param;
}

int main()
{

    string msg{"Hello"};
    modify(msg, encrypt);
    cout << "outcome : " << msg << endl;

    cout << "------" << endl;

    return 0;
}
