#include <iostream>
using namespace std;

namespace no_weight
{
    double add(double x, double y) // by doing so the compiler will not give the error of redefinition of function
    {
        return x + y;
    }
}
namespace weight
{
    double add(double x, double y)
    {
        return x + y;
    }
}

namespace functions
{
    double subtract(double x, double y)
    {
        return x - y;
    }
    double multiply(double x, double y)
    {
        return x * y;
    }
}
namespace operations
{
    double divide(double x, double y);
    double modulus(double x, double y);
}
int main()
{

    double result1 = no_weight::add(2.3, 4.5);
    cout << "the value of the result is " << result1 << endl;
    double result2 = weight::add(2.3, 4.5);
    cout << "the value of the result is " << result2 << endl;
    double result3 = functions::subtract(2.3, 4.5);
    cout << "the value of the result is " << result3 << endl;
    double result4 = operations::divide(2.3, 4.5);
    cout << "the value of the result is " << result4 << endl;
    double result5 = operations::modulus(2.3, 4.5);
    cout << "the value of the result is " << result5 << endl;

    return 0;
}
namespace operations
{
    double divide(double x, double y)
    {
        return x / y;
    }
    double modulus(double x, double y)
    {
        return 5;
    }
}