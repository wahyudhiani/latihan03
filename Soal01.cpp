#include <iostream>
using namespace std;

int main () {
		int X, Y, Z;
	
	cout << "Masukkan Nilai X : "; cin >> X ;
	cout << "Masukkan Nilai Y : "; cin >> Y ;

	if (X>Y){
		Z = X-Y;
		
		cout << "Selisih Nilai X dan Y yaitu "<< Z ;
	}
	else if (Y>X){
		Z = Y-X;
		
		cout << "Selisih Nilai Y dan X yaitu "<< Z ;
	}
}
