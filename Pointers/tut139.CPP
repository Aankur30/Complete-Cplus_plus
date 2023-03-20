#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    cout << "Program ending well" << endl;
    // exception mechanism
    for (size_t i{}; i < 100; ++i)
    {
        try
        {
            int *data = new int[1000000000000];
        }
        catch (exception &ex)
        {
            cout << "Something went wrong  : " << ex.what() << endl;
        }
    }
    // no throw mechanism
    for (size_t i{}; i < 100; ++i)
    {
        int *data = new (nothrow) int[1000000000000];
        if (data != nullptr)
        {
            cout << "Data allocated Successfully" << endl;
        }
        else
        {
            cout << "Data allocation failed" << endl;
        }
    }
    cout << "Program ending well" << endl;
    return 0;
}