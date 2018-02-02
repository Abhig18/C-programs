#include <stdio.h>

void main()
{
	int a,b,c;
	float avg,sum;
	printf("Enter marks in three subjects : ");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("\n\nSum : %.2f\nAverage : %.2f",sum,avg);
}
