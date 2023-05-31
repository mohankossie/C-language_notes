#include <stdio.h>

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
