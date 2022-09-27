#include <iostream>
using namespace std;

#define garis "-----------------------"

int main(){

	int jb;
	long hb, total;
	string np,nb;

 	cout<<"Masukan nama pelanggan :"; cin>>np;
	cout<<"Masukan nama Barang :"; cin>>nb;
	cout<<"Masukan harga barang :"; cin>>hb;
	cout<<"Masukan jumlah barang :"; cin>>jb;
	
	cout<<"Barang yang anda beli adalah "<<nb<<endl;
	cout<<"Dengan harga :"<<hb<<endl;
	total = hb * jb;
	cout<<"Total Bayar :"<<total<<endl;
	(total > 500000) ? (cout<<"bonus: payung")<<endl:
		(cout<<"bonus: terima kasih"<<endl);
	
	return 0;
}
