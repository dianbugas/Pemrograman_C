#include <iostream>
using namespace std;
int proses(int a, int b);
int main(){
    int a,b,t;
    a=5;
    b=2;
    t=0;
    t =  proses(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<t<<endl;
}

int proses(int a, int b)
{
    int t;
    a=a*2;
    b=b*2;
    t=a+b;
    return t;
}
