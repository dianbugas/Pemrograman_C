#include<iostream>
using namespace std;

int main()
{
 int bil1=0,bil2=0,bil3=0;
 cout<<"              Latihan Perulangan C++ dengan Do-While          "<<endl;
 cout<<"=============================================================="<<endl;
 cout<<"1.Menampilkan deret angka 1 sampai 10                      :  ";
 do
 {
   cout<<bil1;
   bil1++;
 }while(bil1<=10);
 cout<<endl;
 cout<<"2.Menampilkan deret bilangan genap dari angka 1 sampai 10  :  ";
 do
 {
   bil2=bil2+2;
   cout<<bil2;
   bil1++;
 }while(bil2<10);
 cout<<endl;
 cout<<"3.Menampilkan deret bilangan ganjil dari angka 1 sampai 10 :  ";
 do
 {
   bil3=bil3+1;
   cout<<bil3;
   bil3++;
 }while(bil3<10);
 }

