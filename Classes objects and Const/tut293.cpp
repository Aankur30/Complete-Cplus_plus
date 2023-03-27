#include <iostream>
using namespace std;

class dog
{
private:
    string name;
    string breed;
    int age;
    mutable size_t info_count{0}; // this will voilate the const correctness inside the code even in the const member functions by putting the mutable keyword
    //NOT RECOMMENDED as it will make the code less understandable rarely used

public:
    dog() = default;
    dog(string p_name, string p_breed, int p_age)
    {
        name = p_name;
        breed = p_breed;
        age = p_age;
        cout << "Constructor is called " << endl;
    }
    void print_info() const
    {
        ++info_count;
        cout << "the name of the dog is " << this->name << endl;
        cout << "the name of the breed is " << this->breed << endl;
        cout << "the age of the dog is " << this->age << endl;
        cout << "the number of times print_info function is called : " << info_count << endl;
    }
};
int main()
{
    dog dog2{"Akamaru", "Ninja Hound", 20};
    dog2.print_info();
    cout << "-------------------------------" << endl;
    dog2.print_info();
    cout << "-------------------------------" << endl;
    dog2.print_info();
    cout << "-------------------------------" << endl;
    dog2.print_info();
    cout << "-------------------------------" << endl;
    dog2.print_info();
    cout << "-------------------------------" << endl;
    dog2.print_info();

    return 0;
}