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
    string get_name() const
    {
        return name;
    }
    string get_breed() const // after adding const to the getter function this will be work with the const objects by applying const keyword
    {
        return breed;
    }
    int get_age() const
    {
        return age;
    }
    void print_info()
    {
        cout << "the name of the dog is " << this->name << endl;
        cout << "the name of the breed is " << this->breed << endl;
        cout << "the age of the dog is " << this->age << endl;
    }
    void print_info() const;

    // we can overload the const and non const member function
};
void dog::print_info() const
{
    cout << "the name of the dog is " << this->name << endl;
    cout << "the name of the breed is " << this->breed << endl;
    cout << "the age of the dog is " << this->age<<endl;
}
int main()
{
    const dog dog1{"luffy", "Pirate king", 34};
    dog dog2{"Akamaru", "Ninja Hound", 20};
    dog1.get_name();
    dog1.get_breed();
    dog1.get_age();
    dog1.print_info();
    dog2.print_info();
    return 0;
}