#include <iostream>
#include <cstring>
using namespace std;

class person
{
    string last_name{};
    string first_name{};
    int *age{};

public:
    // constructors
    person() = default;
    person(const string &last_para, const string &first_para, int age_para) : last_name(last_para), first_name(first_para), age(new int(age_para)) {}
    person(const string &last_para, const string &first_para) : person(last_para, first_para, 0) {}
    person(const string &last_para) : person(last_para, "") {}

    // copy constructor
    //  person(const person source_person):last_name(source_person.getlast_name()),first_name(source_person.getfirst_name()),age(new int(*source_person.get_age()){}//BAD : Poitential for an endless chain of copy constructor

    // Memeberwise copy constructor
    person(const person &source_person) :

                                          last_name(source_person.getlast_name()),
                                          first_name(source_person.getfirst_name()), // this copy constructor works pretty well
                                          age(new int(*source_person.get_age()))
    {
        cout << "copy constructor called" << endl;
    }

    //  destructor

    ~person() {}
    // getter function

    const string getfirst_name() const
    {
        return first_name;
    }
    const string getlast_name() const
    {
        return last_name;
    }
    int *get_age() const
    {
        return age;
    }
    // setter function
    void set_first_name(const string first_name) { this->first_name = first_name; }
    void set_last_name(const string last_name) { this->last_name = last_name; }
    void set_age(int age) { *(this->age) = age; }
    // utilities
    void display()
    {
        cout << "-----this will display the contents of the class -----" << endl;
        cout << "Person object at " << this << "[Last_name  : " << last_name << ", first_name : " << first_name << ", age : " << *age << ", age address : " << age << "]" << endl;
        cout << endl;
    }
};

int main()
{
    person p1{"john", "snow", 4};
    p1.display();
    person p2(p1); // the address of the second object would be same as the first object
    p2.display();
    p1.set_age(34);
    cout << "------------Seperator-to see---the--changes--------------------------" << endl;
    p1.display();
    p2.display();
    return 0;
}