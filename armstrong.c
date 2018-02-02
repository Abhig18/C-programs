#include <stdio.h> //including standard I/O header file
#include <math.h> //including math header file

void main() //main() function
{
	int n,d,q=0,t,c=0; //variable declaration
	printf("Enter a number : ");
	scanf("%d",&n); //Number to check for armstrong
	t=n;
	while(t!=0) //Loop to count number of digits
	{
		t=t/10;
		c++;
	}
	t=n;
	while(t!=0) //Loop to add the sum of cube of digits
	{
		d=t%10;
		q=q+pow(d,c);
		t=t/10;
	}	
	if(n==q) //If number is armstrong
	{
		printf("\n%d is an armstrong number",n);
	}
	else //If loop is not armstrong
	{
		printf("\n%d is not an armstrong number",n);
	}
}
