#include <string>
#include <string_view>
#include <iostream>
using namespace std;
class Animal
{
public:
    Animal() = default;
    Animal(std::string_view description) : m_description(description)
    {
    }
    virtual ~Animal()
    {
        std::cout << "Animal destructor called" << std::endl;
    }

    virtual void breathe() const
    {
        std::cout << "Animal::breathe called for : " << m_description << std::endl;
    }

protected:
    std::string m_description;
};
class Feline : public Animal
{
public:
    Feline() = default;
    Feline(std::string_view fur_style, std::string_view description) : Animal(description), m_fur_style(fur_style)
    {
    }
    virtual ~Feline()
    {
        std::cout << "Feline destructor called" << std::endl;
    }

    virtual void run() const
    {
        std::cout << "Feline " << m_description << " is running" << std::endl;
    }
    std::string m_fur_style;
    void do_something()
    {
        cout << "Doing something feline thingy" << std::endl;
    }
};
class Dog : public Feline
{
public:
    Dog() = default;
    Dog(std::string_view fur_style, std::string_view description) : Feline(fur_style, description)
    {
    }

    virtual ~Dog()
    {
        std::cout << "Dog destructor called" << std::endl;
    }

    virtual void bark() const
    {
        std::cout << "Dog::bark called : Woof!" << std::endl;
    }
};
int main()
{
    Animal *animal1 = new Feline("Stripes", "Feline1");

    Feline feline2("stripes", "Feline2");
    Animal &animal_ref = feline2;
    Feline *feline_ptr = dynamic_cast<Feline *>(animal1);
    if (feline_ptr)
        feline_ptr->do_something();
    else
        cout << "Couldn't cast to feline pointer, Sorry!!" << endl;

    cout << "--------------------------------" << endl;

    Dog *dog_ptr = dynamic_cast<Dog *>(animal1);//cannot cast into dog pointer because it does not contain any dog information
    if (dog_ptr)
        dog_ptr->bark();
    else
        cout << "Couldn't cast to Dog pointer, Sorry!!" << endl;
    return 0;
    Feline & feline_ref= dynamic_cast<Feline *>(&animal_ref);
}