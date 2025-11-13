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
