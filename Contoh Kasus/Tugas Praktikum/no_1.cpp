#include<iostream>
using namespace std;
int main()
{
    int maks;
    int x=1, y;
    int faktor;
    cout<<"masukkan bilangan prima  : ";
    cin>>maks;
    int n=1;
    while(n<=maks)
    {
        faktor=0;
        for(y=x; y>=1; y--)
        {
            if(x%y==0)
            {
                faktor++;
            }
        }
        if(faktor==2)
        {
            cout<<x<<" ";
            n++;
        }
        x++;
    }

}
