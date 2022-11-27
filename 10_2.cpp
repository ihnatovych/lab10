#include <iostream> 
#include <math.h> 
#include <cmath> 
using namespace std;
int main()
{
    setlocale(0, ".1251");
    int x1 = 0;
    int x2 = 12;
    int x3 = -12;
    int y1 = 0;
    int y2 = 11;
    int y3 = 13;
    double A, B, C, L, P, H;

    A = sqrt(pow((x2 - x1), 2) * pow((y2 - y1), 2));
    B = sqrt(pow((x3 - x2), 2) * pow((y3 - y2), 2));
    C = sqrt(pow((x1 - x3), 2) * pow((y1 - y3), 2));

    P = (A + B + C) / 2;

    H = 2 / A * (sqrt(P * (P - A) * (P - B) * (P - C)));
    L = (sqrt(A * B * (A + B + C) * (C + B - A))) / (A + B);
    cout << "Висота до сторони B  -  " << H << endl;
    cout << "Бiсектриса до сторони А -  " << L;
    system("pause >> void");
    return 0;
}