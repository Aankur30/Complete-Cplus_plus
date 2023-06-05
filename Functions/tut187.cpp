#include <iostream>
using namespace std;
void compute(int age = 34, double weight = 45.77, int distance = 4)
{
    cout << "the age is : " << age << endl;
    cout << "the weight is : " << weight << endl;
    cout << "the distance covered : " << distance;
}
int main()
{
    int age, distance;
    double weight;
    compute(44.56, 6);
    return 0;
}