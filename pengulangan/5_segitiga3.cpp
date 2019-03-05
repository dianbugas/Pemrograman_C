#include <iostream>
using namespace std;
int main(){
    int i,j,k,l;
    int n = 3;
for(i = 0; i <= n; i++){
        for(j = i; j <= n; j++)
            cout << " ";

        for(k = 1; k <= i; k++)
            cout<<"*";

        for(l = 0; l < k; l++)
            cout<<"*";
            cout << endl;
    }
}
