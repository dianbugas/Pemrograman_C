#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int i,j;
    string array1[3][5]={{"a","b","c","d","e"},{"f","g","h","i","j"},{"k","l","m","n","o"}};
     for(i=0;i<5;i++){
          for(j=0;j<3;j++){
               cout<<array1[j][i]<<" ";
        }
        cout<<endl;
    }
}
