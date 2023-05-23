#include <iostream>
#include <string>
#include <string_view>
using namespace std;
class animals
{
public:
    animals() = default;
    animals(string_view description) : m_description(description) {}
    virtual ~animals() {}

    virtual void breathe() const
    {
        std::cout << "Animal::breathe called for : " << m_description << std::endl;
    }

protected:
    std::string m_description;
};

class Bird : public animals
{
public:
    Bird() = default;
    Bird(std::string_view wing_color, std::string_view description) : animals(description), m_wing_color(wing_color) {}

    ~Bird() {}

    virtual void fly() const
    {
        std::cout << "Bird::fly() called for bird : " << m_description << std::endl;
    }

private:
    std::string m_wing_color;
};
class Feline : public animals
{
public:
    Feline() = default;
    Feline(std::string_view fur_style, std::string_view description) : animals(description), m_fur_style(fur_style) {}
    virtual ~Feline() {}

    virtual void run() const
    {
        std::cout << "Feline " << m_description << " is running" << std::endl;
    }
    std::string m_fur_style;
};

class Cat : public Feline
{
public:
    Cat() = default;
    Cat(std::string_view fur_style, std::string_view description) : Feline(fur_style, description) {}
    virtual ~Cat() {}

    virtual void miaw() const
    {
        std::cout << "Cat::miaw() called for cat " << m_description << std::endl;
    }

    virtual void breathe() const
    {
        std::cout << "Cat::breathe called for : " << m_description << std::endl;
    }

    virtual void run() const override
    {
        std::cout << "Cat " << m_description << " is running" << std::endl;
    }
};
class Dog : public Feline
{
public:
    Dog() = default;
    Dog(std::string_view fur_style, std::string_view description) : Feline(fur_style, description) {}
    virtual ~Dog() {}
    virtual void bark() const
    {
        std::cout << "Dog::bark called : Woof!" << std::endl;
    }

    virtual void breathe() const override
    {
        std::cout << "Dog::breathe called for : " << m_description << std::endl;
    }



    virtual void run() const override
    {
        std::cout << "Dog " << m_description << " is running" << std::endl;
    }
};
class Pigeon : public Bird
{
public:
    Pigeon() = default;
    Pigeon(std::string_view wing_color, std::string_view description) : Bird(wing_color, description) {}
    ~Pigeon() {}

    virtual void coo() const
    {
        std::cout << "Pigeon::coo called for pigeon : " << m_description << std::endl;
    }

    virtual void breathe() const
    {
        std::cout << "Pigeon::breathe called for : " << m_description << std::endl;
    }

    virtual void fly() const override
    {
        std::cout << "Pigeon::fly() called for bird : " << m_description << std::endl;
    }
};
class Crow : public Bird
{
public:
    Crow() = default;
    Crow(std::string_view wing_color, std::string_view description) : Bird(wing_color, description) {}
    ~Crow() {}

    virtual void cow() const
    {
        std::cout << "Crow::cow called fro crow : " << m_description << std::endl;
    }

    virtual void breathe() const
    {
        std::cout << "Crow::breathe called for : " << m_description << std::endl;
    }

    virtual void fly() const override
    {
        std::cout << "Crow::fly() called for bird : " << m_description << std::endl;
    }
};
int main()
{
    // Animal polymorphism
    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    animals *animals2[]{&dog1, &cat1, &pigeon1, &crow1};

    for (const auto &animal : animals2)
    {
        animal->breathe();
    }

    std::cout << "------------" << std::endl;

    // Feline polymorphism
    Dog dog2("dark gray", "dog2");
    Cat cat2("black stripes", "cat2");
    Pigeon pigeon2("white", "pigeon2"); // Putting pigeon in felines will result in compiler error
                                        //  pigeon is and Animal,a but is not a feline.
    animals animal1("some animal");

    Feline *felines[]{&dog2, &cat2};

    for (const auto &feline : felines)
    {
        feline->run();
    }

    std::cout << "------------" << std::endl;

    // Bird polymorphism
    Pigeon pigeon3("white", "pigeon1");
    Crow crow3("black", "crow1");

    Bird *birds[]{&pigeon3, &crow3};

    for (const auto &bird : birds)
    {
        bird->fly();
    }

    return 0;
}