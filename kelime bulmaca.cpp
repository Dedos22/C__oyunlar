#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    char kelime[4];
	char harf;
	int hak=0 , i, ;
	
	for(i=0;i<='\0';i++){
	cout<< "kelimenin" << i << ". harfini giriniz";
	cin >> kelime[i];
	
    }
    for(i=0;i<'\0';i++){
	      cout << kelime[i];
    }
	system("cls");
	
/*	if(hak<=8){
	cout << "tahmini harf giriniz";
	cin >> harf;
	for(i=0;i!='/0';i++){
		if(kelime[i]=harf){
		  cout << "harfiniz var";
	    kelime[i]=harf;
	    hak++;
	    cout << 8- hak << "tane tahmin hakkiniz kaldi";
		}
		else{
			cout << "harf tahmininiz kelimede bulunmamaktadiir.";
			hak++;
		    cout << 8- hak << "tane tahmin hakkiniz kaldi";	
		}
	}
	
}
else{
	cout << "hakkiniz tukendi";
	cout << "kelimeniz" << endl;
		for(i=0;i<'\0';i++){
	      cout << kelime[i];
	     }
}
	*/


return 0;
}

