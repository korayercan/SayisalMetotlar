#include <iostream>
#include <math.h>

using namespace std;

float f(float x) {
	return pow(x, 3) - 7 * pow(x, 2) + 14 * x - 6;
}
float df(float x) {
	return (f(x - 1) - f(x)) / -1;
}


int main() {
	int i = 1;
	double a,b,xn, h, xn1, epsilon;
	cout << "Baþlangýç deðeri giriniz : " << endl;
	cin >> xn;

	cout << "Hata payýný giriniz : " << endl;
	cin >> epsilon;

	cout << "n " << "  " << " pn " << endl;
	cout << "------------------" << endl;

	xn1 = xn - f(xn) / df(xn);
	cout << xn1 << endl;
	while (abs(xn1 - xn) >= epsilon) {
		xn = xn1;
		xn1 = xn - f(xn) / df(xn);
		cout << i << "  " << xn << "  " << xn1 << endl;
		i++;
	}

	return 0;
}
