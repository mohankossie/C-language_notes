#include <stdio.h>


/*
//Innitializing an array
int main()
{
	int i;
	int list_int[10];

	for (i=0; i<10; i++) {
		list_int[i] = i + 1;
		printf("list_int[%d] is initialized with %d.\n", i, list_int[i]);
	}
	return 0;
}
*/

/*
//Calculating the size of an array
main()
{
	long int total_byte;
	long int list_int[10];

	total_byte = sizeof (int) * 10;
	printf("The size of int is %lu bytes.\n", sizeof (int));
	printf("The array of 10 ints has a total of %lu bytes", total_byte);
	printf("The address of the first element: %p\n", &list_int[0]);
	printf("The address of the last element: %p\n", &list_int[9]);
	return 0;
}
*/


/*
//Referencing an array with a pointer
int main()
{
	int *ptr_int;
	int list_int[10];
	int i;

	for (i=0; i<10; i++)
		list_int[i] = i + 1;
	ptr_int = list_int;
	printf("The start address of an array: %p\n", ptr_int);
	printf("The value of the first element: %d\n", *ptr_int);
	ptr_int = &list_int[0];
	printf("The address of the first elementt: %p\n", ptr_int);
	printf("The value of the first element: %d\n", *ptr_int);
	return 0;
}
*/




//Printing an array of charecters
int main()
{
	char array_ch[5] = {'M','o','h','a','\0'};
	int i;

	for (i=0; i<5; i++)
		printf("array_ch[%d] contains: %c\n", i, array_ch[i]);

	/*--- method I ---*/
	printf("Put all these elements together (Method I):\n");
	for (i=0; array_ch[i] != '\0' && i<5; i++)
		printf("%c", array_ch[i]);

	/*--- method II ---*/
	printf("\nPut all elements together(Method II):\n");
	printf("%s\n", array_ch);

	return 0;
}


















































































































































