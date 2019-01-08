#include <iostream>
using namespace std;
int main(){
    int i, *p;
    int a[5]={15,12,25,17,10};
    p=a;
    p=p+2;
    cout<<*p;
}
