#include <iostream>
using namespace std;
int main(){
    int b,jumlah;
    int a = 333;
    jumlah=0;
    cout<<"Jumlah Perulangan : ";

    for(b=3;b<=a*3;b=b+3){
    jumlah=jumlah+b;
    cout<<b<<" ";}
    cout<<endl;
    cout<<"Jumlah total = "<<jumlah;
    return 0;

}
