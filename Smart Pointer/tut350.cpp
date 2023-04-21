#include <iostream>
#include <memory>
#include <string>
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
        cout << "Printing dog " << dog_name << endl;
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

int main()
{
    // stack variables
    dog dog1{"Dog1"};
    dog1.print_dog();
    cout << "---------DONE----------" << endl;

    // using the raw pointer
    cout << endl
         << "-------Using the raw pointers---------" << endl;
    dog *p_dog2 = new dog("dog2"); // setting the dog object in the heap
    int *p_int2 = new int(100);
    p_dog2->print_dog();
    cout << "Integer value is " << *p_int2 << endl;
    cout << "Integer lives at address " << p_int2 << endl;
    delete p_dog2; // calls the destructor if we remove this desctructor will not be called
    // release the memory allocated explicitly to avoid memory leaks
    delete p_int2;
    cout << "-------Done!------" << endl;

    // unique pointers
    cout << endl
         << "-------unique pointers------" << endl;
    dog *p_dog3 = new dog("dog3");
    unique_ptr<dog> up_dog_4(p_dog3); // after doing this dont try to use the p_dog3 pointer for any further usage
    unique_ptr<dog> up_dog_5{new dog("dog5")};
    unique_ptr<int> up_int3{new int(200)};
    unique_ptr<dog> up_dog_6{nullptr}; // can also intitalize to nullptr
    up_dog_5->print_dog();
    *up_int3 = 500;
    cout << "Integer value is : " << *up_int3 << endl;
    cout << "Integer lives at address : " << up_int3.get() << endl; // get method is used to get the memory address of the variable
    cout << "-------Done!------" << endl;

    // using the make_unique syntax
    cout << endl
         << "---Using make_unique----" << endl;
    unique_ptr<dog> up_dog_7 = make_unique<dog>("dog7");
    up_dog_7->print_dog();
    unique_ptr<int> up_int4 = make_unique<int>(30);
    *up_int4 = 69;
    cout << "Value of up_int3 is : " << *up_int4 << endl;
    cout << "Integer lives at address : " << up_int4.get() << endl; // get method is used
    cout << "-------Done!------" << endl;

    // copies are not allowed
    unique_ptr<dog> up_dog_8 = make_unique<dog>("Dog8");
    up_dog_8->print_dog();
    cout << "Dog8 memory allocated : " << up_dog_8.get() << endl;
    // unique_ptr<dog>up_dog_9=up_dog_8; //cannot make copies
    // unique_ptr<dog>up_dog_10(up_dog_8);//copy constructor
    cout << "---Done!" << endl;

    // Moving ownership
    cout << endl
         << "Moving ownership..." << endl;
    unique_ptr<dog> up_dog_11 = make_unique<dog>("Dog11");
    unique_ptr<dog> up_dog_12 = move(up_dog_11);
    up_dog_12->print_dog();
    cout << "Dog12 memory allocation : " << up_dog_12.get() << endl;
    cout << "Dog11 memory allocation : " << up_dog_11.get() << endl; // automatically assigned as nullptr
    cout << "---Done!" << endl;

    // resetting
    cout << endl
         << "----resetting----" << endl;
    unique_ptr<dog> up_dog_13 = make_unique<dog>("dog13");
    up_dog_13.reset();                                                  // the moment it get reset descructor is called
    cout << "up dog13 memory allocation : " << up_dog_13.get() << endl; // get 0 as pointed to nullptr
    cout << "---Done!-----" << endl;
    return 0;
}