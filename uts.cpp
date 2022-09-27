#include <iostream>
using namespace std;

int main(){
	int nilai, tugas, uts, uas;
	string nama, predikat;
	char huruf;

	cout<<"Masukan Nama Anda : "; cin>>nama;
	cout<<"Nilai Tugas       : "; cin>>tugas;
	cout<<"Nilai UTS         : "; cin>>uts;
	cout<<"Nilai UAS         : "; cin>>uas;
	nilai = (tugas + uts + uas)/3;
	cout<<"----------------------------------"<<endl;
	cout<<"Selamat "<<nama<<endl;
	cout<<"Nilai Anda        : "<<nilai<<endl;
	
	switch (nilai) {
	case 0 ... 20: cout<<"Nilai Huruf E"<<endl;
		cout<<"Predikat : Kurang"; 
		break;
	case 21 ... 40: cout<<"Nilai Huruf D"<<endl;
		cout<<"Predikat : Cukup"; 
		break;
	case 41 ... 60: cout<<"Nilai huruf C"<<endl;
		cout<<"Predikat : Sangat Cukup";
		break;
	case 61 ... 80: cout<<"Nilai huruf B"<<endl;
		cout<<"Predikat : Baik ";
		break;
	case 81 ... 100: cout<<"Nilai huruf A"<<endl;
		cout<<"Predikat :  Sangat Baik ";
		break;
		}
		

	return 0;	
}  
