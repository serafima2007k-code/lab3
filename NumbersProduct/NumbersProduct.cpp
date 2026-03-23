#include "NumbersProduct.h"
#include <iostream>
#include <cmath>
using namespace std;

NumbersProduct::NumbersProduct() : numberA(0.0), numberB(0.0) {
	cout << "Вызван конструктор по умолчанию для NumbersProduct" << endl;
}

NumbersProduct::NumbersProduct(double a, double b) : numberA(a), numberB(b) {
	cout << "Вызван параметризованный конструктор для NumbersProduct:"
		<< numberA << ", " << numberB << endl;
}
NumbersProduct::NumbersProduct(const NumbersProduct& other)
	:numberA(other.numberA), numberB(other.numberB) {
	cout << "Вызван конструктор копирования для NumbersProduct:"
		<< numberA << " " << numberB << endl;
}
NumbersProduct::~NumbersProduct() {
	cout << ""
		<< numberA << " " << numberB << endl;
}
double NumbersProduct::getNumberA() const {
	return numberA;
}
double NumbersProduct::getNumberB() const {
	return numberB;
}
void NumbersProduct::setNumberA(double a) {
	numberA = a;
	cout << "" << numberA << endl;
}
void NumbersProduct::setNumberB(double b) {
	numberB = b;
	cout << "" << numberB << endl;
}
double NumbersProduct::geometric() const {
	double product = numberA * numberB;
	if (product < 0) {
		return -1;
	}
	return sqrt(product);
}
void NumbersProduct::printInfo() const {
	cout << "Число A =" <<numberA<< endl;
	cout << "Число B =" << numberB << endl;
	double mean = geometric();
	if (mean >= 0) {
		cout << "Среднее геометрическое: " << mean << endl;
	}
	else {
		cout << "Среднее геометрическое: не определено " << endl;
	}
}