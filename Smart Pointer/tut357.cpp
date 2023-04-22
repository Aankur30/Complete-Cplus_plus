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
private:
    string m_name;
    weak_ptr<person> m_friend;

public:
    person()
    {
        cout << "person constructor" << endl;
    }
    person(string name)
    {
        m_name = name;
        cout << "person constructor" << endl;
    }
    ~person()
    {
        cout << "person destructor is called" << endl;
    }
    void set_friend(weak_ptr<person> p)
    {
        m_friend = p;
    }
};
int main()
{
    shared_ptr<dog> dog1 = make_shared<dog>("dog1");
    shared_ptr<int> int1 = make_shared<int>(200);
    weak_ptr<dog> weak_dog1(dog1);
    weak_ptr<int> weak_int1(int1);
    // cout<<"dog name: "<<weak_dog1->get_name()<<endl;
    // cout<<"pointed to value:"<<*weak_int1<<endl;
    // cout<<" pointed to address: "<<weak_dog1.get()<<endl;
    // above all will give the compiler error

    cout << endl;
    // to use a weak ptr you have to turn it into a shared pointer  with the lock method
    shared_ptr<dog> weak_turned_shared = weak_dog1.lock();
    cout << "dog name :" << weak_turned_shared->get_name() << endl;
    cout << "weak_turned_shared :" << weak_turned_shared.use_count() << endl;
    cout << "dog name :" << dog1->get_name() << endl;
    cout<<endl;
    cout<<"-------"<<endl;
    cout<<"ciurcular dependencies problems "<<endl;
    shared_ptr<person> person_a = make_shared<person>("manish");
    shared_ptr<person> person_b = make_shared<person>("Priyanshu");
    person_a->set_friend(person_b);
    person_b->set_friend(person_a);
    return 0;
}