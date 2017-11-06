#include <iostream>
using namespace std;

int main(){
	int Gtot,lembur,pajak,jk,Gpok,Gber,Ulem,jam;
	cout << "masukan lama kerja karyawan selama seminggu : " ; cin >> jk;
	cout << "gajih per-jam yang di terima selama karyawan bekerja dalam seminggu : "; cin >> Gpok;
	
	if (jk>40){
	 lembur = jk-40 ;
	 jam = lembur * 1.5 ;
	 Ulem = Gpok*jam;
	 pajak = Ulem*jam;
	 Gtot = Gpok - pajak ;
	 Gber = Gtot -(jk*40) + ((Gpok-40 ) *jk*1.5);
	 
	cout << "lama kerja dalam seminggu                                                     : " <<jk<<"jam"<<endl;
	cout << "total lembur karyawan                                                         : " <<lembur<<" jam "<<endl;
	cout << "gajih per-jam yang di terima selama karyawan bekerja dalam seminggu           : " <<Gpok<<endl;
    cout << "upah lembur karyawan                                                          : " <<Ulem<<endl;
	cout << "pajak yang di tanggung                                                        : " <<pajak<<endl;
	cout << "gajih bersih                                                                  : " <<Gber<<endl;
}
	else {
		Gtot  = Gpok*40;
		pajak = Gtot*0.15;
		Gber  = Gtot-pajak;
		
	cout << "lama kerja dalam seminggu                                                     : " <<jk<<"jam"<<endl;
	cout << "gajih per-jam yang di terima selama karyawan bekerja dalam seminggu           : " <<Gpok<<endl;
    cout << "upah lembur karyawan                                                          : " <<Ulem<<endl;
	cout << "pajak yang di tanggung                                                        : " <<pajak<<endl;
	cout << "gajih bersih                                                                  : " <<Gber<<endl;
 
	}
	    	
	} 
	
	 

