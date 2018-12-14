#include <iostream>
using namespace std;

struct {
    int jam;
    int menit;
    int detik;
} m, k, s;
//mendefiniskan struktur waktu
int selisih_jam(){
    s.jam = k.jam - m.jam;
}

int selisih_menit(){
    s.menit = k.menit - m.menit;
}

int selisih_detik(){
        s.detik = k.detik - m.detik;
    }

int main()
{
//memasukan data jam pertama
cout <<"Masuk kan waktu pertama" <<endl;
cout <<" Jam : "; cin >>m.jam;
cout <<" Menit : "; cin >>m.menit;
cout <<" Detik : "; cin >>m.detik;

cout <<endl <<endl;

//memasukan data jam kedua
cout <<"masukan waktu ke dua" <<endl;
cout <<" Jam : "; cin >>k.jam;
cout <<" Menit : "; cin >>k.menit;
cout <<" Detik : "; cin >>k.detik;

cout<<endl<<endl;

cout <<"Durasi antara waktu pertama dan kedua"<<endl;
cout <<" Jam : " << selisih_jam() <<endl;
cout <<" Menit : " << selisih_menit() <<endl;
cout <<" Detik : " << selisih_detik() <<endl;

cout<<endl;
cout<<"Durasi Dua Buah Waktu dengan format hh:mm:yy : "<<selisih_jam()<<":"<<selisih_menit()<<":"<<selisih_detik()<<endl;
return 0;
}
