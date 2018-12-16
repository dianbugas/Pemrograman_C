#include <iostream>
using namespace std;

int main(){
    string day;
    string hari[] = {"minggu","senin","selasa","rabu","kamis","jum'at","sabtu"};
    cout<<"masukan hari ini, maka akan menampilkan hari kemain :  ";
    cin>>day;
    if(day==hari[8]){
        cout<<hari[6];
    }
    for(int i=1; i<7; i++){
        if(day==hari[i]){
            cout<<hari[i+1];
        }
    }

}
