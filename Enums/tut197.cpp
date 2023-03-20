
#include <iostream>
#include <string_view>
using namespace std;
enum months
{
    jan = 0,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
};
string_view month_to_string(months m)
{
    switch (m){
    case months::jan:
        return "January";
        break;
    case months::feb:
        return "Feburary";
        break;
    default:
        return "none";
    }
}
int main(){
    months m{months::feb };
    cout << "months : " << month_to_string(m) << endl;
    return 0;
}