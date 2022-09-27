#include <iostream>
using namespace std;

int main(){
	float uts, uas, nilai;

	cout<<"Masukan Nilai UTS = "; cin>>uts;
	cout<<"Masukan Nilai UAS = "; cin>>uas;
	nilai = (uts + uas)/2;
	(nilai > 60 ) ? (cout<<"Selamat Anda Dinyatakan Lulus") : (cout<<"Maaf Anda Dinyatakan Tidak Lulus");

	return 0;
}
