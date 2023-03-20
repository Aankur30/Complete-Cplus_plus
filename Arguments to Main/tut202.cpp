#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout << "We have " << argc << "  arguments in the main" << endl;
    for (size_t i{}; i < argc; ++i)
        cout << "Arguments [ " << i << " ] : " << argv[i] << endl;
    return 0;
}