#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <forward_list>

using namespace std;

class DivisibleBy
{
private:
    const int d;

public:
    DivisibleBy(int n) : d(n) {}
    bool operator()(int n) const { return n % d == 0; }
};

bool is_odd(int n)
{
    return n % 2 != 0;
}

int main()
{
    forward_list<int> collection{2, 4, 7, 8, 10};
    // vector<int> collection{2,4,6,8,10,12};//works for all four or any of them
    // set<int> collection{2,4,6,8,10,12};
    // int collection[]{2,4,6,8,10 };

    if (all_of(begin(collection), end(collection), [](int i)
               { return i % 2 == 0; }))
    {
        cout << "(all_of): all the members of the collection is even" << endl;
    }
    else
    {
        cout << "(all_of): all the members of the collection is odd" << endl;
    }
    cout << "------" << endl;

    // std::any_of ,functor as predicate

    if (any_of(begin(collection), end(collection), DivisibleBy(7)))
    {
        cout << "(any_of) : At least one number is divisible by 7" << endl;
    }
    else
    {
        cout << "(any_of) : None of the numbers is divisible by 7" << endl;
    }

    cout << "-------" << endl;

    // none_of , function pointer as predicate
    if (none_of(begin(collection), end(collection), is_odd))
    {
        cout << "(none_of) :  None of the numbers is odd" << endl;
    }
    else
    {
        cout << "(none_of) : At least one number is odd" << endl;
    }

    return 0;
}