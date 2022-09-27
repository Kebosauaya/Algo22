#include <iostream>
using namespace std;

int main(){
	string nama;
	cout<<"Masukan Nama Anda = "<<endl;
	getline (cin,nama); // pakai getline bisa menampung banyak kata
	cout<<"selamat "<<nama<<", anda keren";
	
	return 0;		
}
