#include <iostream>
#include <cassert> //to use the assert fuction at the run time
using namespace std;

struct point
{
private:
    double x;
    double y;

public:
    point(initializer_list<double> list)
    {
        cout << "initializer list is called " << endl;
        // static_assert(list.size()==2);//to prevent the excessive members to the object
        assert(list.size() == 2); // checks at the run time list elements should be two elements
        // this will not give the error message because the size is know at the run time
        cout << "the size of the list is " << list.size() << endl; // should be two because two because two values are given to p1
        // cout<<"first elements "<<*(list.begin())<<endl;//first value will be shown
        // cout<<"second elements "<<*(list.begin()+1)<<endl;//pointer arithmetic
        //  for(size_t i=0; i<list.size();++i)
        // cout<<" element ["<<i<<"]: "<<*(list.begin()+i)<<endl;//another method to get the elements
        // /*
        // form many elements
        // for(size_t i=0; i<list.size();++i)
        // cout<<" element ["<<i<<"]: "<<*(list.begin()+i)<<"]"<<endl;//another method to get the elements

        y = *(list.begin());
        x = *(list.begin() + 1); // this will help in the intialization we can initlize second value to x and vice versa
    }
    void display_point() const
    {
        cout << "[x = " << x << " y = " << y << " ]" << endl;
    }
};

int main()
{

    point p1{22.4, 65.5};
    p1.display_point(); // garbage values in x and y
    cout << "---------------------------" << endl;
    point p2{1, 2, 3, 4, 4, 5, 5, 6, 7, 7}; // size will be 10 apart from the only two values in the structure
    p2.display_point();
    return 0;
}