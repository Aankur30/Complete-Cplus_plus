#include <iostream>
#include <string>
using namespace std;

class dog
{
private:
    string name;
    string breed;
    int age;

public:
    dog(string p_name, string p_breed, int p_age)
    {
        name = p_name;
        breed = p_breed;
        age = p_age;
        cout << "the name of the dog is :" << name << endl;
    }
    ~dog()
    {
        cout << "the name of destructor : " << name << endl;
    }
};
int main()
{
    dog d1("doggy1", "sephard", 2);
    dog d2("doggy2", "sephard", 3);
    dog d3("doggy3", "sephard", 2);
    dog d4("doggy4", "sephard", 3);
    return 0;
}