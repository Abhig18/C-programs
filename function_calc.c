#include<stdio.h>
addition();
int subtraction();
multiplication(int a,int b);
int division(int a,int b);
main()
{
	int x=0,y=0;
	addition();
	int dif=subtraction();
	printf("\nDifference = %d",dif);
	printf("\nEnter two numbers for multiplication ");
	scanf("%d%d",&x,&y);
	multiplication(x,y);
	printf("\nEnter two numbers for division ");
	scanf("%d%d",&x,&y);
	int quo=division(x,y);
	printf("\nQuotient = %d",quo);
}
addition()
{
	int a=0,b=0;
	printf("Enter two numbers for addition ");
	scanf("%d%d",&a,&b);
	printf("\nSum = %d",a+b);
}
int subtraction()
{
	int a=0,b=0;
	printf("\nEnter two numbers for subtraction ");
	scanf("%d%d",&a,&b);
	return a-b;
}
multiplication(int a,int b)
{
	printf("\nProduct = %d",a*b);
}
int division(int a,int b)
{
	return a/b;
}
