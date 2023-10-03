#include <iostream>

using namespace std;

int main()
{

    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    // int modifiers suffixes
    auto var6{123u}; // unsigned
    var6 = -22;
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long

    cout << endl;
    cout << " var1 occupies = " << sizeof(var1) << endl;
    cout << " type of auto variable is var1 " << typeid(var1).name() << endl; // used typeid for getting the type of the variable

    cout << " var2 occupies = " << sizeof(var2) << endl;
    cout << " type of auto variable is var2 " << typeid(var2).name() << endl;

    cout << " var3 occupies = " << sizeof(var3) << endl;
    cout << " type of auto variable is var3 " << typeid(var3).name() << endl;

    cout << " var4 occupies = " << sizeof(var4) << endl;
    cout << " type of auto variable is var4 " << typeid(var4).name() << endl;

    cout << " var5 occupies = " << sizeof(var5) << endl;
    cout << " type of auto variable is var5 " << typeid(var5).name() << endl;

    cout << " var6 occupies = " << sizeof(var6) << endl;
    cout << " type of auto variable is var6 " << typeid(var6).name() << endl;
    cout << "var6 contains " << var6 << endl; // it will give some random value as -22 does not exist in that range

    cout << " var7 occupies = " << sizeof(var7) << endl;
    cout << " type of auto variable is var7 " << typeid(var7).name() << endl;

    cout << " var8 occupies = " << sizeof(var8) << endl;
    cout << " type of auto variable is var8 " << typeid(var8).name() << endl;

    return 0;
}