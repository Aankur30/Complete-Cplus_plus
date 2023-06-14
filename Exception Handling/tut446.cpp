#include <iostream>
using namespace std;
class item
{
public:
    item() {}
    ~item() noexcept(false)
    { // destructor is noexcept by default
        try
        {
            throw 0;
        }
        catch (int ex)
        {
            throw;
        }
    }
};
int main()
{
    try
    {
        item i1;
    }
    catch (int ex)
    {
        cout << "main(): catching the exception " << endl;
    }
    cout << "End!!" << endl;
    return 0;
}