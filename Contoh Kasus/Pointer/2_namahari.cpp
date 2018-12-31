#include <iostream>
using namespace std;
int main(){
    #include <iostream>
using namespace std;
int main(){
    string hari[]={"senin","selasa","rabu","kamis","jum'at","sabtu","minggu"};
    int angka;
    string *p;
    p=hari;
    cout<<"input hari 1-7 : ";
    cin>>angka;
    for(int i=0; i<=0; i++){
        if(angka<=7){
            cout<<"hari ke-"<<angka<<"  adalah hari "<<p[angka-1]<<endl;
        }else{
            cout<<"hari ke-"<<angka<<"  kode hari salah";
        }
    }
}

}
