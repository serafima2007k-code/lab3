#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product2 {
private:
    string name;     
    double price;   
    int year;         

public:
    Product2();                                    
    Product2(const string& n, double p, int y);   
    Product2(const Product2& other);              

    ~Product2();

    string getName() const;
    double getPrice() const;
    int getYear() const;

    void setName(const string& n);
    void setPrice(double p);
    void setYear(int y);

    int getAge() const;

    void increasePriceIfOld();
    void printInfo() const;
};