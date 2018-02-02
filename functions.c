#include<stdio.h>
addition();//function prototype
main()
{
	addition();
}
addition()
{
	int a=0,b=0;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	printf("\nSum= %d",a+b);
}
