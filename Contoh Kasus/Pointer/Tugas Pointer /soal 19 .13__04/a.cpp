#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int i,j;
    int array1[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    for(i=0; i<3; i++ ){
        for(j=0; j<6; j++){
            cout<<array1[j][i]<<" ";
        }
        cout<<endl;
    }
}

