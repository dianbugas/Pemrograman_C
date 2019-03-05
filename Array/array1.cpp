#include <iostream>
using namespace std;
int main(){
    string produk[]={"aqua","vit","lemineral","ades","clib"};
    int jumlah[]={10,10,10,10,10};
    int harga[]={1000,3000,2500,2000,1500};
    for(int i=0; i<5; i++){
        cout<<"Produk :"<<produk[i]<<endl;
        cout<<"Jumlah :"<<jumlah[i]<<endl;
        cout<<"Harga  :"<<harga[i]<<endl;
        cout<<endl;
    }

}
