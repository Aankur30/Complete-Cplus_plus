#include <iostream>
using namespace std;
class person // this is the base class
{
protected:
    friend ostream &operator<<(ostream &os, const person &p);

public:
    person() = default;
    person(const string_view fullname, int age, const string address) : m_full_name{fullname}, m_age{age}, m_address{address}
    {
    }
    ~person() = default;

    // getters
    string get_fullname() const
    {
        return m_full_name;
    }
    int get_age() const
    {
        return m_age;
    }
    string get_address() const
    {
        return m_address;
    }

public:
    string m_full_name{"Uchiha Madara"};

protected:
    int m_age{100};

private:
    string m_address{"Uchiha Clan Area"};
};
ostream &operator<<(ostream &os, const person &p)
{
    os << "Person [full name : " << p.get_fullname() << "age : " << p.get_age() << " address : " << p.get_address() << "]" << endl;
    return os;
}
// crete an engineer class
class engineer : private person
{
    friend ostream &operator<<(ostream &out, const engineer &operand);

public:
    engineer();
    ~engineer();
    void build_something()
    {
        m_full_name = "John Snow";
        m_age = 23;
        // m_address this will give you an error
    }

private:
    int contract_count{0};
};
ostream &operator<<(ostream &out, const engineer &operand)
{

    return out;
}
int main()
{

    return 0;
}