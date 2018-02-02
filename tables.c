#include<stdio.h> //including standard I/O header file

void main() //main() function
{
	int n,i; //variable declaration
	printf("Enter the number whose table is required : ");
	scanf("%d",&n); //taking input from the user
	for(i=1;i<=10;i++) //loop to calculate multiplication table
	{
		printf("\n%d * %d = %d",n,i,(n*i));
	}
}
