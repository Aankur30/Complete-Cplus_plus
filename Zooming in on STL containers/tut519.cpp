#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    cout << "Creating pairs..." << endl;
    pair<int, string> pair1(0, "Book shelf");

    auto pair2 = make_pair(1, "Table");

    cout << "pair1 ("
         << "pair1.first : " << pair1.first << " pair1.second : " << pair1.second << endl;
    cout << "pair2 ("
         << "pair2.first : " << pair2.first << " pair2.second : " << pair2.second << endl;

    // code 2 auto[] syntax- collect components of a pair into variables
    cout << "auto[] syntax- collect components of a pair into variables" << endl;
    auto [int_var, string_var] = pair1;
    cout << "pair1 ("
         << "pair1.first : " << int_var << endl
         << " pair1.second : " << string_var << endl;
    cout << "template arguments deduction: " << endl;
    pair student(33165, string("hello world"));
    cout << "student.first : " << student.first << endl;
    cout << "student.second : " << student.second << endl;

    vector<pair<int, string>> collection{{1, "Mercury"}, {2, "Venus"}, {3, "Earth"}, {4, "Mars"}};

    // Traverse : syntax1
    cout << endl;
    cout << "syntax1 : " << endl;
    cout << "collection : [";
    for (const auto &elt : collection)
    {
        cout << " (" << elt.first << "," << elt.second << ")";
    }
    cout << "]" << endl;

    // Traverse : syntax2
    cout << endl;
    cout << "syntax2 : " << endl;
    cout << "collection : [";
    for (auto [key, value] : collection)
    {
        cout << " (" << key << "," << value << ")";
    }
    cout << "]" << endl;

    return 0;
}