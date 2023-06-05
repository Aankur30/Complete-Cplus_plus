// upgarded fortune teller application using the const char pointer
#include <iostream>
#include <ctime>
using namespace std;
int main()

{                   //-----------------------------SEEDING------------------------------------------
    srand(time(0)); // seeding to get different output everytime we run random function
    const char *predections[]{"hello", "hi", "how are you??", "BYE!!", "See u next time", "Hello World!!", "C++", "I am tired", "Stop Coding", "Data Structure", "OPPS!!"};
    //-----------------------------Fortune Teller Appliction-------------------------
    bool end{false};
    const int length{15};
    char name[length];
    cout << "what's your name dear : " << endl;
    cin.getline(name, length);
    cout << " Oh dear " << name << " I see you!!!" << endl;
    while (!end)
    {
        size_t num = (rand() % size(predections));
        cout << predections[num] << endl;
        cout << "do you want to try again ? (Y|N)" << endl;
        char go;
        cin >> go;
        end = ((go == 'y') || (go == 'Y')) ? false : true;
    }
    cout << "that's all I have for you today dear.BEST WISHES" << endl;
    cout << "Take care " << name << endl;
    return 0;
}