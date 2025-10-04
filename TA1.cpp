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

    cout << "������ �������� a: ";
    cin >> a;
    cout << "������ �������� b: ";
    cin >> b;

    if (a == 0 || b == 0)
    {
        cout << "������ �� �� ����'���i�, �� ������� ������� 0" << endl;
        return 0;
    }

    if (a < 0 || b < 0)
    {
        cout << "������ �� �� ����'���i�, �� ������� ����� 0" << endl;
        return 0;
    }

    P = a + a + b + b;
    S = a * b;
    cout << "�������� ������������: " << P << endl;
    cout << "����� ������������: " << S << endl;

    return 0;
}