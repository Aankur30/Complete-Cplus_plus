#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    cout << "character is alphanumeric" << endl;
    cout << "C is alphanumeric : " << isalnum('C') << endl;
    cout << "^ is alphanumeric : " << isalnum('^') << endl;
    cout << "-------------------------------------------" << endl;
    cout << "character is alphabet" << endl;
    cout << "C is alphabet : " << isalpha('C') << endl;
    cout << "7 is alphabet : " << isalpha('7') << endl;
    cout << "-------------------------------------------" << endl;
    cout << "character is blank" << endl;
    char message[]{"the quick brown fox jumps over the lazy dog"};
    int blank;
    for (size_t i{}; i < size(message); i++)
        if (isblank(message[i]))
        {
            cout << "Blank is found at " << i << endl;
            ++blank;
        }
    cout << "the number of blanks in the sentence is : " << blank << endl;
    cout << "-------------------------------------------" << endl;
    char data[]{"Lorem ipsum dolor sit amet consectetur adipisicing elit recusandae aut ea doloribus amet pariatur aspernatur veritatis autem commodi tempore at voluptates atque perspiciatis et dicta porro voluptatibus ut sequI"};
    int lower_count = 0, upper_count = 0;
    cout << "Original string is : " << data << endl;
    for (auto character : data)
    {
        if (islower(character))
        {
            cout << "  lower case Character is :" << character << endl;
            ++lower_count;
        }
        if (isupper(character))
        {
            cout << "Upper case Character is :" << character << endl;
            ++upper_count;
        }
    }
    cout << "the lower case letters are :  " << lower_count << endl;
    cout << "the upper case letters are :  " << upper_count << endl;
    cout << "-------------------------------------------" << endl;
    char statement[]{"1 2 3 4 5 667 45 46 this is 1 C++ cod3 in this comput3r "};
    int count{};
    for (auto counting : statement)
        if (isdigit(counting))
        {
            cout << "the digit character is : " << counting << endl;
            ++count;
        }
    cout << " Total number of the digits in the string is : " << count << endl;
    cout << "-------------------------------------------" << endl;
    char original[]{"consectITURur adipINDicing elIt recTsandae aUt EA doloriDus aNNet paANTatur as"};
    char destination[size(original)];
    for (size_t i{}; i < size(original); i++)
        destination[i] = toupper(original[i]);

    cout << "---------Original String----------" << endl;
    cout << original << endl;
    cout << "------------Modified String---------" << endl;
    cout << destination << endl;
    cout << "-------------------------------------------" << endl;
    for (size_t i{}; i < size(original); i++)
        destination[i] = tolower(original[i]);

    cout << "---------Original String----------" << endl;
    cout << original << endl;
    cout << "------------Modified String---------" << endl;
    cout << destination << endl;

    return 0;
}