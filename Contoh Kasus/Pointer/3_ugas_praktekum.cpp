#include <iostream>
using namespace std;
int main(){
   int aziz, dafa, dewi, *p;
   p = &aziz;
   cout<<"aziz = "; cin>>aziz;
   cout<<"dafa = aziz"<<endl;
   cout<<"dewi = aziz + 3"<<endl;

   cout<<""<<endl;
   cout<<"a. Berapakah nilai defa ? " <<endl;
   cout<<"  Nilai Defa = "<<aziz<<endl;
   cout<<"b. Berapakah nilai Dewi ? " <<endl;
   cout<<"  Nilai Dewi = "<<aziz + 3<<endl;

   cout<<""<<endl;
   cout<<"aziz = "<<aziz<<endl;
   cout<<"defa = *aziz"<<endl;
   cout<<"dewi = *aziz + 3"<<endl;

   cout<<""<<endl;
   cout<<"a. Berapakah nilai defa ?"<<endl;
   cout<<" Nilai Defa = "<<*p<<endl;
   cout<<"b. Berapakah nilai dewi ?"<<endl;
   cout<<" Nilai dewi = "<<*p +3<<endl;
}

