#include <iostream>
using namespace std;
 int main(){
 	char huruf;

 	cout<<"Masukan huruf: "; cin>>huruf;
 		switch (huruf){
 			case 'a': cout<<"A"; break;
 			case 'b': cout<<"B"; break;
 			case 'c': cout<<"C"; break;
 			case 'd': cout<<"D"; break;
 			case 'e': cout<<"E"; break;
 			default: cout<<"bukan A, B, C, D, atau E";
 		}
 }
