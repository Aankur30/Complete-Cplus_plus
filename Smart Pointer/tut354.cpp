#include <iostream>
#include <memory>
using namespace std;
class dog
{
public:
    explicit dog(string name_para) : dog_name(name_para)
    {
        cout << "Constructor for dog: " << dog_name << endl;
    }
    dog() = default;
    ~dog()
    {
        cout << "Destructor for dog: " << dog_name << endl;
    }

    void print_dog() const
    {
        cout << "Printing dog name is : " << dog_name << endl;
    }
    string get_name() const
    {
        return dog_name;
    }
    void set_name(const string &name)
    {
        dog_name = name;
    }

private:
    string dog_name{"Luffy"};
};
unique_ptr<dog> get_unique_ptr()
{
    unique_ptr<dog> dogInternal = make_unique<dog>("helo");
    return dogInternal;
}
int main()
{
    unique_ptr<int> u_ptr_int_1 = make_unique<int>(23);
    unique_ptr<dog> u_ptr_dog_1 = make_unique<dog>("Akamaru");
    shared_ptr<int> s_ptr_int_1 = move(u_ptr_int_1);
    shared_ptr<dog> s_ptr_dog_1 = move(u_ptr_dog_1);
    cout << "shared s_ptr_int_1.use_count() : " << s_ptr_int_1.use_count() << endl;
    cout << "shared s_ptr_dog_1.use_count() : " << s_ptr_dog_1.use_count() << endl;
    cout << boolalpha;
    cout << "u_ptr_int_1 : " << static_cast<bool>(u_ptr_int_1) << endl; // the ownership of u_ptr_int_1 has been transferred to s_ptr_int_1 that's why it is giving false as an output
    cout << "u_ptr_dog_1 : " << static_cast<bool>(u_ptr_dog_1) << endl;
    cout << "u_ptr_int_1 : " << s_ptr_int_1 << endl;
    // cout << "u_ptr_dog_1 : " << u_ptr_dog_1 << endl;//this is showing me error
    cout << endl
         << "returning unique_ptr from function to unique_ptr" << endl;
    unique_ptr<dog> u_ptr_dog = get_unique_ptr();
    if (u_ptr_dog)
        cout << "the name of the dog is " << u_ptr_dog->get_name() << endl;
    shared_ptr<dog> s_ptr_dog = get_unique_ptr();
    cout << "The name of the dog is :" << s_ptr_dog->get_name() << endl;
    cout << "shared_ptr use count: " << s_ptr_dog.use_count() << endl;
    return 0;
}