#include <iostream>
using namespace std;

class Animal
{
public:
    Animal(const string n) : m_name(n) {}
    Animal() = default;
    virtual ~Animal() {}
    virtual void breathe() const
    {
    }

protected:
    string m_name;
};

class Feline : public Animal
{
public:
    Feline(const string n) : Animal(n) {}

private:
    int speed;
};

int main()
{

    Animal animal;
    try
    {
        Feline &feline_ref = dynamic_cast<Feline &>(animal);
    }
    catch (exception &ex)
    {
        cout << "Something is wrong : " << ex.what() << endl;//standard errors are caught by what method
    }

    cout << "END." << endl;

    return 0;
}