#include<iostream>
using namespace std;

int main(){
	for ( int bil = 10 ; bil < 30 ; bil ++){
		if(bil % 2 == 0){
			continue;
		}else if (bil == 21 || bil == 27){
			continue;
		}
		cout<<bil<<" ";
	}
}
