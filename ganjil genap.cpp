#include <iostream>
using namespace std;

int main(){
	int angka;//Tipe datanya ANGKA maka menggunakan tipe data <int>
	cout<<"masukkan angka: "; cin>>angka;//<Cout> menampilkan output, <Cin> menampung inputan user
	(angka % 2 == 0) ? (cout<<"Bilangan Genap") : (cout<<"Bilangan Ganjil") ;
	//// angka bisa dibagi 2 maka 0 berarti bilangan genap, jika bukan bilangan ganjil
}
