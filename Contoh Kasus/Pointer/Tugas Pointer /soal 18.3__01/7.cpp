#include <iostream>
using namespace std;
int main(){
    int i, *p;
    int a[5]={15,12,25,17,10};
    p=a;
    i=0;
    while(i<=4){
        cout<<*p<<endl;
        p=p+1;
        i=i+2;
    }
}
