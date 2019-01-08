#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int i,j;
    string array1[3][5]={{"a","b","c","d","e"},{"f","g","h","i","j"},{"k","l","m","n","o"}};
    for(j=0; j<5; j++){
        for(i=0; i<=3; i++){
            cout<<array1[j][i]<<" ";
        }
        cout<<endl;
    }
}
