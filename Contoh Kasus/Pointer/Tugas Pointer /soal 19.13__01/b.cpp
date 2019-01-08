#include <iostream>
using namespace std;
int proses(int x, int y);
int main(){
    int a,b,x,y,t;
    a=5;
    b=2;
    x=25;
    y=12;
    t=0;
    t = proses(a,b);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<t<<endl;
}
int proses(int x,int y){
    int t;
    t=x+y;
    return t;
}
