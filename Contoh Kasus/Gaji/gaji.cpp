#include <iostream>
using namespace std;
int main()
{
    int jjk; //jumlah jam kerja
    int kekurangan;
    float upah;
     cout<<"------------------------------"<<endl;
    cout<<"Maukkan jumlah jam perminggu  :";
    cin>>jjk;
    if(jjk==40){
        upah=40*1000;
    }else if(jjk>40){
        upah=40*2000;
    }else if(jjk<=40){
        kekurangan=jjk-40;
        upah=(jjk*1000)-(kekurangan*500);
    }
        cout<<"upah perminggu  :"<<upah<<endl;
        cout<<"------------------------------";
}
