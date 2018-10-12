#include "fraction.h"
#include <iostream>

Fraction::Fraction(int n, int d) : numerator(n)
{
    if (0 == d)
        denominator = 1;
    else if (d < 0)
    {
        denominator = -d;
        numerator = -numerator;
    }
    else
        denominator = d;

    this->lowest_term();
}

Fraction::~Fraction()
{

}

void Fraction::inverse()
{
    numerator = -numerator;
}

void Fraction::reverse()
{
    int temp = 0;
    temp = numerator;
    numerator = denominator;
    denominator = temp;
}

void Fraction::lowest_term()
{
    int temp = this->gcd();
    while (temp != 1)
    {
        numerator /= temp;
        denominator /= temp;

        temp = this->gcd();
    }

}

int Fraction::gcd()
{
    return (denominator == 0) ? numerator : gcd(denominator, numerator % denominator);
}

int Fraction::gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

Fraction & Fraction::operator=(const Fraction & other)
{
    if (this != &other)
    {
        this->numerator = other.numerator;
        this->denominator = other.denominator;
    }

    return *this;
}

Fraction operator+(const Fraction & f1, const Fraction & f2)
{
    int temp_numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    int temp_denominator = f1.denominator * f2.denominator;

    return Fraction(temp_numerator, temp_denominator);
}

Fraction operator-(const Fraction & f1, const Fraction & f2)
{
    int temp_numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    int temp_denominator = f1.denominator * f2.denominator;

    return Fraction(temp_numerator, temp_denominator);
}

Fraction operator*(const Fraction & f1, const Fraction & f2)
{
    int temp_numerator = f1.numerator * f2.numerator;
    int temp_denominator = f1.denominator * f2.denominator;

    return Fraction(temp_numerator, temp_denominator);
}

Fraction operator/(const Fraction & f1, const Fraction & f2)
{
    int temp_numerator = f1.numerator * f2.denominator;
    int temp_denominator = f1.denominator * f2.numerator;

    return Fraction(temp_numerator, temp_denominator);
}

bool operator<(const Fraction & f1, const Fraction & f2)
{
    return f1.numerator * f2.denominator < f1.denominator * f2.numerator;
}

bool operator>(const Fraction & f1, const Fraction & f2)
{
    return f2 < f1;
}

bool operator==(const Fraction & f1, const Fraction & f2)
{
    return f1.numerator * f2.denominator == f1.denominator * f2.numerator;
}

bool operator!=(const Fraction & f1, const Fraction & f2)
{
	return !(f1 == f2);
}

bool operator<=(const Fraction & f1, const Fraction & f2)
{
    return f1 < f2 || f1 == f2;
}

bool operator>=(const Fraction & f1, const Fraction & f2)
{
    return f2 < f1 || f1 == f2;
}

ostream & operator<<(ostream & os, const Fraction & f)
{
    if (f.denominator == 1)
        os << f.numerator;
    else
        os << '(' << f.numerator << '/' << f.denominator << ')';
    return os;
}

istream & operator>>(istream & is, Fraction & f)
{
    //std::cout << "Enter numerator: ";
    std::cout << "Enter a fraction: ";
    is >> f.numerator >> f.denominator;
    if (f.denominator == 0)
        f.denominator = 1;
    else if (f.denominator < 0)
    {
        f.denominator = -f.denominator;
        f.numerator = -f.numerator;
    }
    //std::cout << "Enter denominator: ";
    //std::cin >> f.denominator;
    return is;
}
