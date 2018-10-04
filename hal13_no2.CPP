#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main(){
int i,n,ta=0,x,xi2=0;
float rerata,sd,r;
cout<<"Masukkan jumlah data = "; cin>>n;
int a[n];
	for(i=1;i<=n;i++){
	cout<<"Masukkan data ke-"<<i<<" = ";cin>>a[n];
   ta=ta+a[n];
   xi2=xi2+pow(a[n],2);
   }
rerata=ta/n;
x=pow(ta,2);
r=(n*xi2-x)/(n*(n-1));
sd=sqrt(r);
cout<<endl;
cout<<"Rata-rata = "<<rerata<<endl;
cout<<"Varian = "<<r<<endl;
cout<<"Standar deviasi = "<<sd;

getch();
}