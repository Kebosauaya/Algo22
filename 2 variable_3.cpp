#include <iostream>
using namespace std;

int main(){
	system ("cls");
	int nilai;
	string nama, prodi;
	char lagi;
	atas:
	cout<<"Masukan Nama Anda : ";cin>>nama;
	cout<<"Masukan Prodi Anda : ";cin>>prodi;
	cout<<"Masukan Nilai Kegantengan : ";cin>>nilai;
	
	if (nilai > 100){
		cout<<"BUKAN MANUSIA WAK"<<endl;
	}
	else if (nilai < 1){
		cout<<"ALIENNNNNNN"<<endl;
	}
	else if (nilai <= 100 && nilai > 1){
		cout<<"GANTENG KALI WAK"<<endl;
	}
	cout<<"Apakah mau mengulangi (y/n) : ";cin>>lagi;
	
	if (lagi == 'y'){
		goto atas;
	}
	else (lagi == 'n');{
		cout<<"Terima kasih";
	}
	
	
} 

//int main(){
//	string nama;
//	int suhu, fahrenheit;
//	
//	cout<<"MENGUBAH SUHU TUBUH ANDA (CELSIUS KE FAHRENHEIT)"<<endl;
//	cout<<"================================================="<<endl;
//	
//	cout<<"Masukkan nama anda : ";cin>>nama;
//	cout<<"Masukkan suhu tubuh anda saat ini (fahrenheit) : ";cin>>suhu;
//	(fahrenheit = suhu * 1.8 ); 5/9;
//	cout<<"Suhu daerah "<< nama << " suhu anda saat ini ";
//	cout<<fahrenheit;
//	cout<<" derajat dalam celcius";
//	return 0;
//}

//int main(){
//string nama;
//	cout<<"Masukkan nama anda : ";cin>>nama;
//	cout<<"Hello "<< nama;
//}
