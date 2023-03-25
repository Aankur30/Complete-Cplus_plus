#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maximum(T a, T b)
{
    cout << "Template overload is called(T)" << endl;
    return (a > b) ? a : b;
}
// A raw overload will take precedence over any template instance
// if const is passed to maximum
const char *maximum(const char *a, const char *b)
{
    cout << "raw overload is called " << endl;
    return (strcmp(a, b) > 0) ? a : b;
}
// Overlaod through templates. Will take precedence over raw if a pointer is passed to maximum
template <typename T>
T *maximum(T *a, T *b)
{
    cout << "Template overload is called " << endl;
    return (a > b) ? a : b;
}
using namespace std;

int main()
{
    const char *g{"hello"};
    const char *h{"hight"};
    cout << "max(const char *)" << maximum(g, h) << endl;
    return 0;
}