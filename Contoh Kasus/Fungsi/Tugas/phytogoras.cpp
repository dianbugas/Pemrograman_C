#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b, c;
    cout<<"masukkan bilangan pertama : "; cin>>a;
    cout<<"masukkan bilangan kedua : "; cin>>b;
    cout<<"masukkan bilangan ketiga : "; cin>>c;
    if(a>b && a>c){
        if(sqrt(pow(b,2)+pow(c,2))==a){
            cout<<"ketiga bilangan termasuk pitagoras";
        }else{
            cout<<"bukan bilangan pitagoras";
        }
    }else if(b>a && b>c){
        if(sqrt(pow(a,2)+pow(c,2))==b){
            cout<<"ketiga bilangan termasuk pitagoras";
        }else{
            cout<<"bukan bilanga pitagoras";
        }

    }else{
        if(sqrt(pow(a,2)+pow(c,2))==c){
            cout<<"ketiga bilangan termasuk pitagoras";
        }else{
            cout<<"bukan bilangan pitagoras";
        }
    }
}
