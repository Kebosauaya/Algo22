#include <iostream>
using namespace std;

int main(){
	float uts,uas,nilai;
	
	cout <<"Masukkan nilai UTS anda: ";cin>>uts;
	cout <<"Masukkan nilai UAS anda: ";cin>>uas;
	nilai = (uts+uas)/2;
	(nilai >= 60) ? (cout<<"Anda dinyatakan LULUS") : (cout<<"Anda dinyatakan TIDAK LULUS");
		
	return 0; 		
}

