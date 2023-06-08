#include <iostream>
using namespace std;
class animal
{
public:
    animal() = default;
    virtual void breadth() const {};

private:
    string m_description;
};
class dog : public animal
{
public:
    dog() = default;
    virtual void breadth() const override{};
    void run() const
    {
        cout << "Dog running..." << endl;
    }

private:
    string m_fur_color;
};
void process(int par_a, int par_b)
{
    if (par_b == 0)
        throw "Potential division by zero detected";
    int result = par_a / par_b;
}
int main()
{
    // int division by 0
    // const int a{45};
    // const int b{0};
    // int result = a / b;
    // cout << "the result is " << result << endl;
    /*
        animal a;
        dog &d{dynamic_cast<dog&>(a)};
        cout<<"End dynamic casting "<<endl;//send exception by the compiler

        cout << "Done!" << endl;
        */
    const int a{45};
    const int b{0};
    try
    {
        if (b == 0)
            throw 0; // type should match in the catch block
        int result = a / b;
    }
    catch (string ex)
    {
        cout << "Integer division by zero detected: " << endl; // correct catch block will execute
    }
    catch (int ex)
    { // this will go into the integer catch not in the string catch
    }

    cout << "End of the integer division " << endl;

    // functions throws const char* exception when par_b is zero
    try
    {
        process(10, 0);
    }
    catch (const char *ex)
    {
        cout << "exception is " << ex << endl;
    }
    cout << "Done coding  " << endl;
    return 0;
}