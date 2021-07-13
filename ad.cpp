#include<string>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
int main(){
    string kelime;
    
	char harf;
	int hak=0 , i=0, boyut=0;
	int lenght();
	cout << "kelime giriniz";
	cin >> kelime;
	system("cls");
	boyut=kelime.lenght();
	cout << boyut;
	int kelime[boyut];
	cout << "harf giriniz" ;
	cin >> harf;
	for(i=0;i<=boyut-1;i++){
	 if(kelime[i]==harf){
	 	cout << "harf bulunmakta";
	 	hak++;
	 	kelime[i]=harf;
	 }  
	
    }
   return 0;
}
