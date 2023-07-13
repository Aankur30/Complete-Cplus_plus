#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Trying out reverse iterators
    // auto it = numbers.rbegin(); // A reverse iterator increments backwards from the end.
    vector<int>::reverse_iterator it = numbers.rbegin();
    *it = 34;
    cout << "Numbers : [";
    while (it != numbers.rend())
    {
        cout << " " << *it;
        ++it;
    }
    cout << "] " << endl;

    cout << "--------" << endl;
    /*
    auto it_rev = numbers.rbegin();

    if( it_rev != numbers.end()){ // Compiler error.
        cout << "Do something..." << endl;
    }
    */

    return 0;
}