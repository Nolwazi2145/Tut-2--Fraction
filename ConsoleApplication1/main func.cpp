#include <iostream>
#include "fraction.h"
using namespace std;

int main()
	{

		Fraction f1, f2, f3, f4, f5, f6;
		cout << "The answer displayed will be the sum, difference, product and the division.\n " << endl;
		f1 = getFract();
		f2 = getFract();
		f3 = f1.fadd(f2); //Adds the two fractions;  
		f3.print();
		f4 = f1.fsubtract(f2); //Subtracts the two fractions 
		f4.print();
		f5 = f1.fmultiply(f2); //Multiplies the two fractions  
		f5.print();
		f6 = f1.fdivide(f2); //Divides the two fractions 
		return 0;
		
	}
