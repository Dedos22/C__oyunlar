#include<iostream>
#include<string>
using namespace std;
int main(){
	int adet;
	string yemek,icecek, renk, icecekim="ayran", renkim="mor", yemegim="karnibahar";
cout << "en sevgiði yemek=";
getline(cin,yemek);
cout << boolalpha;  // print bool as true/false
cout << (yemek == yemegim) << endl;

cout << "en sevgiði icecek=";
getline(cin,icecek);
cout << boolalpha;  // print bool as true/false
cout << (icecek == icecekim) << endl;

cout << "en sevgiði renk=";
getline(cin,renk);
cout << boolalpha;  // print bool as true/false
cout << (renk== renkim) << endl;

return 0;
}
