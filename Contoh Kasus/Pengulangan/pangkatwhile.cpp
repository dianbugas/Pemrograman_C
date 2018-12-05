#include<iostream>
#include<cmath>
int main(){
int x,y,i;
int pangkat;
cout<<"Masukan bilangan :";
cin>>x;
cout<<"Pangkat berapa:";
cin>>y;
pangkat=1;
for(i=1;i<=y;i++)
pangkat=pangkat*x;
cout<<"Pangkat:"<<pangkat<<endl;

}
