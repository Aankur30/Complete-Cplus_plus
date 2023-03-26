#include<iostream>
#include<string_view>
using namespace std;
class dog{
public:
dog()=default;
dog(string_view name,string_view breed,int p_age);
~dog(){
    delete  p_age;
    cout<<"the name of the dog is "<<name<<endl;
}
private:
string name;
string breed;
int *p_age{nullptr};

};
void some_func(){
dog d2{"tommy","pamalian",22};
}
dog::dog(string_view para_name,string_view para_breed,int para_p_age){
    name=para_name;
    breed=para_breed;
    p_age=new int;
    *p_age=para_p_age;
}
int main()
{
    some_func();
dog d1{"fluppy","Shephard",23};//this will be executed at the last when the main function is about to terminate
cout<<"first object destructor is called"<<endl;
some_func();
return 0;
}
//destructor will be called when the main function will finish its task 