#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int a,b;
    char d [50];
    cout<<"masukkan kalimat :";
    cin>>d;
    cout<<"hasilnya adalah  ";
    b=strlen(d);
    for(a=b-1; a>=0; a--){
        cout<<d[a];
    }
}

