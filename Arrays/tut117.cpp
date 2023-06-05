#include <iostream>
#include <ctime>
using namespace std;
int main()

{                   //-----------------------------SEEDING------------------------------------------
    srand(time(0)); // seeding to get different output everytime we run random function

    int number = rand(); // genertates number between RAND_MAX and 0
    cout << "number is = " << number << endl;
    cout << "RAND_MAX = " << RAND_MAX << endl;
    cout << "-----------------Random number between the range------------------" << endl;
    int num = rand() % 11;
    cout << "number is =" << num << endl;
    cout << "------------Generating random number using the loop----------------" << endl;
    for (size_t i{0}; i < 30; i++)
    {
        num = rand() % 15;
        cout << i << " the random number is = " << num << endl;
    }
    return 0;
}