#include <iostream>
using namespace std;

int main () {
	int T, B ;
	
	cout << " Berapa Tinggi Badan Anda (cm) ? "; cin >> T ;
	cout << " Berapa Berat Badan Anda (kg) ? "; cin >> B ;

	if (B<T/2.5){
		system ("cls");
		cout <<""<<endl;
		cout << "Tinggi Anda "<<T<<" Kg"<<endl;
		cout << "Berat Anda  "<<B<<" Cm"<<endl;
		cout <<""<<endl;
		cout << "Anda Tergolong underweight / Kurus"<<endl;
	}
	else if ((T/2.3)<B){
		system("cls");
		cout << ""<<endl;
		cout << "Tinggi Anda "<<T<<" Kg"<<endl;
		cout << "Berat Anda  "<<B<<" Cm"<<endl;
		cout <<""<<endl;
		cout << "Anda Tergolong Overweight / Berat"<<endl;
	}	

}
