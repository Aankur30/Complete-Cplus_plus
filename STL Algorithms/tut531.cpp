#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

struct Sum
{
    void operator()(int n) { sum += n; }
    int sum{0};
};

int main()
{

    vector<int> nums{3, 4, 2, 8, 15, 267};
    // int nums[]{3, 4, 2, 8, 15, 267};
    // set<int> nums{3, 4, 2, 8, 15, 267};

    auto print = [](const int &n)
    {
        cout << " " << n;
    };

    // Print each elt in the collection : lambda function predicate
    for_each(begin(nums), end(nums), print);
    cout << endl;

    cout << "---------------------------------" << endl;

    // Predicate that modifies elements in place
    for_each(begin(nums), end(nums), [](int &n)
             { n++; });

    // Print
    for_each(begin(nums), end(nums), print);
    cout << endl;

    cout << "---------------------------------" << endl;

    // Capturing result through stateful functor that's returned
    //  calls Sum::operator() for each number
    Sum s;
    s = std::for_each(begin(nums), end(nums), s);
    cout << "result : " << s.sum << endl;

    cout << "---------------------------------" << endl;

    // Using a lambda that captures a local variables by ref and modifies it.
    int our_result{0};
    for_each(std::begin(nums), end(nums), [&our_result](int n)
             { our_result += n; });
    cout << "result : " << our_result << endl;

    return 0;
}