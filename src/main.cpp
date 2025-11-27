#include <iostream>
#include <cmath>
#include <cstdlib>
#include "bisekcja.h"
#include "studnia.h"
#include <QApplication>
#include "mainwindow.h"

using namespace std;

//program do obliczania energii z jaką świecą studnie kwantowe


//funkcja obliczajaca energie stanu zwiazanego studni

	

int main(int argc, char *argv[]){
	QApplication a(argc, argv);

	MainWindow w;
	w.show();

	return a.exec();
/*

	cout<<"Wszystkie energie podajemy w eV, a szerokosci w nm" <<endl;

	cout<<"Podaj procentową zawartość magnezu w barierze:"<<endl;
	cin>> prc1;
	E1=EgMg(prc1);
	cout<<"Podaj procentową zawartość magnezu w studni:"<<endl;
	cin>> prc2;
	E2=EgMg(prc2);
	cout<<"Podaj szerokosc studni:"<<endl;
	cin >>a;
	
	
	
	*cout<<"Podaj ilu jednostkom odp glebokosc studni stanu elektronowego (aby obliczyc VBO):"<<endl;
	cin >> VBOe;
	cout<<"Podaj ilu jednostkom odp glebokosc studni stanu dziurowego (aby obliczyc VBO):"<<endl;
	cin >> VBOh
	cout << "Podaj liczbę n: "<<endl;
	cin >> n;*/
	
	/*E1 = E2 + (1850*(prc/100))/1000;*/

	
/*
	cout << "Fotony tej studni maja energie :" << Etot << "eV"<< endl;
	cout<<"Energia stanow dziurowych: "<<Eh<< "eV" <<endl;
	cout << "Energia stanow elektronowych: "<<Ee<<"eV" <<endl;
	return 0;
*/
}
