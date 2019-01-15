#include <iostream>
using namespace std;
int main(){
    string alamat[3][3]={{"Florence", "735-1234", "Manila"},{"Joyce", "983-3333", "Quezon City"},{"Becca", "456-3322", "Manila"}};

    int i=0;
do{
cout<<"name    :"<<alamat[i][0]<<endl;
cout<<"Telp    :"<<alamat[i][1]<<endl;
cout<<"Address :"<<alamat[i][2]<<endl;
cout<<" "<<endl;
i++;
}
while (i<3);
}

