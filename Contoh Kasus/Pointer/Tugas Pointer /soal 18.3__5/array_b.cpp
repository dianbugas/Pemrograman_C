#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string array1[5][5]={{"a","b","c","d","e"},{"f","g","h","i","j"},{"k","l","m","n","o"},{"p","q","r","s","t"},{"u","v","w","x","y"}};
    int i,j;
        for(i=0;i<5;i++){
          for(j=4;j>=i;j--){
               cout<<array1[j][i]<<" ";
          }
          cout<<endl;
     }
}


#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int i,j;
    string array1[3][5]={{"a","b","c","d","e"},{"f","g","h","i","j"},{"k","l","m","n","o"}};
    for(j=0; j<=5; j++){
        for(i=j; i<3; i++){
            cout<<array1[j][i]<<" ";
        }
        cout<<endl;
    }
}


