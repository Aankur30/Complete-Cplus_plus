#include <iostream>
using namespace std;
class dog
{
public:
    dog() = default;
    dog(const string &name, int age) : d_name(name), d_age(age)
    {
        cout << "this is a constructor for the dog class" << endl;
    }
    friend class cat;

private:
    string d_name;
    int d_age;
};

class cat
{
    string cat_name;

public:
    cat(const string &name) : cat_name(name)
    {
        cout << "this is a constructor for the cat class" << endl;
    }
    void dog_info(const dog &d)
    {
        cout << "the name of the dog is " << d.d_name << endl;
        cout << "the age of the dog is " << d.d_age << endl;
        // cout<<"the age fo the dog is "<<this->d_age<<endl;this will not work as cat class do not have d_age as a member variable
    }
    // event though it is the friend of the dog class it do not have the access to the this pointer of the dog class it will be of the cat class
};
int main()
{
    dog d1{"Akamaru", 3};
    cat c1{"luffy"};
    c1.dog_info(d1);
    return 0;
}