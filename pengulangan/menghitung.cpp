#include <iostream>
using namespace std;
int main()
{
    cout <<"pola 1"<<endl;
    cout <<endl;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; j++){
            cout <<j;
        }
        cout << endl;
    }
    cout <<"pola 1"<<endl;
    cout <<endl;
    for(int i = 1; i <= 10; i++){
        for(int j = i; j >= 1; j--){
            cout <<j;
        }
        cout << endl;
    }
}
