#include <iostream>
using namespace std;
int main(){
    int a[7]={12,20,35,41,45,56,66};
    int Nmax, Nmin, Median;
    for(int i=0; i<7; i++){
        if(a[0]<a[i]){
            Nmin=a[0];
        }if(a[6]>a[i]){
            Nmax=a[6];
        }if(7/2+1==4){
            Median=a[3];
        }
    }
    cout<<"Nilai Maksimum : "<<Nmax<<endl;
    cout<<"Nilai Minimal : "<<Nmin<<endl;
    cout<<"Nilai Median : "<<Median<<endl;
}
