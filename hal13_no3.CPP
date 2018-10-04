#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
char word[20];
int a,b,c;
cout<<"Masukan Kata : "; cin>>word;
cout<<endl;
c=strlen(word);
for(a=c;a>=0;a--){
	for(b=0;b<a;b++){
   	cout<<word[b];
      }
   cout<<endl;
   }
getch();
}