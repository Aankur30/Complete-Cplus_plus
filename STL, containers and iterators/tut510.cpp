#include <iostream>
#include <vector>

using namespace std;
int main(){

    //vector<int> vi {1,2,3,4,5,6,7,8,9};
    int vi[] {1,2,3,4,5,6,7,8,9};
    

    /*
    cout << " Collection : " ;
    for(auto it = vi.begin(); it!= vi.end(); ++it){
        cout << *it  << " ";
    }

    */

   cout << "--------" << endl;

    cout << " Collection : " ;
    for(auto it = begin(vi); it!= end(vi); ++it){
        cout << *it  << " ";
    }
  
   
    return 0;
}