#include <iostream>
using namespace std;
int main()
{
    int score[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p_score{score}; // no need of & in referencing the arrray in a pointer
    cout << "-------------Pointer Arithematic--------------------" << endl;
    cout << "Address of  " << p_score << "\t"
         << "Value is " << *(p_score) << endl;
    ++p_score;
    cout << "Address of  " << p_score << "\t"
         << "Value is " << *(p_score) << endl;

    // another way of moving the pointer
    cout << "Score[4]" << *(p_score + 4) << endl;
    cout << "----------can use loops for the pointer arithematic-------" << endl;
    p_score = score;
    for (int i{0}; i < size(score); i++)
        cout << "Value of score[" << i << "] = " << *(p_score + i) << endl;
    // array name is itself is a pointer
    for (int i{0}; i < size(score); i++)
        cout << "Value of score[" << i << "] = " << *(score + i) << endl;
    return 0;
}