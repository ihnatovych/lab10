#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, ".1251");
	double y, k, x;
	x = 0;
	k = 12;
	cout << "Введіть значення y =";
	cin >> y;
	x = (sqrt(pow(sin(y), 2) + 6.835)) / (log(y + k) + 3 * pow(y, 2));

	cout << "Результат у=" << x << endl;
	return 0;
}