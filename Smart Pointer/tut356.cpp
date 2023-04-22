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
void shared_use_dog(shared_ptr<dog> d1)
{
    cout << "shared_ptr passd by value, dog_name :" << d1->get_name() << endl;
    cout << "the use count in shared_use_dog : " << d1.use_count() << endl;
}
void use_dog_v2(shared_ptr<dog> &d2)
{
    d2->set_name("Ninja hound");
    d2.reset(new dog()); // passed by non const reference
    cout << "shared ptr by non const reference(dog name changed int the function)" << endl;
    cout << "use count in use_dog_v2 : " << d2.use_count() << endl;
}
void use_dog_v3(const shared_ptr<dog> &d3)
{
    d3->set_name("demon dogs");
    // d3.reset(new dog());we are trying to modify the const reference so wil give the compiler error message
    cout << "use count in use_dog_v3 : " << d3.use_count() << endl;
}
// returning by value
shared_ptr<dog> get_shared()
{
    shared_ptr<dog> dog_ptr = make_shared<dog>("internal dog");
    cout << "managed dog address(in): " << dog_ptr.get() << endl;
    return dog_ptr;
}
int main()
{

    cout << "Passing by value " << endl;
    shared_ptr<dog> shared_ptr_dog_1 = make_shared<dog>("Akamaru");
    cout << "shared_ptr_dog_1 usecount(before) : " << shared_ptr_dog_1.use_count() << endl;
    shared_use_dog(shared_ptr_dog_1);
    cout << "shared_ptr_dog_1 use_count(after) : " << shared_ptr_dog_1.use_count() << endl;
    // passing by non const reference

    cout << endl;
    cout << "passing by non const reference " << endl;
    shared_ptr<dog> shared_ptr_dog_2 = make_shared<dog>("packunn");
    cout << "shared_ptr_dog_2 use count(before) : " << shared_ptr_dog_2.use_count() << endl;
    use_dog_v2(shared_ptr_dog_2);
    cout << "shared_ptr_dog_2 use count(after) : " << shared_ptr_dog_2.use_count() << endl;
    cout << endl;
    cout << "----------" << endl;
    cout << "passing by const reference : " << endl;
    shared_ptr<dog> shared_ptr_dog_3 = make_shared<dog>("kun");
    cout << " shared_ptr_dog_3 use count(before) : " << shared_ptr_dog_3.use_count() << endl;
    use_dog_v3(shared_ptr_dog_3);
    cout << "use count (after): " << shared_ptr_dog_3.use_count() << endl;

    cout << endl;
    cout << "-----" << endl;
    shared_ptr<dog> shared_ptr_dog_4 = get_shared();
    cout << "managed dog address(out) : " << shared_ptr_dog_4.get() << endl;
    cout << "shared_ptr_dog_4 use count :" << shared_ptr_dog_4.use_count() << endl;
    return 0;
}