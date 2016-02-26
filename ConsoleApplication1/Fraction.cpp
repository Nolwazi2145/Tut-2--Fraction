#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class Fraction
{
private:

	int numerator;
	int denominator;

public:
	~Fraction();
	Fraction(int num = 0, int denom = 1)
	{  
		num = numerator;
		denom = denominator; 
    }
	void setFract(int, int)
	{
	  
	}

	 Fraction getFract()
	{
		cout << "Enter the numerator " << endl;
		cin >> numerator;
		cout << "Enter the denominator" << endl;
		cin >> denominator;
		return Fraction(numerator , denominator);
	}
	Fraction fadd(Fraction add)
	{
		numerator = numerator * add.denominator + add.numerator * denominator;
		denominator = denominator * add.denominator;
		return add;

	}
	Fraction fsubtract(Fraction subtract)
	{
		numerator = numerator * subtract.denominator - subtract.numerator * denominator;
		denominator = denominator * subtract.denominator;
		return subtract;

	}
	Fraction fmultiply(Fraction multiply)
	{
		numerator = numerator * multiply.numerator;
		denominator = denominator * multiply.denominator;
		return multiply;
	}
	Fraction fdivide(Fraction divide)
	{
		numerator = numerator * divide.denominator;
		denominator = denominator * divide.numerator;
		return divide;
	}
   };
#endif