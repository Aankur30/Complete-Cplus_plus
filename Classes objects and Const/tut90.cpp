#include <iostream>
using namespace std;

class dog
{
private:
    string name;
    string breed;
    int age;

public:
    dog() = default;
    dog(string p_name, string p_breed, int p_age)
    {
        name = p_name;
        breed = p_breed;
        age = p_age;
        cout << "Constructor is called " << endl;
    }

    // Getter can be used as setters
    //}
    string &name1()
    {
        return name;
    }
    string &breed1()
    {
        return breed;
    }
    int &age1()
    {
        return age;
    }
    // for the const objects the function should return value by const refrence which can not be modified furthur
    const string &name1() const
    {
        return name;
    }
    const string &breed1() const
    {
        return breed;
    }
    const int &age1() const
    {
        return age;
    }
    void print_info()
    {
        cout << "the name of the dog is " << this->name << endl;
        cout << "the name of the breed is " << this->breed << endl;
        cout << "the age of the dog is " << this->age << endl;
    }
    ~dog()
    {
        cout << "Destructor is called for " << (this) << endl;
    }
};
int main()
{
    dog dog2{"Akamaru", "Ninja Hound", 20};
    dog2.print_info();
    dog2.name1();
    // Modifying the object
    dog2.name1() = "Black Hounds"; // Setters used as getters
    dog2.breed1() = "Man eaters";
    dog2.print_info();
    // for uisng the getters as getters for the const object make an overload and make it a const reference and a const member function
    const dog dog1{"luffy", "Pirate king", 34};
    cout << "----------------------------------------" << endl;
    cout << "the dog information : " << dog1.age1() << endl;
    cout << "the dog information : " << dog1.breed1() << endl;
    return 0;
}