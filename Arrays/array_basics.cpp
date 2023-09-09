// Revision of arrays
#include <iostream>
using namespace std;
int main()
{
    int a[10];
    // int class[];  this will give error you cannot do this instead mention the size or the elements 
    for (int i{0}; i < 10; i++) // inserting elements in the array
        a[i] = i * 3;
    cout << "Dispaly the elemnts of array" << endl;
    for (int i{0}; i < 10; i++) // Displaying the elements
        cout << "a"
             << "[" << i << "]"
             << " = " << a[i] << endl; //
    int number;
    cout << "Enter the number to print the table of that number" << endl;
    cin >> number;
    for (size_t i{1}; i <= 10; i++)
        cout << number << " X " << i << " = " << i * number << endl;
    // using for each loop

    for (int value : a)
        cout << "value"
             << " = " << value << endl;
    return 0;
}
