#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

double f(double k, double R, double a)
{
 
	return (sqrt(R*R - k*k) - k*(tan((k*a)/2))) ;
}

double stan(int n, double R, double a)
{
	double i, f_i;
	double j;
	const double epsilon = 1e-11;
	double l, f_l;
	
	
	
	i =(2*(n - 1)*M_PI/a);
	j = (n*M_PI/a)  ;

	
	f_i = f(i, R, a);
	if (f_i == 0) {
		l = i;
		goto wynik;
	} else if (f(j, R, a) == 0) {
		l = j;
		goto wynik;
	} else if (f_i * f(j, R, a) > 0) {
		cerr << "Błędne dane!" << endl;
		return 1;
	}

	do {
		l = (i + j) / 2;
		f_l = f(l, R, a);
		if (f_l == 0)
			break;

		if (f_l * f_i > 0) {
			i = l;
			f_i = f_l;
		} else {
			j = l;
		}
	} while (j - i > epsilon);


	
wynik:
	return l;
	
	
}
