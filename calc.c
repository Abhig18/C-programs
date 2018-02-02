#include<stdio.h>
main()
{
	//declare the variables for storing the numbers
	int num1=0,num2=0,sum=0,dif=0,rem=0;
	float mul=0,div=0;
	//read the values
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	//calculations
	sum=num1+num2;
	dif=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	rem=num1%num2;
	//display
	printf("-----------------------------------------\n");
	printf("The results are : \nAddition=%d\nSubtraction=%d\nMultiplication=%f\nDivision=%f\nRemainder=%d",sum,dif,mul,div,rem);
}
