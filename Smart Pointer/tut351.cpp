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
class person
{
    int m_age;
    string m_name;

public:
    person(string name) : m_name(name)
    {
        cout << "this is a person constructor " << m_name << endl;
    }
    person() = default;
    ~person()
    {
        cout << "this is a person destructor " << m_name << endl;
    }
    void adopt_dog(unique_ptr<dog> d)
    {
        cout << m_name << " just adopted " << d->get_name() << endl;
    }
};
void do_something(unique_ptr<dog> d)
{
    d->print_dog();
}
int main()
{
    // unique_ptr<dog> p_dog_1 =make_unique<dog>("Dog1");
    // // do_something(p_dog_1);//copy detected
    // do_something(move(p_dog_1));//this will work because ownership will move to the body of the function
    // cout<<"p_dog1 is now pointed to : "<<p_dog_1.get()<<endl;//pointed to nullptr

    cout << "--------------------------------" << endl;
    unique_ptr<dog> p_dog_1 = make_unique<dog>("Dog1");
    person person1("John");
    person1.adopt_dog(move(p_dog_1)); // making copies
    // the same behavior as when the function is part of the class
    cout << "Doing something , p_dog_1 points to : " << p_dog_1.get() << endl;

    //passing the function by reference
    cout<<"---The function by reference---"<<endl;
    
    return 0;
}