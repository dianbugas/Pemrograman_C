#include <iostream>
using namespace std;
int main(){
    int a,b,t,*p,*q,*r;
    a=25; b=12;
    p=&a; q=&b;
    r=&t;
    *r=*p+*q;
    cout<<*r;
}
