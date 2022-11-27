#include <iostream>
#include <cmath>

#define E = 2,718281828;

using namespace std;
int main()
{
	setlocale(0, ".1251");
	double a, b, c, y, x;
	b = 3;
	
	cout << "Введіть значення c = "; // тут має бути введено 1.7
	cin >> c;

	a = pow (sin(b),5);
	x = a + pow(c,3);
	

	cout << "Результат a = " << a << endl;
	cout << "Результат x = " << x << endl;
	cout << "Результат y = " << y << endl;

	return 0;
}