#include <iostream>
#include <cassert>
using namespace std;
class scores
{
public:
    scores() = delete;
    scores(const string &course_para) : course(course_para) {}
    ~scores() = default;
    // non const
    double &operator[](size_t index)
    {
        assert(index >= 0 && index < 20);
        return m_scores[index];
    }
    // const
    const double &operator[](size_t index) const
    {
        assert(index >= 0 && index < 20);
        return m_scores[index];
    }

    void print_info() const
    {
        cout << "course name " << course << ": [";
        for (size_t i = 0; i < 10; ++i)
            cout << m_scores[i] << "\t";
        cout << "]" << endl;
    }

private:
    double m_scores[10]{};
    string course;
};
int main()
{
    scores math("Maths");
    math.print_info();
    math[5] = 66;
    math.print_info();
    const scores geo("geography");
    geo.print_info();
    cout << "Geo[5]: " << geo[5] << endl; // but we can't modify the array because it is declared as const
    return 0;
}