#include <iostream>
#include <string>
#include <string_view>
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
// player will do public inheritance from person
class player : public person
{
    friend ostream operator<<(ostream &out, const player &pl);

public:
    player() = default;
    ~player();
    // see the access we have to inherited members from person
    void play() {}

private:
    int start_year{0};
    double m_salary{0.0};
    int health_factor{0}; // lets say that it's 0-10
};

int main()
{
    person p1("Uchiha Madara ", 23, "Uchiha clan temple");
    cout << "Description  of the people: " << endl;
    cout << p1 << endl;
    player p2;
    cout << p2 << endl;
    return 0;
}

/*
We will completer the whole code later  in the revision time
*/