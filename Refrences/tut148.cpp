#include <iostream>
using namespace std;
int main()
{
    int score[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto scores : score)
    {
        scores = scores * 10;
    }
    cout << "  the value of score after the modification" << endl;
    for (auto scores : score)
        cout << " " << scores << endl;
    // no modification takes place
    cout << "for modification use refrence in for each loop" << endl;
    for (auto &scores : score)
    {
        scores = scores * 10;
    }
    cout << "  the value of score after the modification" << endl;
    for (auto scores : score)
        cout << " " << scores << endl; // modification takes place using refrence
    return 0;
}