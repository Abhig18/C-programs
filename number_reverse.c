#include <stdio.h> //including standard I/O header file

void main() //main() function
{
	int num; //variable declaration
	printf("Enter the number to be reversed : ");
	scanf("%d",&num); //number to be reversed
	int t=num,d,rev=0;
	while(t!=0) //loop to reverse the given number
	{
		d=t%10;
		rev=rev*10+d;
		t=t/10;
	}
	printf("Reversed number is : %d",rev); //printing the reversed number
}
