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
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

struct complex
{
      float real;
      float imag;
}z1,z2;

void product_complex(struct complex z1,struct complex z2)
{
	struct complex z3;
	z3.real=(z1.real*z2.real)-(z1.imag*z2.imag);
	z3.imag=(z1.real*z2.imag)+(z2.real*z1.imag);
	printf("%d+%di",z3.real,z3.imag);
}
int main(){
	struct complex z1,z2;
	z1.real=1;
	z1.img=9;
	z2.real=8;
	z2.img=7;
        complex(z1,z2);		
	return 0;
}

