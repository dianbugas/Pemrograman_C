#include <iostream>
using namespace std;
int main(){
    int i, *p;
    int a[5]={15,12,25,17,10};
    p=a;
    i=1;
    while(i<=3){
        cout<<*p<<endl;
        p=p+2;
        i=i+1;
    }
}
