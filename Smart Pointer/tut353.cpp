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
int main()
{
    shared_ptr<int> int_ptr_1(new int{20});
    cout << "the pointer value is " << *int_ptr_1 << endl;
    *int_ptr_1 = 70;
    cout << "the pointer value is " << *int_ptr_1 << endl;
    cout << "Use count : " << int_ptr_1.use_count() << endl;

    cout << endl
         << "copying....." << endl;
    shared_ptr<int> int_ptr_2 = int_ptr_1;
    cout << "the pointer value is " << *int_ptr_2 << endl;
    *int_ptr_2 = 45;
    cout << "the pointer value is " << *int_ptr_2 << endl;
    cout << " Use count for int_ptr_1 : " << int_ptr_1.use_count() << endl;
    cout << " Use count for int_ptr_2 : " << int_ptr_2.use_count() << endl;

    cout << endl
         << "more pointer...." << endl;
    shared_ptr<int> int_ptr_3;
    int_ptr_3 = int_ptr_1;
    shared_ptr<int> int_ptr_4{nullptr};
    int_ptr_4 = int_ptr_1;
    shared_ptr<int> int_ptr_5{int_ptr_1};

    cout << endl
         << "Counting pointer...." << endl;
    cout << "Use count of the int_ptr_1 : " << int_ptr_1.use_count() << endl;
    cout << "Use count of the int_ptr_2 : " << int_ptr_2.use_count() << endl;
    cout << "Use count of the int_ptr_3 : " << int_ptr_3.use_count() << endl;
    cout << "Use count of the int_ptr_4 : " << int_ptr_4.use_count() << endl;
    cout << "Use count of the int_ptr_5 : " << int_ptr_5.use_count() << endl;

    cout << endl
         << "resetting...." << endl;
    int_ptr_5.reset();
    cout << endl
         << "Counting pointer after resetting...." << endl;
    cout << "Use count of the int_ptr_1 : " << int_ptr_1.use_count() << endl;
    cout << "Use count of the int_ptr_2 : " << int_ptr_2.use_count() << endl;
    cout << "Use count of the int_ptr_3 : " << int_ptr_3.use_count() << endl; // all these get decremented by 1
    cout << "Use count of the int_ptr_4 : " << int_ptr_4.use_count() << endl;
    cout << "Use count of the int_ptr_5 : " << int_ptr_5.use_count() << endl; // this will become zero (0)

    cout << endl
         << "castable to bools....." << endl;
    cout << "int_ptr_4.get() : " << int_ptr_4.get() << endl; // gives the address
    cout << boolalpha;
    cout << "int_ptr_4->bool : " << static_cast<bool>(int_ptr_4) << endl;
    cout << "int_ptr_5->bool : " << static_cast<bool>(int_ptr_5) << endl;
    if (int_ptr_4)
        cout << "Pointing something valid..." << endl;
    else
        cout << "Pointing to nullptr..." << endl;

    cout << endl
         << "use of make_shared_pointer...." << endl;
    shared_ptr<int> int_ptr_6 = make_shared<int>(55);
    shared_ptr<dog> dog_ptr_6 = make_shared<dog>("Salz");
    dog_ptr_6->print_dog();
    cout << "int_ptr_6 use count : " << int_ptr_6.use_count() << endl;
    cout << "dog_ptr_6 use count : " << dog_ptr_6.use_count() << endl;

    // shared the objects data with other shared_ptr's
    cout << endl
         << "sharign the object(data) with other shared_ptr's :" << endl;
    shared_ptr<int> int_ptr_7{nullptr};
    int_ptr_7 = int_ptr_6;
    shared_ptr<dog> dog_ptr_7{nullptr};
    dog_ptr_7 = dog_ptr_6;

    cout << " int_ptr_6 use count : " << int_ptr_6.use_count() << endl;
    cout << " dog_ptr_6 use count : " << dog_ptr_6.use_count() << endl;

    return 0;
}