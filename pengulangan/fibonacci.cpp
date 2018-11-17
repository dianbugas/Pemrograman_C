#include <iostream>
using namespace std;
int main()
{
    //PROGRAM FIBONACCI
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout <<"Program deret fibonacci"<<endl;
    cout <<"masukan yang mau di input :";
    cin>> n;
    f_n1 = 1;
    f_n2 = 0;
    cout << f_n2 << " "; //hapus jk mau dari 0
    cout << f_n1 << " "; //hapus jika mau dari 1
    for(int i = 1; i < n; i++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
    }
    cout<<" ";
}
