#include <iostream>
#include "Product2.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    cout << "1. Конструктор по умолчанию и сеттеры:" << endl;
    Product2 prod1;
    prod1.setName("Смартфон Samsung");
    prod1.setPrice(25000);
    prod1.setYear(2020);
    prod1.printInfo();
    cout << endl;

    cout << "2. Параметризованный конструктор:" << endl;
    Product2 prod2("Ноутбук Lenovo", 45000, 2018);
    prod2.printInfo();
    cout << endl;

    cout << "3. Конструктор копирования:" << endl;
    Product2 prod3 = prod2;
    prod3.printInfo();
    cout << endl;

    cout << "4. Геттеры (данные из prod2): ";
    cout << prod2.getName() << ", " << prod2.getPrice() << " руб., ";
    cout << prod2.getYear() << " г. (" << prod2.getAge() << " лет)" << endl;
    cout << endl;

    cout << "5. Определение возраста товаров:" << endl;
    cout << "   Телевизор (2023): " << Product2("", 0, 2023).getAge() << " лет" << endl;
    cout << "   Холодильник (2019): " << Product2("", 0, 2019).getAge() << " лет" << endl;
    cout << "   Микроволновка (2015): " << Product2("", 0, 2015).getAge() << " лет" << endl;
    cout << endl;

    cout << "6. Увеличение цены для старых товаров:" << endl;
    Product2 oldProduct("Старый ноутбук", 30000, 2018);
    cout << "   До: " << oldProduct.getPrice() << " руб." << endl;
    oldProduct.increasePriceIfOld();
    cout << "   После: " << oldProduct.getPrice() << " руб." << endl;

    Product2 newProduct("Новый планшет", 20000, 2022);
    cout << "   До: " << newProduct.getPrice() << " руб." << endl;
    newProduct.increasePriceIfOld();
    cout << "   После: " << newProduct.getPrice() << " руб." << endl;
    cout << endl;

    cout << "7. Массив товаров и повышение цены:" << endl;
    Product2 shop[3] = {
        Product2("Телевизор LG", 30000, 2019),
        Product2("Холодильник Bosch", 50000, 2021),
        Product2("Микроволновка Samsung", 8000, 2023)
    };

    for (int i = 0; i < 3; i++) {
        cout << "   " << shop[i].getName() << ": " << shop[i].getPrice()
            << " руб. (возраст: " << shop[i].getAge() << " лет)" << endl;
    }

    for (int i = 0; i < 3; i++) {
        shop[i].increasePriceIfOld();
    }

    cout << "\n   После повышения:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "   " << shop[i].getName() << ": " << shop[i].getPrice() << " руб." << endl;
    }
    cout << endl;

    cout << "8. Ввод данных о товаре:" << endl;
    string name;
    double price;
    int year;

    cout << "   Название: ";
    cin.ignore();
    getline(cin, name);
    cout << "   Цена: ";
    cin >> price;
    cout << "   Год выпуска: ";
    cin >> year;

    Product2 userProduct(name, price, year);
    cout << "\n   Возраст: " << userProduct.getAge() << " лет" << endl;
    userProduct.increasePriceIfOld();
    cout << "   Итоговая цена: " << userProduct.getPrice() << " руб." << endl;
    return 0;
}