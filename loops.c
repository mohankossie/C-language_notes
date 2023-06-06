#include <stdio.h>


/*
//While loop
int main ()
{
	int c;

	c = ' ';
	printf("Enter a charecter:\n(enter x to exit)\n");
	while(c != 'x') {
		c = getc(stdin);
		putchar(c);
	}
	printf("\nOut of the while loop. Bye!\n");
	return 0;
}
*/

/*
//do-while loop
int main()
{
	int i;

	i = 65;
	do {
		printf("The numeric value of %c is %d.\n", i, i);
		i++;
	}  while (i<72);
	return 0;
}
*/

/*
//for loop - converting 0 through 15 to hex numbers
int main()
{
	int i;

	printf("Hex(uppercase)	Hex(lowercase)	Decimal\n");
	
	for (i = 0; i < 16 ; i++)	{
		printf("%X	%x	%d\n", i, i, i);
	}
	return 0;
}
*/

/*
//for loop - adding multiple expressions
int main()
{
	int i, j;

	for (i=0, j=8; i<8; i++, j--)
		printf("%d + %d = %d\n", i, j, i+j);
	return 0;
}
*/



/*
//for loop - adding multiple expressions b
int main()
{
	int i, j;

	for (i=0, j=1; i<8; i++, j++)
		printf("%d - %d = %d\n", j, i, j - i);
	return 0;
}
*/

//Nested loops
int main()
{
	int i, j;

	for (i=1; i<=3; i++) { //outer loop
		printf("The start of the iteration %d of the outer loop.\n", i);
		for (j=1; j<=4; j++) //inner loop
			printf(" Iteration %d of the inner loop.\n", j);
		printf("The end of iteration %d of the outer loop.\n", i);
	}
	return 0;
}



















































































































































