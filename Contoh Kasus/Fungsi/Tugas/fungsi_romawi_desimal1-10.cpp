#include <iostream>
using namespace std;
int main(){
    int bil;
    int des[] = {1,2,3,4,5,6,7,8,9,10};
    string romawi[] = {"i","ii","iii","iv","v","vi","vii","viii","ix","x"};
    cout<<"masukkan bilangan bulat 1-10 : ";
    cin>>bil;
        for(int i=0; i<10; i++){
            if(bil==des[i]){
                cout<<"bilangan romawinya adalah : "<<romawi[i];
            }
        }
}
