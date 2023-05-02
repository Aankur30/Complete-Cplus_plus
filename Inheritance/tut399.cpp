#include <iostream>
#include <string>
#include <string_view>
using namespace std;
class person // this is the base class
{
private:
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
        player(string_view game_para) : m_game{game_para} {}
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
        player p1{" basketball "};
        cout << "player 1 : " << p1 << endl;
        p1.set_first_name("Madara");
        p1.set_last_name("Uchiha");
        p1.display_info();

        return 0;
    }
