#include <stdio.h>


/*
//Using Arithmetic Operators
int main()
{
	int x, y, z;

	x = 1; //initialize x
	y = 3; //initialize y
	z = 10; //initialize z
	printf("Given x = %d, y = %d, z = %d \n", x, y, z );

	x = x + y;
	printf("x = x+y assigns %d to x;\n", x);

	x = 1; //reset x
	x += y;
	printf("x += y assigns %d to x;\n", x);

	x = 1; //reset x
	z = z * x + y;
	printf("z * x + y assigns %d to z;\n", z);

	z = 10; //reset z
	z = z * (x + y);
	printf("z = z * (x + y) assigns %d to z;\n", z);

	z = 10; //reset z
	z *= x + y;
	printf("z *= x +y assigns %d to z.\n", z);

	return 0;
}
*/

//Using pre- or post- increment(decrement) operators
int main()
{
	int w, x, y, z, result;

	w = x = y = z = 1; //initialize
	printf("Given w = %d, x = %d, y = %d, and z = %d,\n", w, x, y, z);

	result = ++w;
	printf("++w evaluates to %d and w is now %d\n", result, w);

	result = x++;
	printf("x++ evaluates to %d and x is now %d\n", result, x);

	result = --y;
	printf("--y evaluates to %d and y is now %d\n", result, y);

	result = z--;
	printf("z-- evaluates to %d and z is now %d\n", result, z);
	
	return 0;
}
