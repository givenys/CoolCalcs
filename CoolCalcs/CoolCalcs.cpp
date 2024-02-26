// CoolCalcs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    float a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Sum: " << a + b;

    float d;
    std::cout << "Enter two numbers: ";
    std::cin >> d;

    std::cout << "Sum2: " << a + b + d;
}