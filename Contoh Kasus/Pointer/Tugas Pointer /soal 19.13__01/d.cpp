#include <iostream>
#include <stdio.h>
using namespace std;
void cetak (int *q);
int main()
{
    int a[10] = {12,7,5,15,17,10,14,25,8,11};
    int *p;
    p=a;
    cetak(p);
}
void cetak(int *q){
    int i;
    for(i=1; i<=10; i+=2){
        cout<<*q<<endl;
    }
    q++;
}


