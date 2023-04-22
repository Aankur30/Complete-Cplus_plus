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
    shared_ptr<int[]> s_ptr_int_1(new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 1});
    shared_ptr<dog[]> s_ptr_dog_1(new dog[10]{dog("Dog1"), dog("Dog2")});
    // reading the integer value
    cout << "reading the integer value" << endl;
    for (size_t i{0}; i < 10; i++)
        cout << "s_ptr_int_1[" << i << "] = " << s_ptr_int_1[i] << endl;
    cout << endl;
    cout << "reading the dog value" << endl;
    for (size_t i{0}; i < 10; i++)
        cout << "s_ptr_dog_1[" << i << "] = " << s_ptr_dog_1[i].get_name() << endl;
    cout << "Setting the values :" << endl;
    s_ptr_dog_1[1] = dog("packun");
    s_ptr_int_1[3] = 27;
    cout << "reading the integer value" << endl;
    for (size_t i{0}; i < 10; i++)
        cout << "s_ptr_int_1[" << i << "] = " << s_ptr_int_1[i] << endl;
    cout << endl;
    cout << "reading the dog value" << endl;
    for (size_t i{0}; i < 10; i++)
        cout << "s_ptr_dog_1[" << i << "] = " << s_ptr_dog_1[i].get_name() << endl;
    cout << "Setting the values :" << endl;
    /*
    make_shared syntax isn't supported yet for raw arrays. Some compilers do offer some partial support for it,but I would not recommend using that in your code so I won't show that here. If you find yourself needing to use shared_ptr with arrays, then new is still your friend. But once the array is created the shared_ptr id going to manage the memory , you don't need to explicitly call delete.

    You won't to use raw arrays with smart pointers that often through, there are better and more practical collections types we will learn about later in the course that almost remove the need for raw arrays.
    */

    return 0;
}