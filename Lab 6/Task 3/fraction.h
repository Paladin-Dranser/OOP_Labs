#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using std::istream;
using std::ostream;

class Fraction
{
public:
    Fraction(int n = 0, int d = 1);
    ~Fraction();

    void reverse();
    void inverse();

    Fraction & operator=(const Fraction & other);

    friend Fraction operator+(const Fraction & f1, const Fraction & f2);
    friend Fraction operator-(const Fraction & f1, const Fraction & f2);
    friend Fraction operator*(const Fraction & f1, const Fraction & f2);
    friend Fraction operator/(const Fraction & f1, const Fraction & f2);

    friend bool operator<(const Fraction & f1, const Fraction & f2);
    friend bool operator<=(const Fraction & f1, const Fraction & f2);
    friend bool operator>(const Fraction & f1, const Fraction & f2);
    friend bool operator>=(const Fraction & f1, const Fraction & f2);
    friend bool operator==(const Fraction & f1, const Fraction & f2);
    friend bool operator!=(const Fraction & f1, const Fraction & f2);

    friend ostream & operator<<(ostream & os, const Fraction & f);
    friend istream & operator>>(istream & is, Fraction & f);

private:
    void lowest_term();
    int gcd();
    int gcd(int a, int b);

private:
    int numerator;
    int denominator;
};

#endif // FRACTION_H
