#include<iostream>
using namespace std;

int main(){
	int opsi;
	double c;
	double f;
	string pilihan;

	cout<<"SELAMAT DATANG DI KALKULATOR FAHRENHEIT\n";
	cout<<"By : mak loh\n";
	cout<<"==============================================\n"
	

	opsi_pilihan :
	cout<<"Berikut ini adalah pilihlah opsi perubahan yang sudah disediakan : \n";
	cout<<"1. Fahrenheit => celcius\n";
	cout<<"2. Celcius => Fahrenheit\n";
	cout<<"Silahkan pilih opsi yang sudah disediakan (1-2) : ";cin>>opsi;
	
	switch (opsi);
	{
		case 1 :
		cout<<"Input nilai Fahrenheit : "; cin>>f;
		c=(f-32)*5/9;
		cout<<"Nilai celcius anda adalah ";<<c<<"'f'";
		break;
	
		case 2 : 
		cout<<"Input nilai Celcius :"; cin>>c;
		f=(9/5 * c)+32;
		cout<<"Nilai fahrenheit anda adalah ";<<f<<"'f'"
		break;
	}
}
