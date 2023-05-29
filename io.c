#include <stdio.h>


/*
//getc() reads a charecter from a file stream and returns the charecter as an integer
//Reading charecter entered by user by calling getc()
int main()
{
	int ch;

	printf("Please type in a charecter: \n");
	ch = getc(stdin);
		printf("The charecter you just entered is: %c\n", ch);
	return 0;
}
*/




/*
//getchar() is equivalent to getc(stdin)
//Reading in acharecter by calling getchar()
int main()
{
	int ch1, ch2;

	printf("Please enter 2 charecters, one after the other: \n");
	ch1 = getc(stdin);
	ch2 = getchar();
	printf("The first charecter you entered is: %c\n", ch1);
	printf("The second charecter you entered is: %c\n", ch2);
	return 0;
}
*/

/*
//putc() writes a charecter to a specified file stream
//Outputing a charecter with putc()
int main()
{
	int ch;

	ch = 65;  //The numeric value of A
	printf("The charecter that has a numeric value of 65 is: \n");
	putc(ch,stdout);
	return 0;
}
*/


//putchar() can also be used to put a charecter on the screen
//Outputing charecters with putchar()
int main()
{
putchar(65);
	putchar(10);
		putchar(66);
			putchar(10);
		putchar(67);
	putchar(10);
return 0;
}
