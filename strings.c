#include <stdio.h>
#include <string.h>

/*
main()
{
	char str1[] = {'A', ' ',
			's', 't', 'r', 'i', 'n', 'g', ' ',
			'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};
	char str2[] = "Another string constant";
	char *ptr_str= "Assign a string to a pointer";
 	//int i;
	



	Initializing strings
	
	//print out str1 
	for (i=0; str1[i]; i++)
		printf("%c", str1[i]);
	printf("\n");

	//print out str2 
	for (i=0; str2[i]; i++)
		printf("%c", str2[i]);
	printf("\n");

	//Assign a string to a pointer
	ptr_str = "Assign a string to a pointer."; //Not working as its suppusod to, dont know why???
	for (i=0; *ptr_str; i++);
		printf("%c", *ptr_str++);/

	//Measuring string lengths
	printf("The length of str1 is: %lu bytes\n", strlen(str1));
	printf("The length of str2 is: %lu bytes\n", strlen(str2));
	printf("The length of the string assigned to ptr_str is: %lu bytes\n",strlen(ptr_str));
	

	return 0;
}
*/


/*
//Copying strings
main()
{
	char str1[] ="Copy a string.";
	char str2[15];
	char str3[15];
	int i;

	//with strcpy()
	strcpy(str2, str1);

	//without strcpy()
	for (i=0; str1[i]; i++)
		str3[i] = str1[i];
	str3[i] = '\0';

	//display str2 and str3
	printf("The content of str2 using strcpy: %s\n", str2);
	printf("The content of str3 without using strcpy: %s\n", str3);
	return 0;
}
*/



/*
//Using gets() and puts()
int main()
{
	char str[80];
	int i, delt ='a' - 'A';

	printf("Enter a string less than 80 charecters:\n");
	fgets(str, 80, stdin); //gets() is depracated bcoz its dangerous and may cause buffer flow, so I used fgets()
	printf("Entered string is: %s\n", str);

	//From here - the output is not as expected hence the printf() above
	//i = 0;
	//while (str[i]) {
	//	if ((str[i] >= 'a') && (str[i] <= 'z'));
	//		str[i] -= delt; //convert to uppercase
	//	i++;
	//}
	//printf("The entered string is (in uppercase)::\n");
	//puts(str);
	//Till here
	return 0;
}
*/

//USing scanf()
int main()
{
	char str[80];
	int x, y;
	float z;

	printf("Enter two integers separated by a space:\n");
	scanf("%d %d", &x, &y);
	printf("Enter the floating-point number:\n");
	scanf("%f", &z);
	printf("Enter a string:\n");
	scanf("%s", str);
	printf("Here is what you've entered:\n");
	printf("%d %d\n %f\n %s\n", x, y, z, str);
	return 0;
}





































































