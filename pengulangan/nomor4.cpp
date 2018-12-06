#include<iostream>
using namespace std;

int main()
{
int i,a,total;
int n = 5;
a=1;
cout<<a;
total=a;
for(i=1;i<=n-1;i++)
{
a=a+2;
total=total+a;
cout<<"+"<<a;
}
cout<<" ="<<total;

}
