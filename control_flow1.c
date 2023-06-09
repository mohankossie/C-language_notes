#include <stdio.h>

//Switch statement
int main()
{
	int day;

	printf("Please enter a single digit for a day betweet 1 and 5\n");
	
	day = getchar();

	switch (day) {
		case '1':
			printf("Monday\n");
		case '2':
			printf("Tuesday\n");
		case '3':
			printf("Wednesday\n");
		case '4':
			printf("Thursday\n");
		case '5':
			printf("Friday\n");
		default:
			;
	}
	return 0;
}
