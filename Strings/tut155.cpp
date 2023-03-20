#include <iostream>
#include <string>
using namespace std;
int main()
{
    string full_name;
    string planet{"Earth is a planet"};
    string duplicate{planet};
    string slicing{"Hello there", 5};
    string repeat{4, 'e'};
    string greetings{"Hello there"};
    string advanced{greetings, 6, 5};
    cout << "----------DISPLAY---------------" << endl;
    cout << "planet : " << planet << endl;
    cout << "duplicate : " << duplicate << endl;
    cout << "slicing : " << slicing << endl;
    cout << "repeat : " << repeat << endl;//not supporting should give eeee as output
    cout << "greetings : " << greetings << endl;
    cout << "advanced : " << advanced << endl;
    return 0;
}
