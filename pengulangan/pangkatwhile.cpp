#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int j;
    int bil[100];
    while(i<4){
        j=i+ 1;
        bil[i] = j * j;

         cout <<"Pangkat dari " <<j<< "=" <<bil[i]<<endl;
          i++;
    }
     cout<<endl;
    return 0;
}
