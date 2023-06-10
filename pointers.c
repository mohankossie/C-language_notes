#include <stdio.h>


/*
//Obtaining addresses using address-of operator
int main()
{
	char c;
 	int x;
	float y;

	printf("c: address=%p, content=%c\n", &c, c);
	printf("x: address=%p, content=%d\n", &x, x);
	printf("y: address=%p, content=%5.2f\n", &y, y);


	c='A';
 	x=7; 
	y=123.45;
	printf("c: address=%p, content=%c\n", &c, c);
	printf("x: address=%p, content=%d\n", &x, x);
	printf("y: address=%p, content=%5.2f\n", &y, y);
	return 0;
}
*/


/*
//Declare & Assign values to pointers
int main()
{
	char c, *ptr_c;
	int x, *ptr_x;
	float y, *ptr_y;

	c = 'A';
	x = 7;
	y = 123.45;
	printf("c: address=%p, content=%c\n", &c, c);
	printf("x: address=%p, content=%d\n", &x, x);
	printf("y: address=%p, content=%5.2f\n", &y, y);
	
	ptr_c=&c;
		printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c);
		printf("*ptr_c => %c\n", *ptr_c);
	ptr_x=&x;
		printf("ptr_x: address=%p, content=%p\n", &ptr_x, ptr_x);
		printf("*ptr_x => %d\n", *ptr_x);
	ptr_y=&y;
		printf("ptr_y: address=%p, content=%p\n", &ptr_y, ptr_y);
		printf("*ptr_y => %5.2f\n", *ptr_y);
	return 0;
}
*/


/*
//Changing values via pointers
int main()
{
	char c, *ptr_c;

	c = 'A';
	printf("c: address=%p, content=%c\n", &c, c);
	ptr_c = &c;
		printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c);
		printf("*ptr_c => %c\n", *ptr_c);
	*ptr_c = 'B';
		printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c);
		printf("*ptr_c => %c\n", *ptr_c);
	printf("c: address=%p, content=%c\n", &c, c);
	return 0;
}
*/



//Pointing to the same thing
int main()
{
	int x;
	int *ptr_1, *ptr_2, *ptr_3;

	x = 1234;
	printf("x: address=%p, content=%d\n", &x, x);
	ptr_1 = &x;
	printf("ptr_1: address=%p, content=%p\n", &ptr_1, ptr_1);
		printf("*ptr_1 => %d\n", *ptr_1);
	ptr_2 = &x;
	printf("ptr_2: address=%p, content=%p\n", &ptr_2, ptr_2);
		printf("*ptr_2 => %d\n", *ptr_2);
	ptr_3 = ptr_1;
	printf("ptr_3: address=%p, content=%p\n", &ptr_3, ptr_3);
		printf("*ptr_3 => %d\n", *ptr_3);
	return 0;
}


















































































































