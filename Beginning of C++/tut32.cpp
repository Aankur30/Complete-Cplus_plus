#include <iostream>

using namespace std;

int main()
{

    // Compile time error
    cout << "Hello Word!" << endl;//this could be a compiler error as it occurs generally when we voilate the rules of writing syntax 

    // Run time error
    int value = 7 / 0;
    cout << "value : " << value << endl;// this is run time error because it is not a syntax error it a semantic error or crashes 

    return 0;
}