#include <iostream>
using namespace std;

int fungsi (int a, int b)
{
    return a*b;
}

int main()
{
    int a,b, hasil;
    cout<<"input a : ";
    cin>>a;
    cout<<"input b : ";
    cin>>b;

    hasil = fungsi(a,b);
    cout<<hasil;



}
