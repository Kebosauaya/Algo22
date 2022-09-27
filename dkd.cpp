#include <iostream>
using namespace std;

int main(){
	int j, h, lama, ttl, hs;
	string nama, km;
	char sarapan;
		cout<<"Hotel bahagia"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"1. VVIP (1000000)"<<endl;
		cout<<"2. VIP (750000)"<<endl;
		cout<<"3. Standart (500000)"<<endl;
		cout<<"4. Melati (250000)"<<endl;
		cout<<"------------------------------------"<<endl;
		cout<<"Masukan Nama Anda: ";cin>>nama;
	 	cout<<"Masukan Jenis Kamar(1-4): ";cin>>j;
	 	cout<<"Lama menginap: ";cin>>lama;
	 	cout<<"Dengan sarapan (y/n) 50rb/hari: ";cin>>sarapan;
	 	
	switch(j){
		case 1: km="vvip";h=1000000;break;
		case 2: km="vip";h=750000;break;
		case 3: km="standart";h=500000;break;
		case 4: km="melati";h=250000;break;
	}
	
	cout<<"--------------------------------------"<<endl;
	cout<<"Terima Kasih "<<nama<<endl;
	cout<<"kamar anda "<<km<<endl;
	if (sarapan =='y'|| sarapan == 'Y'){
		hs = lama * 50000;
			cout<<"Lama Menginap "<<lama<<" Malam Dengan Sarapan"<<endl;
	} else {hs = 0;
			cout<<"Lama Menginap "<<lama<<" Malam Tanpa Sarapan
			"<<endl;
	}
	
	ttl =(lama * h) + (hs); 
	cout<<"total bayar: "<<ttl<<endl;
	return 0;
}
