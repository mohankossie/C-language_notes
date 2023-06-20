#include <stdio.h>
#include <time.h>
#include <stdarg.h>

/*
//Function calls
int function_1(int x, int y);
double function_2(double x, double y)
{
	printf("Within function_2.\n");
	return (x-y);
}


main () 
{
	int x1 = 80;
	int y1 = 10;
	double x2 = 100.123456;
	double y2 = 10.123456;

	printf("Pass function_1 %d and %d.\n", x1, y1);
	printf("function_1 returns %d.\n", function_1(x1, y1));
	printf("Pass function_2 %lf and %lf.\n", x2, y2);
	printf("function_2 returns %lf.\n", function_2(x2, y2));
	return 0;
}

//function_1() definition
int function_1(int x, int y)
{
	printf("Within function_1.\n");
	return (x+y);
}
*/



/*
//Functions with no arg - using void in declarations
void GetDateTime(void);

main()
{
	printf("Before the GetDateTime() function is called.\n");
	GetDateTime();
	printf("After the GetDateTime() function is called.\n");
	return 0;
}

//GetDateTime() definition
void GetDateTime(void)
{
	time_t now;

	printf("Within GetDateTime().\n");
	time(&now);
	printf("Current date and time is: %s\n",
		asctime(localtime(&now)));
}
*/



/*
//Processing variable arguments
double AddDouble (int x, ...);

main ()
{
	double d1 = 1.5;
	double d2 = 2.5;
	double d3 = 3.5;
	double d4 = 4.5;

	printf("Given an argument: %2.1f\n", d1);
	printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(1, d1));
	printf("Given arguments: %2.1f and %2.1f\n", d1, d2);
	printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(2, d1, d2));
	printf("Given the argument: %2.1f, %2.1f and %2.1f\n", d1, d2, d3);
	printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(3, d1, d2, d3));
	printf("Given arguments: %2.1f, %2.1f, %2.1f, and %2.1f\n", d1, d2, d3, d4);
	printf("The result returned by AddDouble() is: %2.1f\n", AddDouble(4, d1, d2, d3, d4));
	return 0;
}

//AddDoubule() definition
double AddDouble (int x, ...)
{
	va_list     arglist;
	int i;
	double result = 0.0;

	printf("The number of arguments is: %d\n", x);
	va_start (arglist, x);
	for (i=0; i<x; i++)
		result += va_arg(arglist, double);
	va_end (arglist);
	return result;
}
*/


/*
//Passing arrays to functions
int AddThree(int list[]);

int main()
{
	int sum, list[3];

	printf("Enter three integers separated by spaces:\n");
	scanf("%d%d%d", &list[0], &list[1], &list[2]);
	sum = AddThree(list);
	printf("The sum of the three integrs is: %d\n", sum);

	return 0;

}

int AddThree(int list[])
{
	int i;
	int result = 0;

	for (i=0; i<3; i++)
		result += list[i];
	return result;
}
*/



//Passing pointers to functions
#include <stdio.h>

void ChPrint(char *ch);
int DataAdd(int *list, int max);

int main()
{
	char str[] = "It's a string!";
	char *ptr_str;
	int list[5] = {1, 2, 3, 4, 5};
	int *ptr_int;

	//assign address to a pointer
	ptr_str = str;
	ChPrint(ptr_str);
	ChPrint(str);

	//assign address to a pointer
	ptr_int = list;
	printf("The sum returned by DataAdd(): %d\n", DataAdd(ptr_int, 5));
	printf("The sum returned by DataAdd(): %d\n", DataAdd(list, 5));

	return 0;
}

//function definition
void ChPrint(char *ch)
{
	printf("%s\n", ch);
}

//function definition
int DataAdd(int *list, int max)
{
	int i;
	int sum = 0;

	for (i=0; i<max; i++)
		sum += list[i];
	return sum;
}













































































































































