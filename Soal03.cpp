#include <iostream>
using namespace std;

int main () {
	int JK, LEMBUR, GTOT, GP, GB, UL, JAM, PAJAK ;
	
	cout << "Lama Kerja Karyawan dalam Seminggu              : "; cin >> JK ;
	cout << "Gaji Perjam yang Karyawan Terima dalam Seminggu : "; cin >> GP ;	
	
	if (JK>40){
		system ("cls");
		LEMBUR = JK-40 ;
		JAM = LEMBUR*1.5 ;
		UL = GP*JAM ;
		PAJAK = UL*0.15;
		GTOT = GP - PAJAK ;
		GB = GTOT-(JK*40)+((GP-40)*JK*1.5);

		cout << "Lama Kerja Karyawan dalam Seminggu                  : "<<JK<<" Jam"<<endl;
		cout << "Total Lembur Karyawan Sekitar                       : "<<LEMBUR<<" Jam dalam Seminggu"<<endl;
		cout << "Gaji Perjam yang Karyawan Terima dalam Seminggu     :Rp "<<GP<<endl;	
		cout << "Upah Lembur yang diterima Karyawan sebesar          :Rp "<<UL<<endl;
		cout << "Pajak yang Ditanggung Karyawan Sebesar              :Rp "<<PAJAK<<endl;
		cout << "Sehingga Gaji Bersih yang diterima Karyawan Sebesar :Rp "<<GB<<endl;		
	}

}

