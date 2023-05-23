#include <stdio.h>

/*
int main()   {
	printf("Go to bed Moha!\n");
	return 0; 
}
*/

int integer_add(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

int main()
{
	int sum;

	sum = integer_add(3,7);
	printf("The sum of 3 and 7 is %d.\n", sum);
	return 0;
}
