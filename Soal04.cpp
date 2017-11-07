#include <iostream>
using namespace std;

int main () {
	int B ;
	
	cout << "Silahkan Masukkan Bilangannya	: "; cin >> B ;

	if (B>0){
		system("cls");
		cout << ""<<endl;
		cout << "Wah...Bilangan yang Anda Masukkan Adalah Positif ( "<<B<<" )!!"<<endl;
	}
	else if (B<0){
		system("cls");
		cout << ""<<endl;
		cout << "Oh Tidak...Bilangan yang Anda Masukkan Adalah Negatif ( "<<B<<" )!!"<<endl;
	}
	
}
