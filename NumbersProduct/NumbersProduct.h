#pragma once
#include <iostream>
#include <cmath>
using  namespace std;
class NumbersProduct {
private:
	double numberA;
	double numberB;

public:
	NumbersProduct();
	NumbersProduct(double a, double b);
	NumbersProduct(const NumbersProduct& other);
	~NumbersProduct();
	double getNumberA() const;
	double getNumberB() const;
	void setNumberA(double a);
	void setNumberB(double b);
	double geometric() const;
	void printInfo() const;

};