#include <iostream>
#include <vector>
/*
begin() and end() functions return the begin and end iterator respectively for the underlying container passed as parameter

these functions are usually helpful when you want your iterator based code to work even for regular raw c arrays. C arrays support pointers and pointers meet all the requirements for random access iterators.

The requirements for the template arguments is that the collection passed in should support these begin and end iterator
*/
using namespace std;
int main()
{

    // vector<int> vi {1,2,3,4,5,6,7,8,9};
    int vi[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    /*
    cout << " Collection : " ;
    for(auto it = vi.begin(); it!= vi.end(); ++it){
        cout << *it  << " ";
    }

    */

    cout << "--------" << endl;

    cout << " Collection : ";
    for (auto it = begin(vi); it != end(vi); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}