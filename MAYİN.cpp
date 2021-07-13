#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(){
	int satir=0, sutun=0, i=0, j=0, toprak=0;
	cout << "satir=";
	cin >> satir;
	cout << "sutun=";
	cin >>sutun;
	srand(time(NULL));
	int tarla[satir][sutun];
	int t[satir][sutun];
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			tarla[i][j]=rand()%2;
			t[i][j]=8;
			if(tarla[i][j]==0){ //mayin olmayan toprak sayisi
				toprak++;
			}
		}
	}
	/*
	cout << "mayin tarlamizzz"<< endl;
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			cout<< tarla[i][j];
		}
		cout << endl;
	}
	*/
  
    while(true){
	
    for(i=0;i<satir;i++){         //tekrar mayin tarlasını yazdırma her seferinde
    	for(j=0;j<sutun;j++){
    	cout << t[i][j];
		}
		cout << endl;
	}
	cout << "acmak istediginiz indeksler=";
	cin >> i >> j;
	if(i>=0 and i<=satir and j>=0 and j<= sutun){
	    if(t[i][j]==8 and tarla[i][j]==0){
	   	  cout << "mayina basmadiniz.temiz toprak. tebrikler"<< endl;
	   	  toprak--;
	   	  t[i][j]=tarla[i][j];
	   	  
	    	if(toprak==0){
	   			cout << "tüm mayini buldunuz.tebrikler";
	   			return 0;
	   		 }
	   }
	  		 else if(t[i][j]==8 and tarla[i][j]==1){
	   		 cout << "mayina bastiniz.";
	   		 
	   		 return 0;
	   		}
	   		else{
	   		cout << "acılmis bir yer burası";
	  		 }
	
		
	
	  		 
    }
    else{
    	cout << "gecersiz indeks girdiniz"<< endl;
	}
}
return 0;
}

