#include <iostream>
#include <string>
using namespace std;
struct matkul {
    int makdas;
    int makdis;
    int mtk;
};

struct siswa{
        string nama;
        string alamat;
        int sks;
        char umur;
        matkul hari;
    };

int main()
{
    siswa smp;
    smp.nama = "dian";
    smp.alamat = "depok";
    smp.sks = 3;
    smp.umur = 20;
    smp.hari.makdas = 20;
    smp.hari.mtk = 40;

    cout<<smp.nama<<endl;
    cout<<smp.hari.mtk;
}
