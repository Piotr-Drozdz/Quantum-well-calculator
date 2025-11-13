#include <iostream>
#include <cmath>
#include <cstdlib>
#include "bisekcja.h"
#include "studnia.h"

using namespace std;

//program do obliczania energii z jaką świecą studnie kwantowe


//funkcja obliczajaca energie stanu zwiazanego studni

	

int main(){
	double E1, E2, a, Ve, Vh, prc1, prc2;
	int VBOe, VBOh, n;//VBO mozna się domyslec patrząc ponizej a n numeruje nam stany związane
	VBOe = 7;
	VBOh = 3;

	cout<<"Wszystkie energie podajemy w eV, a szerokosci w nm" <<endl;

	cout<<"Podaj procentową zawartość magnezu w barierze:"<<endl;
	cin>> prc1;
	E1=EgMg(prc1);
	cout<<"Podaj procentową zawartość magnezu w studni:"<<endl;
	cin>> prc2;
	E2=EgMg(prc2);
	cout<<"Podaj szerokosc studni:"<<endl;
	cin >>a;
	
	
	
	/*cout<<"Podaj ilu jednostkom odp glebokosc studni stanu elektronowego (aby obliczyc VBO):"<<endl;
	cin >> VBOe;
	cout<<"Podaj ilu jednostkom odp glebokosc studni stanu dziurowego (aby obliczyc VBO):"<<endl;
	cin >> VBOh;*/
	cout << "Podaj liczbę n: "<<endl;
	cin >> n;
	
	double me = 511000;
	double ke, kh, Ee, Eh, Etot, h;
	double Re, Rh;
	/*E1 = E2 + (1850*(prc/100))/1000;*/

	
	h = 197.32696817;

	Ve = VBOe*dV(E1, E2, VBOe, VBOh);
	Vh = VBOh*dV(E1, E2, VBOe, VBOh);
	
	Re = sqrt((2*0.067*me*Ve)/(h*h));
	Rh = sqrt((2*0.45*me*Vh)/(h*h));
	
	
	ke = stan(n, Re, a);
	
	Ee = (ke*ke*h*h)/(2*0.11*me);
	
	
	kh = stan(n, Rh, a);
	Eh = (kh*kh*h*h)/(2*0.633*me);
	
	Etot = Ee + Eh + E2;
	cout << "Fotony tej studni maja energie :" << Etot << "eV"<< endl;
	cout<<"Energia stanow dziurowych: "<<Eh<< "eV" <<endl;
	cout << "Energia stanow elektronowych: "<<Ee<<"eV" <<endl;
	return 0;
}
