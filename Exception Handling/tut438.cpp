#include <iostream>
using namespace std;

void exception_thrower()
{
    throw 'z';
}

void some_function()
{
    for (size_t i{}; i < 15; ++i)
    {
        cout << "Iteration : " << i << endl;

        try
        { // Outer try block
            // Exceptions thrown in this scope are
            // handled in outer catch blocks
            if (i == 2)
            {
                throw "exception for int 2 thrown"; // Throws const char*
            }

            try
            { // Inner try block

                if (i == 5)
                {
                    throw 'd'; // Throw char,  Will be  handled by inner catch block
                }

                if (i == 7)
                {
                    throw i; // Thrown as size_t Will be handled in outer block
                }

                if (i == 8)
                {
                    exception_thrower();
                }

                if (i == 9)
                {
                    throw string("string thrown for int 9"); // Inner and outer catch blocks
                                                             // can't handle it, may be handled by try block
                                                             // wrapping around the function
                }
            }
            catch (char ex)
            { // Inner catch
                cout << "Inner catch(char) block : cought thrown for : " << ex << endl;
            }
        }
        catch (const char *ex)
        { // Outer catch
            cout << "Outer catch(const char*) block , cought  :" << ex << endl;
        }
        catch (size_t ex)
        { // Outer catch
            cout << "Outer catch(size_t) block, cought " << ex << endl;
        }
    }
}

int main()
{

    try
    {
        some_function();
    }
    catch (std::string &ex)
    {
        cout << "Main catch block , cought : " << ex << endl;
    }
    cout << "END." << endl;

    return 0;
}