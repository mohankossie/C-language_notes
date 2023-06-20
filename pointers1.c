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



/*
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
*/



/*
//Using an array of pointers
void StrPrint1(char **str1, int size);
void StrPrint2(char *str2);

main()
{
	char *str[4] = {"There's a music in the sighing of a reed;",
			"There's a music in the gushing of a rill;",
			"There's music in all things if men had ears;",
			"The earth is but an echo of the spheres.\n"
			};
	int i, size = 4;

	StrPrint1(str, size);
	for (i=0; i<size; i++)
		StrPrint2(str[i]);

	return 0;
}

void StrPrint1(char **str1, int size)
{
	int i;
	//Print all strings in an array of pointers to strings
	for (i=0; i<size; i++)
		printf("%s\n", str1[i]);
}

void StrPrint2(char *str2)
{
	//Prints one string at a time
	printf("%s\n", str2);
}
*/




//Pointing to a function
int StrPrint(char *str);

int main()
{
	char str[24] = "Pointing to a function.";
	int (*ptr)(char *str);

	ptr = StrPrint;
	if (!(*ptr)(str))
		printf("Done!\n");

	return 0;
}

int StrPrint(char *str)
{
	printf("%s\n", str);
	return 0;
}




































































































