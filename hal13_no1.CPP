#include <iostream>
#include <conio.h>

using namespace std;

main(){
int a,b;
float rerata,ta;
cout<<"Masukkan jumlah angka yang akan dirata-rata kan = ";cin>>b;
int c[b];
for(a=0;a<b;a++){
	cout<<"Masukkan angka indeks ke-"<<1+a<<" = ";cin>>c[b];
   ta=ta+c[b];
   }
   cout<<endl;
   rerata=ta/b;
   cout<<"Rata-rata dari angka-angka tersebut diatas = "<<rerata;
getch();
}
