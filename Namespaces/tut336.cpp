#include <iostream>
using namespace std;
namespace level1
{
    namespace level2
    {
        namespace level3
        {
            const double weight{23.3};
        }
    }
}
int main()
{
    namespace data = level1::level2::level3; // alias for the nested namespaces
    cout << "the weight is " << level1::level2::level3::weight << endl;
    cout << "the weight is " << data::weight << endl;
    return 0;
}