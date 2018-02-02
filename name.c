#include <stdio.h> //including I/O header file
#include <string.h> //including string header file
void main() //main() function
{
	char first[15]; //first name
	char last[15]; //last name
	printf("Enter first name : ");
	scanf("%s",&first);
	printf("\nEnter last name : ");
	scanf("%s",&last);
	char name[30];	//full name
	printf("Full name : %s",strcat(first,last)); //to concatenate two strings
}
