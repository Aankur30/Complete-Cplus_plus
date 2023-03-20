#include<iostream>
#include<ctime>
using namespace std;
int main()

{   //-----------------------------SEEDING------------------------------------------
    srand(time(0));//seeding to get different output everytime we run random function
    char h1[]{"hi1"};
    char h2[]{"hi2"};
    char h3[]{"hi3"};
    char h4[]{"hi4"};
    char h5[]{"hi5"};
    char h6[]{"hi6"};
    char h7[]{"hi7"};
    char h8[]{"hi8"};
    char h9[]{"hi9"};
    char h10[]{"hi10"};
    bool end{false};
    const int length{15};
    char name[length];
    cout<<"what's your name dear : "<<endl;
    cin.getline(name,length);
    while (!end)
    {
        cout<<" Oh dear "<<name<< " I see you!!!"<<endl;
        size_t num=(rand()%11);
        switch(num)
        {
            case 0:
            cout<<h1<<endl;
            break;
            case 1:
            cout<<h2<<endl;
            break;
            case 2:
            cout<<h3<<endl;
            break;
            case 3:
            cout<<h4<<endl;
            break;
            case 4:
            cout<<h5<<endl;
            break;
            case 5:
            cout<<h6<<endl;
            break;
            case 6:
            cout<<h7<<endl;
            break;
            case 7:
            cout<<h8<<endl;
            break;
            case 8:
            cout<<h9<<endl;
            break;
            case 9:
            cout<<h1<<endl;
            break;
            case 10:
            cout<<h10<<endl;
            break;
            default :
            cout<<"hmmm Nthing more to tell here"<<endl;
            break;
        }
        cout<<"do you want to try again ? (Y|N)"<<endl;
        char go;
        cin>>go;
        end=((go=='y')||(go=='Y'))?false :true;
    }
    cout<<"that's all I have for you today dear.BEST WISHES"<<endl;
    cout<<"Take care "<<name<<endl;
    return 0;
}