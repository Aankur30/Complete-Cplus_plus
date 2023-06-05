#include <iostream>
#include <cstring>
using namespace std;

class dog
{
    string dog_name;
    int dog_age;

public:
    dog(string name, int age) : dog_name(name), dog_age(age)
    {
        cout << "this is a constructor" << endl;
    }

    /*
    About friend function

    1. The friend function is first declared and alive somewhere.
    2. The implementation can live in any translation unit. Just be sure that it will be found at link stage
    3. The declaration has to show up before you call the function
    4. The class determines who is its friend(through friend declarations)
    5. The friend declaration can appear in public or private section of the class either works the same
    6. We can have multiple friend function in the same class
    7. Friend functions can be overloaded
    8. we have to use the object_name.member_var_name syntax in the friend function
    9. Friend functions are not member functions
    10.friend functions don't have access to the this pointer

    */
    friend void debug_dog(const dog &d);
    friend void debug_dog();
};
void debug_dog(const dog &d)
{
    cout << d.dog_name << " " << d.dog_age << endl;
}
void debug_dog()
{
    dog d1("Pinch", 4);
    cout << "dog_name" << d1.dog_name << endl;
    cout << "dog_age" << d1.dog_age << endl;
}

int main()
{
    dog d2("Akamaru","20");
    d2.debug_dog();
    return 0;
}