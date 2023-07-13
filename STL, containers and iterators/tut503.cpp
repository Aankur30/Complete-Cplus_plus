#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_vec(const vector<T> &vec)
{
    for (size_t i = 0; i < vec.size(); ++i)
        cout << vec[i] << "  ";
    cout << endl;
}

int main()
{
    cout << "Constructing vectors..." << endl;
    vector<string> vec_str{"The", "sky", "is", "blue"};
    // cout<<vec_str<<endl; will give an error
    print_vec(vec_str);

    vector<int> ints1;
    print_vec(ints1);

    vector<int> ints2{1, 2, 3, 4, 5, 6, 7, 8, 9}; // can use assginment operator also
    print_vec(ints2);

    vector<int> ints3(20, 55);
    print_vec(ints3);

    vector<int> ints4{20, 55};
    print_vec(ints4);

    cout << "Accessing the elements of a vector" << endl;
    vector<int> ints5{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "ints5[2] : " << ints5[2] << endl;
    cout << "ints5.at(3) : " << ints5.at(3) << endl;
    cout << "ints5.front() : " << ints5.front() << endl;
    cout << "ints5.back() : " << ints5.back() << endl;

    // the data method getting direct access to the underlying data
    cout << "ints5.data() : " << ints5.data() << endl;
    cout << "ints5.size : " << ints5.size() << endl;

    cout << "Adding and removing elements from vector" << endl;
    ints5.push_back(11);
    ints5.push_back(12);
    print_vec(ints5);

    // Poping back
    ints5.pop_back();
    cout << "ints5 : " << endl;
    print_vec(ints5);
    return 0;
}