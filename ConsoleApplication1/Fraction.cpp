#ifndef FRACTION_H
#define FRACTION_H
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
	void getFract(int, int)
	{

	}
	Fraction fadd(Fraction add)
	{

	}
	Fraction fsubtract(Fraction subtract)
	{
      
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