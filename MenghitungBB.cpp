#include <iostream>
using namespace std ;
 int main(){
 	
 	int berat,tinggi ;
 	
 	
 	cout << "masukan berat badan(kg) : " ; cin >> berat;
 	cout << "masukan tinggi(cm) : " ; cin >> tinggi  ;
 	
 	if (berat < tinggi/2.5){
	system ("cls");
 	cout << "masukan tinggi" <<tinggi <<"cm" << endl;
 	cout << "masukan berat " << berat<< "kg"<< endl;
 	cout << endl;
 	cout << "Badan anda kurus" << endl;

}
	else if ((tinggi/2.3)<berat ){
 	system ("cls") ;
 	cout << "masukan tinggi" <<tinggi <<"cm" << endl;
 	cout << "masukan berat " <<berat << "kg"<< endl;
 	cout << endl;
	cout << "Bandan anda terlalu gemuk" << endl;
}
	else if (tinggi/2.5 <= berat <= tinggi/2.3){
	system ("cls");
	cout << endl ;
	cout << "masukan tinggi" << tinggi<<"cm"<< endl;
 	cout << "masukan berat " << berat <<"kg"<< endl;
 	cout << endl ;
	cout << " Badan anda Normal " << endl;
	
}
}






