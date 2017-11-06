#include <iostream>
using namespace std;

int main(){
	int panjang,lebar,luas, tinggi,alas ;
	char z;
	
	cin >> z ;
		if (z == 'p'){
			cout << "input panjang : " ; 
			cin >> panjang;
			cout << "input lebar : "; 
			cin >> lebar ;
			luas = panjang * lebar ;
			cout << luas ;
			
}
	else if (z == 's'){
		 
			cout << "input alas : " ; cin >> alas ;
			cout << "input tinggi : " ; cin >> tinggi;
			luas = 0.5 * alas * tinggi ;
			cout << luas;
		}		
}
