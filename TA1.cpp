#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a, b;
    float P, S;

    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;

    if (a == 0 || b == 0)
    {
        cout << "Задача не має розв'язкiв, бо сторона дорівнює 0" << endl;
        return 0;
    }

    if (a < 0 || b < 0)
    {
        cout << "Задача не має розв'язкiв, бо сторона менше 0" << endl;
        return 0;
    }

    P = a + a + b + b;
    S = a * b;
    cout << "Периметр прямокутника: " << P << endl;
    cout << "Площа прямокутника: " << S << endl;

    return 0;
}