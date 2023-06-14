#include <iostream>
using namespace std;

class Students
{
public:
    Students() = delete;
    Students(string_view s1, string_view s2, string_view s3,
             string_view s4, string_view s5)
    {
        m_students[0] = s1;
        m_students[1] = s2;
        m_students[2] = s3;
        m_students[3] = s4;
        m_students[4] = s5;
    }
    ~Students() = default;

    string_view get_student(size_t index)
    {
        const string message = "Index out of range, valid range[" + to_string(0) + "," + to_string(4) + "]";

        if ((index < 0) || (index >= 5))
            throw out_of_range(message);
        return m_students[index];
    }

private:
    string m_students[5];
};

int main()
{

    Students students("John Snow", "Terry Boomd",
                      "Nicholai Itchenko", "Bilom Atunde", "Lily Park");

    try
    {
        // cout << students.get_student(2) << endl;
        cout << students.get_student(-2) << endl;
    }
    catch (exception &ex)
    {
        cout << "Exception cought : " << ex.what() << endl;
    }

    cout << "END." << std::endl;
}