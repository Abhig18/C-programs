#include <stdio.h> //including standard I/O header file

void main() //main() function
{
	int i,n,f=1; //variable declaration
	printf("Enter number whose factorial is required : ");
	scanf("%d",&n); //taking input from the user
	for(i=1;i<=n;i++) //Loop to calculate the factorial
	{
		f=f*i;
	}
	printf("\nFactorial of %d is %d",n,f); //displaying factorial
}
