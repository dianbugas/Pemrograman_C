#include <iostream>
using namespace std;
int main(){
    string bulan[] = {"Januari","Februari","Maret","April","Mai","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    string *tampil;  //pointer tampil
    tampil = bulan;
    for(int b=0; b<12; b++){
        cout<<*(tampil+b)<<endl;
    }

}
