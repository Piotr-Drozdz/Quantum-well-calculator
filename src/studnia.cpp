#include "studnia.h"



//funkcja obliczająca jednostke potencjalu
double dV(double E1, double E2, int VBOe, int VBOh){
	return ((E1 - E2)/(VBOe + VBOh));
}


/* funkchja obliczająca wartość przerwy energetycznej w zależności od zawartości magnezu */ 
double EgMg(double prc)
{
	return 1.606*prc + 1.503;
}


//Masa efektywna elektronu w zależności od zawartości magnezu
double mel(double prc)
{
	prc=prc/100.0;
	return 0.2*prc + (1.0-prc)*0.1;
}


//Masa efektywna dziury ciężkiej w zależności od zawartości magnezu
double meh(double prc)
{
	prc=prc/100.0;
	return 1.25*prc + (1.0-prc)*0.6;
}
