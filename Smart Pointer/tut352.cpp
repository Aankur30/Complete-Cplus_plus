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
    // Array allocated in the stack
            cout
        << "Working with dog array on the stack " << endl;
    dog dog_array[3]{dog{"dog1"}, dog{"dog2"}, dog{"dog3"}};
    for (size_t i = 0; i < 3; i++)
        dog_array[i].print_dog();

    // Array allocated in the heap
    {
        cout << "working with dog array on the heap " << endl;
        dog *p_dog_array = new dog[3]{dog{"dog1"}, dog{"dog2"}, dog{"dog3"}};
        for (size_t i = 0; i < 3; i++)
            p_dog_array[i].print_dog();
        delete[] p_dog_array;
    }
    cout << endl;
    cout << "Array on heap with unique ptr :" << endl;
    auto arr_ptr = unique_ptr<dog[]>(new dog[3]{dog("dog1"), dog("dog2"), dog("dog3")});
    for (size_t i = 0; i < 3; ++i)
        arr_ptr[i].print_dog();
    auto arr_ptr1 = make_unique<dog[]>(3);
    for (size_t i = 0; i < 3; ++i)
        arr_ptr1[i].print_dog();
    return 0;
}