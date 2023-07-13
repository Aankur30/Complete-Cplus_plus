#include <iostream>
#include <vector>
#include <array>

using namespace std;
template <typename T>
void print_collection(const T &collection)
{
    auto it = collection.begin();
    cout << " The collection is [ ";
    while (it != collection.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << " ]" << endl;
}

int main()
{

    vector<int> ints1{11, 22, 33, 44};
    array<int, 4> ints2{1, 2, 3, 4};
    vector<int>::iterator it = ints1.begin();
    vector<int>::iterator end_it = ints1.end(); // it points past the last element in the collection not the last element

    cout << boolalpha;
    cout << "first element  : " << *it << endl;
    cout << "sizeof(it) : " << sizeof(it) << endl;
    cout << "(it==end_it) : " << (it == end_it) << endl;
    cout << endl;

    ++it;
    cout << "second element : " << *it << endl;
    cout << "(it==end_it) : " << (it == end_it) << endl;
    cout << endl;
    ++it;
    cout << "third element : " << *it << endl;
    cout << "(it==end_it) : " << (it == end_it) << endl;
    cout << endl;

    ++it;
    cout << "fourth element : " << *it << endl;
    cout << "(it==end_it) : " << (it == end_it) << endl;
    cout << endl;

    ++it;
    cout << "junk element : " << *it << endl; // sometimes gets the crash
    cout << "(it==end_it) : " << (it == end_it) << endl;
    cout << "ints1"
         << "\t";
    print_collection(ints1);
    cout << "ints2"
         << "\t";

    print_collection(ints2); // both can be printed with the iterators

    return 0;
}