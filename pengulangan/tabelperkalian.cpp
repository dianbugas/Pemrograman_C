#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    cout <<"-------------------------------------------------------------";
        for(int o=1; o<=10; o++)
    {
    cout <<"\n|";
        for (int u=1; u<=10; u++)
    cout << setw(3)<< o*u << setw(3) << "|";
    cout<<"\n-------------------------------------------------------------";
     }
}
