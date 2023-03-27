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
    void set_name(string_view name_para)
    {
        name = name_para;
    }
    void set_breed(string_view breed_para)
    {
        breed = breed_para;
    }
    void set_age(int age_para)
    {
        age = age_para;
    }
    void print_info()
    {
        cout << "the name of the dog is " << this->name << endl;
        cout << "the name of the breed is " << this->breed << endl;
        cout << "the age of the dog is " << this->age;
    }
};
void function_dog(dog dog1)
{
    dog1.set_name("Internal dog");
    dog1.print_info();
}
void function_ref(dog &dog_ref)
{
    // Compler won't allow passing const object as argument
}
void const_function_ref(const dog &dog_ref)
{
    // this function works as the argumet is passed as const reference parameters
    // dog_ref.set_name("mEE Chain");//Expected error as we are modifying the object
    // dog_ref.print_info();// Not Expected not allowing us to read the data also
}
// Pointer to non const as parameters it will get an error of invalid conversion of const to non const

//Parameter passed as pointer to const it will compile if we are not doing anything in the body
 // dog_ref.set_name("mEE Chain");//Expected error as we are modifying the object
    // dog_ref.print_info();// Not Expected not allowing us to read the data also
int main()
{
    const dog d1{"flatcher", "Shephard", 3};
    // by value
    function_dog(d1);
    // function_ref(d1);
    const_function_ref(d1);

    return 0;
}