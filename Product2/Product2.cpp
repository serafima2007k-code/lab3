#include "Product2.h"
#include <iostream>
#include <string>

using namespace std;
Product2::Product2() : name("Неизвестно"), price(0.0), year(0) {
    cout << "Вызван конструктор по умолчанию для Product2" << endl;
}

Product2::Product2(const string& n, double p, int y)
    : name(n), price(p), year(y) {
    cout << "Вызван параметризованный конструктор для товара: " << name << endl;
}

Product2::Product2(const Product2& other)
    : name(other.name), price(other.price), year(other.year) {
    cout << "Вызван конструктор копирования для товара: " << name << endl;
}

Product2::~Product2() {
    cout << "Вызван деструктор для товара: " << name << endl;
}

string Product2::getName() const {
    return name;
}

double Product2::getPrice() const {
    return price;
}

int Product2::getYear() const {
    return year;
}

void Product2::setName(const string& n) {
    if (!n.empty()) {
        name = n;
    }
    else {
        cout << "Ошибка: название не может быть пустым!" << endl;
    }
}
void Product2::setPrice(double p) {
    if (p >= 0) {
        price = p;
    }
    else {
        cout << "Ошибка: цена не может быть отрицательной!" << endl;
    }
}

void Product2::setYear(int y) {
    if (y > 0 && y <= 2026) {
        year = y;
    }
    else {
        cout << "Ошибка: год выпуска должен быть от 1 до 2026!" << endl;
    }
}

int Product2::getAge() const {
    int currentYear = 2026; 
    return currentYear - year;
}

void Product2::increasePriceIfOld() {
    int age = getAge(); 

    if (age > 5) {
        double oldPrice = price;
        price = price * 1.10;  
        cout << "Товар \"" << name << "\" старше 5 лет (" << age << " лет). ";
        cout << "Цена увеличена: "  << price << endl;
    }
    else {
        cout << "Товар \"" << name << "\" младше или равен 5 годам (" << age << " лет). ";
        cout << "Цена не изменена." << endl;
    }
}
void Product2::printInfo() const {
    cout << "  Наименование: " << name << endl;
    cout << "  Цена: " << price << " руб." << endl;
    cout << "  Год выпуска: " << year << endl;
    cout << "  Возраст товара: " << getAge() << " лет" << endl;

    if (getAge() > 5) {
        cout << "  Товар старше 5 лет. Применяется повышение цены на 10%" << endl;
    }
}