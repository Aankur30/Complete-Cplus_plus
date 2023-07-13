#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_collection(const T &collection)
{

    auto it = collection.begin();

    cout << " [";
    while (it != collection.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << "]" << endl;
}

int main()
{

    vector<int> numbers{11, 22, 33, 44, 55, 66, 77};

    cout << "numbers : ";
    print_collection(numbers);

    /*
    vector<int>::iterator it = numbers.begin();
    while( it != numbers.end()){
        *it = 100;
        ++it;
    }
    */

    cout << "numbers : ";
    print_collection(numbers);

    cout << "-------" << endl;

    // vector<int>::const_iterator c_it = numbers.cbegin();
    auto c_it = numbers.cbegin();
    while (c_it != numbers.end())
    {
        // *c_it = 100;
        ++c_it;
    }

    // Constant reverse iterators
    auto it1 = numbers.crbegin();
    // vector<int>::const_reverse_iterator it1= numbers.crbegin();

    while (it1 != numbers.crend())
    {
        //*it1 = 600; // Compiler error, it1 is a const iterator, we can't modify
        // container data through it.
        ++it1;
    }

    return 0;
}