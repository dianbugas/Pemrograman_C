#include<iostream>
using namespace std;

int kalimat(const char*s){

int x = 0;
for (;*s!='\0';s++)
++x;
return x;
}
int main(){
char String;
cout<<"  Inputlah Sebuah Kata      : ";
cin>>String;
cout<<"  Jumlah Karakternya Adalah : "<<kalimat(String)<<" Huruf "<<endl;
}
