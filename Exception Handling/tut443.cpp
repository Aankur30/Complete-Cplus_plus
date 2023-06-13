#include <iostream>
#include <exception>
#include <chrono>
#include <thread>
using namespace std;
void our_terminate()
{
    cout << "Our custom terminate function called" << endl;
    cout << "Program will terminate in 10s..." << endl;
    this_thread::sleep_for(std::chrono::seconds(10));
    cout << "Program terminated successfully" << endl;
    abort();
}
int main()
{
    // custom terminate function when unhandled exception happens
    set_terminate(&our_terminate);
    throw 1;
    return 0;
}