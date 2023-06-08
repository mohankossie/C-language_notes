#include <stdio.h>

/*
//if statement in decision making
int main()
{
	int i;

	printf("Integers that can be divided by both 2 and 3\n");
	printf("(Within the range of 0 to 100):\n");
	for (i=0; i<=100; i++) {
		if ((i%2==0) && (i%3==0)) {
			printf( "  %d\n",i);
		}
	}
	return 0;
}
*/



/*
//FizzBuzz example
int main()
{
	int x;

	for (x=0; x<=20; x++) {
		if (x%3 == 0) {
			printf("Fizz\n");
		}
		if (x%5 == 0) {
			printf("Buzz\n");
		}
		if (x%3 == 0 && x%5 == 0) {
			printf("FizzBuzz\n");
		}
	}
	return 0;
}
*/




/*
//if-else statement
int main() 
{
	int i;

	printf("Even Number Odd number\n");
	for (i=0; i<10; i++) {
		if (i%2 ==0) {
			printf("%d", i);
		}
		else {
			printf("%14d\n",i);
		}
	}
	return 0;
}
*/



//Nested if statements
int main()
{
	int i;
 	
	for (i=-5; i<=5; i++) {
		if (i>0) {
			if (i%2 == 0) {
				printf("%d is an even number.\n", i);
			}
			else {
				printf("%d is an odd number.\n", i);
			}
		}
		else if (i == 0) 
			printf("The number is zero\n");
		
		else 
			printf("Negative number: %d\n",i);
		
	}
	return 0;
}











































































