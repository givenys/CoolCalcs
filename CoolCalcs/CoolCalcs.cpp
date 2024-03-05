// CoolCalcs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>

int main()
{
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b << endl;

    float d, g;
    cout << "Enter two numbers: ";
    cin >> d >> g;

    cout << "Sum 2 = " << d + g << endl;
    cout << "Sum 2 = " << g + d << endl;
    cout << "Sum All = " << a + b + d + g << endl;
}