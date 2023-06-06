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
    Dog dog1("dark yellow", "dog1");

    // through base pointer without virtual only animal destructor will be called
    Animal *animal1 = new Dog("dark grey", "animal1");
    delete animal1;
}
 