#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

#define  f(x)  pow(x,3)-7*pow(x,2)+14*x-6

int main() {
	int i = 1;
	float x,altdeger, ustdeger, c, deger1, deger2, deger, mal, hata = 0.00001;

	altdeger = 0;
	ustdeger = 1;

	deger1 = f(altdeger);
	deger2 = f(ustdeger);

	cout << "ADIM " << "  " << "ALTDEĞER" << "  " << "ÜSTDEĞER" << " " << "YENİDEĞER" << "  " << "SONUÇ" << endl;
	if (deger1 * deger2 < 0) {

		do {
			c = (altdeger * deger2 - ustdeger * deger1) / (deger2 - deger1);
			deger = f(c);
			cout << i << "        " << altdeger << "        " << ustdeger << "        " << c << "       " << deger << endl;

			if (deger1 * deger <= 0) {
				ustdeger = c;
				deger2 = deger;
			}
			else {
				altdeger = c;
				deger1 = deger;

			}
			i++;
		} while (fabs(deger) > hata);

	}
	cout <<mal ;
	printf("\n\n%d iterasyon sonucunda fonksiyonun kök değeri : %.4f \n", i, c);
	cout << "--------------------------------------------------------";

}
