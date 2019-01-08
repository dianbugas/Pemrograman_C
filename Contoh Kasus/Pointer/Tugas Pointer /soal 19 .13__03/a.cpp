#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int i,j;
    string array1[3][5]={{"a","b","c","d","e"},{"f","g","h","i","j"},{"k","l","m","n","o"}};
    for(i=0; i<3; i++ ){
        for(j=0; j<5; j++){
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
}
