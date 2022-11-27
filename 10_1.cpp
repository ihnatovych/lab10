#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Ukr");
    double number, result1, result ;

    cout << "Введіть початкову ціну:";
    cin >> number;

    result1 = number - (number * 0.1) ;

    result = result1 + (result1 * 0.15);
    cout << "Результат: " << result << endl;
    
    
    return 0;
}