﻿#include <iostream>
#include <Windows.h>
using namespace std;

/*11	Напишіть програму для виведення характеристики землетрусу за шкалою Ріхтера, використовуючи наступну таблицю рішень
Бали	        Характеристика
n < 5	        Легке, немає руйнувань
5 <= n < 5.5	Середнє, невеликі руйнування
5.5 <= n < 6.5	Серйозне, руйнування та пошкодження стін
6.5 <= n < 7.5	Лихо, багато будинків та будинків пошкоджено
n > 7.5	        Катастрофа, більшість будинків та будівель зруйновано
*/


int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    // Запит користувача про магнітуду землетрусу
    double magnitude;
    cout << "Введіть магнітуду землетрусу за шкалою Ріхтера: ";
    cin >> magnitude;

    // Визначення характеристики землетрусу за шкалою Ріхтера
    if (magnitude < 5) {
        cout << "Характеристика: Легке, немає руйнувань\n";
    }
    else if (magnitude >= 5 && magnitude < 5.5) {
        cout << "Характеристика: Середнє, невеликі руйнування\n";
    }
    else if (magnitude >= 5.5 && magnitude < 6.5) {
        cout << "Характеристика: Серйозне, руйнування та пошкодження стін\n";
    }
    else if (magnitude >= 6.5 && magnitude < 7.5) {
        cout << "Характеристика: Лихо, багато будинків та будівель пошкоджено\n";
    }
    else if (magnitude >= 7.5) {
        cout << "Характеристика: Катастрофа, більшість будинків та будівель зруйновано\n";
    }
    else {
        cout << "Невірний ввід. Будь ласка, введіть коректну магнітуду землетрусу.\n";
    }

    return 0;
}

