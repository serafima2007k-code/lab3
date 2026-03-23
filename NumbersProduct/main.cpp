#include <iostream>
#include "NumbersProduct.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    cout << "1. Конструктор по умолчанию и сеттеры:" << endl;
    NumbersProduct num1;
    num1.setNumberA(4);
    num1.setNumberB(9);
    num1.printInfo();
    cout << endl;

    cout << "2. Параметризованный конструктор:" << endl;
    NumbersProduct num2(16, 25);
    num2.printInfo();
    cout << endl;

    cout << "3. Конструктор копирования:" << endl;
    NumbersProduct num3 = num2;
    num3.printInfo();
    cout << endl;

    cout << "4. Геттеры (числа из num2): "
        << num2.getNumberA() << " и " << num2.getNumberB() << endl;
    cout << endl;

    cout << "5. Среднее геометрическое:" << endl;
    cout << "   (4, 9) -> " << NumbersProduct(4, 9).geometric() << endl;
    cout << "   (2, 8) ->" << NumbersProduct(2, 8).geometric() << endl;
    cout << "   (5, 5) ->" << NumbersProduct(5, 5).geometric() << endl;
    cout << endl;

    cout << "6. Проверка с отрицательными числами:" << endl;
    NumbersProduct test(-4, 9);
    test.printInfo();
    cout << endl;

    cout << "7. Массив объектов:" << endl;
    NumbersProduct arr[3] = {
        NumbersProduct(1, 1),
        NumbersProduct(2, 8),
        NumbersProduct(9, 16)
    };

    for (int i = 0; i < 3; i++) {
        cout << "   (" << arr[i].getNumberA() << ", " << arr[i].getNumberB()
            << ") -> " << arr[i].geometric() << endl;
    }
    cout << endl;

    cout << "8. Ввод двух чисел:" << endl;
    double a, b;
    cout << "   Введите A и B: ";
    cin >> a >> b;
    NumbersProduct user(a, b);
    cout << "   Среднее геометрическое: " << user.geometric() << endl;

    return 0;
}