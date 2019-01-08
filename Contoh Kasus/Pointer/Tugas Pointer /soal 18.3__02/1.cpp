#include <iostream>
using namespace std;
int main(){
    int a[3][5]={{15,12,25,17,10},{21,30,32,23,35},{16,8,7,40,11}};
    int i, *p;
    p=&a[0][0];
    i=1;
    while(i<=15){
        cout<<*p<<" ";
        p++;
        i++;
    }
}
