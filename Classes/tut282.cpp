#include <iostream>
#include <string_view>
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
        cout << "the name of the dog is :" << name << " at the address = " << this << endl;
    }
    // void set_name(string_view name)
    // {
    //     this->name = name;
    // }

    // Chained calls using the pointers*
    //  dog *set_breed(string_view dog_breed)
    //  {
    //      this->breed = dog_breed;
    //      return this;
    //  }

    // dog *set_name(string_view dog_name)
    // {
    //     this->name = dog_name;
    //     return this;
    // }
    // Chained calls using the references
    dog &set_age(int dog_age)
    {
        this->age = dog_age;
        return *this;
    }
    dog &set_breed(string_view dog_breed)
    {
        this->breed = dog_breed;
        return *this;
    }

    dog &set_name(string_view dog_name)
    {
        this->name = dog_name;
        return *this;
    }
    void print_info()
    {
        cout << this << " the name is " << name << " the breed is " << breed << " the age is " << age << endl; // address willl be the same
    }
    ~dog()
    {
        cout << "the name of destructor : " << name << " at the address = " << this << endl;
    } // object address is gonna same in both constructor and destructor
};
int main()
{
    dog d1("Fluffy", "Shephard", 2); // Constructor is called
    // cout << "Compilation of the code is done!!!" << endl;
    // d1.set_name("Tiger"); // the name of the dog will get changed in the destructor
    // d1.set_name("Luffy")->set_age(4);//this is happening because the set_name() is returning the pointer which can be chained to call the set_age()
    d1.print_info();
    d1.set_name("Luffy").set_age(4).set_breed("Stray Dogs"); // this is chained calls using the reference as it d1.set_name() return the obejet through which other methods can be accessed
    d1.print_info();
    return 0;
}