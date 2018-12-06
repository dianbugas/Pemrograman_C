#include <iostream>
using namespace std;
int main(){
    int i,j;
    int bil[100];
    for(i=1; i<4; i++){
        j=i+ 1;
        bil[i] = j * j;
        cout <<"Pangkat dari " <<j<< "=" <<bil[i]<<endl;
    }
    cout<<endl;
    return 0;

}



