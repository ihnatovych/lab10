#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

int main()
{
	setlocale(0, ".1251");
	double z, alpha;

	cout << "Введіть значення a =";
	cin >> alpha;

	z = 1/tan (3 / 2 * PI - alpha);

	cout << "Результат z=" << z << endl;
	return 0;
}