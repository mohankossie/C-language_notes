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
			break;
		case '2':
			printf("Tuesday\n");
			break;
		case '3':
			printf("Wednesday\n");
			break;
		case '4':
			printf("Thursday\n");
			break;
		case '5':
			printf("Friday\n");
		default:
			;
	}
	return 0;
}
