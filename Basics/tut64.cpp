#include <iostream>

using namespace std;
int main()
{
    constexpr int eye_count{2};
    int leg_count{3}; // not a constexpr expression
    constexpr int arm_count{10};
    constexpr int room_count{arm_count};
    cout << "the constant expression is = " << room_count;
    const int a = 12;
    static_assert(a == 12);

    return 0;
}