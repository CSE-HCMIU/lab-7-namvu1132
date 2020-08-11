/*
3. Input 2 complex numbers using string then return a string
that represent the product of those two. Result should use string.
Complex number has the form of a+bi (i2 = -1, b can be negative or positive)
Ex:
 __________________________________________________________
| Input: 3+2i 3+2i                                         |
| Output: 5+12i                                            |
|__________________________________________________________|
*/
#include<stdio.h>

struct complex
{
      float real;
      float imag;
};

int main(){
	complex c1,c2,result;
	c1.real=1;
	c1.imag=9;
	c2.real=8;
	c2.imag=7;
	result.real=(c1.real*c2.real)-(c1.imag*c2.imag);
	result.imag=(c1.real*c2.imag)+(c2.real*c1.imag);
	printf("%.f+%.fi",result.real,result.imag);
	return 0;
}
	


