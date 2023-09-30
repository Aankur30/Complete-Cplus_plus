#include <iostream>

using namespace std;

int main()
{

    // Braced initializers

    // Variable may contain random garbage value . WARNING
    int elephant_count;

    int lion_count{}; // Initializes to zero

    int dog_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    //
    // int new_number{doesnt_exist};

    //    int narrowing_conversion {2.9};//Compiler error  this doesn't typecast and store it simply gets the error whether in assignment it type cast and shows the output instead

    cout << "Elephant count : " << elephant_count << endl;
    cout << "Lion count : " << lion_count << endl;
    cout << "Dog count : " << dog_count << endl;
    cout << "Cat count : " << cat_count << endl;
    cout << "Domesticated animal count : " << domesticated_animals << endl;

    // Functional Initialization

    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    // int bad_initialization ( doesnt_exist3 + doesnt_exist4 );

    // Information lost. less safe than braced initializers
    int narrowing_conversion_functional(2.9); // conversion is possible in this form

    cout << "Apple count : " << apple_count << endl;
    cout << "Orange count : " << orange_count << endl;
    cout << "Fruit count : " << fruit_count << endl;
    cout << "Narrowing conversion : " << narrowing_conversion_functional << endl; // Will loose

    // Assignment notation

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9; // this is also a valid conversion assignment

    cout << "Bike count : " << bike_count << endl;
    cout << "Truck count : " << truck_count << endl;
    cout << "Vehicle count : " << vehicle_count << endl;
    cout << "Narrowing conversion : " << narrowing_conversion_assignment << endl;

    // Check the size with sizeof
    cout << "sizeof int : " << sizeof(int) << endl;
    cout << "sizeof truck_count : " << sizeof(truck_count) << endl;
    return 0;
}

// Braced initialisation is the safest method it prevents the data from being lost. 