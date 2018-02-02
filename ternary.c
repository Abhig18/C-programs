#include<stdio.h>
main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	(age>=21)?printf("Eligible for marriage"):printf("Not Eligible for marriage");
}
