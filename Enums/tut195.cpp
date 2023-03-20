#include <iostream>
using namespace std;

int main()
{
    enum class Weeks
    {
        Mon,
        Tues,
        Wed,
        Thrus,
        Fri = 19,
        Sat,
        Sun
    }; // can be converted in custom values
    Weeks week{Weeks::Sat};
    cout << " Sat : " << static_cast<float>(week) << endl;
    cout << "sizeof the enum is : " << sizeof(Weeks) << endl;
    enum months : unsigned char
    {
        jan = 0,
        feb,
        mar,
        apr,
        jun,
        jul,
        aug,
        ep,
        oct,
        nov,
        dec
    };
    months month{months::feb};
    cout << " feb is : " << static_cast<char>(month) << endl;
    months::jun;
    cout << " jun is : " << static_cast<char>(month) << endl;
    months::oct;
    cout << " oct is : " << static_cast<char>(month) << endl;
    return 0;
}
