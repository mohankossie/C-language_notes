#include <stdio.h>


/*
//Pointer arithmetic
int main()
{
	char *ptr_ch;
	int *ptr_int;
	double *ptr_db;

	//char pointer ptr_ch
	printf("The Current position of ptr_ch: %p\n", ptr_ch);
	printf("The position after ptr_ch + 1: %p\n", ptr_ch + 1);
	printf("The position after ptr_ch + 2: %p\n", ptr_ch + 2);
	printf("The position after ptr_ch - 1: %p\n", ptr_ch - 1);
	printf("The position after ptr_ch - 2: %p\n", ptr_ch - 2);

	//int pointer ptr_int
	printf("Current position of ptr_int: %p\n", ptr_int);
	printf("The position after ptr_int + 1: %p\n", ptr_int + 1);
	printf("The position after ptr_int + 2: %p\n", ptr_int + 2);
	printf("The position after ptr_int - 1: %p\n", ptr_int - 1);
	printf("The position after ptr_int - 2: %p\n", ptr_int - 2);

	//double pointer ptr_db
	printf("Current position of ptr_db: %p\n", ptr_db);
	printf("The position after ptr_db + 1: %p\n", ptr_db + 1);
	printf("The position after ptr_db + 2: %p\n", ptr_db + 2);
	printf("The position after ptr_db - 1: %p\n", ptr_db - 1);
	printf("The position after ptr-db - 2: %p\n", ptr_db - 2);

	return 0;
}
*/




//Pointer subtraction
#include <stdio.h>

main()
{
	int *ptr_int1, *ptr_int2;

	printf("The position of ptr_int1: %p\n", ptr_int1);
	ptr_int2 = ptr_int1 + 5;
	printf("The position of ptr_int2 = ptr_int1 + 5: %p\n", ptr_int2);
	printf("The subtraction of ptr_int2 - ptr_int1: %ld\n", ptr_int2 - ptr_int1);

	ptr_int2 = ptr_int1 - 5;
	printf("The position of ptr_int2 = ptr_int1 - 5: %p\n", ptr_int2);
	printf("The subtraction of ptr_int2 - ptr_int1: %ld\n", ptr_int2 - ptr_int1);

	return 0;
}


































