#include <stdio.h>

/*
//Defining enum data types
int main()
{
	enum language {human=100, animal, computer};
	enum days{SUN, MON, TUE, WED, THU, FRI, SAT};

	printf("human: %d, animal: %d, computer: %d\n", human, animal, computer);
	printf("SUN: %d\n", SUN);
	printf("MON: %d\n", MON);
	printf("TUE: %d\n", TUE);
	printf("WED: %d\n", WED);
	printf("THU: %d\n", THU);
	printf("FRI: %d\n", FRI);
	printf("SAT: %d\n", SAT);
}
*/


/*
//Using the enum data type
int main()
{
	enum units{penny=1, nickel=5, dime=10, quarter=25, dollar=100};
	int money_units[5]={dollar, quarter, dime, nickel, penny};
	char *unit_name[5] = {"dollar(s)","quarter(s)","dime(s)","nickel(s)","penny(s)"};
	int cent, tmp, i;

	printf("Enter a monetary value in cents:\n");
	scanf("%d", &cent); //getting input from the user
	printf("Which is equivalent to:\n");
	tmp = 0;
	for (i=0; i<5; i++){
		tmp = cent/money_units[i];
		cent -= tmp*money_units[i];
	if (tmp)
		printf("%d %s ", tmp, unit_name[i]);
	}
	printf("\n");
	return 0;
}
*/



/*
//Using typedef definitions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum constants{ITEM_NUM = 3, DELT='a'-'A'};
typedef char *STRING[ITEM_NUM];
typedef char *PTR_STR;
typedef char CHAR;
typedef int INTEGER;

void Convert2Upper(PTR_STR str1, PTR_STR str2);

main()
{
	STRING str;
	STRING moon = {"Whatever we wear","we become beautiful","moon viewing"};
	INTEGER i;
	INTEGER term = 0;

	for (i=0; i<ITEM_NUM; i++){
		str[i]=malloc((strlen(moon[i])+1) * sizeof(CHAR));
		if (str[i] == NULL){
			printf("malloc() failed.\n");
			term = 1;
			i = ITEM_NUM; //break the for loop
		}
		Convert2Upper(moon[i], str[i]);
		printf("%s\n",moon[i]);
	}
	for (i=0; i<ITEM_NUM; i++){
		printf("\n%s", str[i]);
		free (str[i]);
	}
	printf("\n");
	return term;
}

void Convert2Upper(PTR_STR str1, PTR_STR str2)
{
	INTEGER i;

	for (i=0; str1[i]; i++){
		if ((str1[i] >= 'a') &&
			(str1[i] <= 'z'))
			str2[i]=str1[i] - DELT;
		else
			str2[i]=str1[i];
	}
	str2[i]='\0'; //Adding null charecter
}
*/


/*
//Calling a recursive function
enum con{MIN_NUM=0, MAX_NUM=100};
int fRecur(int n);

int main()
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;
	for (i=1; i<=MAX_NUM; i++){
		sum1 += i;
	}
	printf("The value of sum1 is %d.\n", sum1);
	sum2 = fRecur(MAX_NUM);
	printf("The value returned by fRecuer() is %d.\n", sum2);

	return 0;
}

int fRecur(int n)
{
	if (n == MIN_NUM)
		return 0;
	return fRecur(n-1) + n;
}
*/




//Passing command line arguments to the main()
int main(int argc, char *argv[])
{
	int i;

	printf("The value received by argc is %d.\n", argc);
	printf("There are %d command-line arguments passed to main().\n", argc);

	if(argc) {
		printf("The first command-line argument is: %s\n", argv[0]);
		printf("The rest of the command-line arguments are:\n");
		for (i=1; i<argc; i++)
			printf("%s\n", argv[i]);
	}
	return 0;
}











































































































