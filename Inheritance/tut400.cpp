#include <iostream>
#include <string>
#include <string_view>
using namespace std;
class person // this is the base class
{
protected:
    string first_name{"Mysterious"};
    string last_name{"Person"};
    friend ostream &operator<<(ostream &os, const person &p);

public:
    person() = default;
    person(string_view first, string_view last) {}
    ~person() = default;
    // getters
    string get_first_name() const
    {
        return first_name;
    }
    string get_last_name() const
    {
        return last_name;
    }
    // getters
    void set_first_name(string_view fn)
    {
        first_name = fn;
    }
    void set_last_name(string_view ln)
    {
        last_name = ln;
    }
    void display_info()
    {
        cout << " Name is : " << last_name << " " << first_name << endl;
    }
};
ostream &operator<<(ostream &os, const person &p)
{
    os << p.first_name << " " << p.last_name << endl;
    return os;
}
class player : public person
{
    friend ostream &operator<<(ostream &out, const player &player1);

public:
    player() = default;
    player(string_view game_para) : m_game{game_para}
    {
        first_name = "Uchiha";
        last_name = "Madara"; // we can use the private member of the person class becaue these members are protected
    }
    player(string_view games, string_view first_para, string_view last_para)
    { // initializer list is useless
        cout << " Game is : " << games << " is played by : " << last_para << " " << first_para << " " << endl;
    }
    ~player() = default;

private:
    string m_game{"PUBG"};
};
inline ostream &operator<<(ostream &out, const player &player1)
{
    out << player1.get_first_name() << " " << player1.get_last_name() << "\n"
        << "---Game is :--- " << player1.m_game << endl;
    return out;
}
int main()
{
    player p1{"The Great Ninja War", "Uchiha", "Madara"};
    cout << " Player is : " << p1 << endl;
    return 0;
}