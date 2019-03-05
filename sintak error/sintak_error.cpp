#include <iostream>
using namespace std;
//sintak error
//liking error
//non-error
//run time error
int pembagian(int &num, int &denum){
    if(denum == 0){
        throw "error pembagian nol";
    }
    return num/denum;
}

int main()
{
    int a,b,c;
    while(true){
        cout<<"Input nilai num : ";
        cin>>a;
        cout<<"Input nilai denum : ";
        cin>>b;
        try{
            c=pembagian(a,b);
            cout<<c<<endl;
            //}catch{exception &e{
        }catch(const char*e){
            cout<<e<<endl;
        }
    }
    cout<<"akhir dari program"<<endl;
}
