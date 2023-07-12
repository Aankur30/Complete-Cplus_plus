#include <iostream>
using namespace std;
double add(double a, double b){
    return a+b;
}


int main(){

    double (*f_ptr) (double, double)  = &add;
    //double(*f_ptr) (double,double) = add;

    //double(*f_ptr) (double,double) {&add};
    //double(*f_ptr) (double,double){add};

    //auto f_ptr = &add;
    //auto f_ptr = add;

    //auto *f_ptr = &add;
    //auto *f_ptr = add;

    //Things gone wroong
    // double(*f_ptr) (double , double) = nullptr;


    cout << "add(10,30) : " << f_ptr(10,30) << endl;
    
    return 0;
}