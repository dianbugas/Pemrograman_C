#include <iostream>
using namespace std;
int proses(int a);
int main(){
    int i,a;
    a=15;
    for(i=1; i<=3; i++){
        a =proses(a);
        cout<<a<<endl;
    }
}
int proses(int a){
    a=a*2;
    return(a);
}
