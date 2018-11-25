#include <iostream>
using namespace std;
int main()
{
    cout<<"loop 1 \n";
    for(int i = 1; i<=10; i++){
        cout<< i <<endl;
    }
    cout<<"\n loop 2 \n";
    for(int i = 1; i <= 10; i += 2){
        cout<<i<<endl;
    }
    cout<<"loop 3";
    for(int i = 0; i >= -10; i--){
        cout<<i<<endl;
    }
    int total = 0;
    cout<<"loop 4";
    for(int i = 1; i <= 10; i++, total += i){
        cout<<i<< "||" <<total<<endl;
    }
    int ttl = 0;
    cout<<"loop 5";
    for(int i = 1; i <= 10; ttl += i,i++){
        cout<<i<< "||" <<ttl<<endl;
    }
}
