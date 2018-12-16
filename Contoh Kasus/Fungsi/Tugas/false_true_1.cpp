#include <iostream>
using namespace std;
    int awal(int);
    int hasil;
    int main(){
        int x;
        cin>>x;
        cout<<awal(x);

        if(x%2==0){
            cout<<"genap";
            }else{
                cout<<"ganjil";
            }
    }
    int awal(int x){
    hasil=x*2;
    return hasil;
    }

