#include<iostream>
using namespace std;

int main()
{
int i,s;
char nama[5][20];
float nilai1[5];
float nilai2[5];
float total[5];
float rata[5];

cout<<"Masukkan jumlah siswa: ";
cin>>s;
for(i=1;i<=s;i++)
{
cout<<"Data Ke - "<<i<<endl;
cout<<"Nama Siswa : "; cin>>nama[i];
cout<<"Nilai 1 : "; cin>>nilai1[i];
cout<<"Nilai 2 : "; cin>>nilai2[i];
total[i] = nilai1[i]+nilai2[i];
rata[i] = total[i] / 2;
cout<<endl;
}
cout<<"------------------------------------------------------------------"<<endl;
cout<<"No. | Nama               | Nilai 1 | Nilai 2 | total | rata-rata"<<endl;
cout<<"------------------------------------------------------------------"<<endl;

for(i=1;i<=s;i++)
{
cout<<i<<"   | ";
cout<<nama[i]<<"          | ";
cout<<" "<<nilai1[i]<<"     | ";
cout<<" "<<nilai2[i]<<"     | ";
cout<<" "<<total[i]<<"     | ";
cout<<" "<<rata[i]<<endl;
}

cout<<"-------------------------------------------------------------------------";
cout<<"-------"<<endl;

}
