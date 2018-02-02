#include<stdio.h>
main()
{
	int marks[5];
	int i;
	float sum=0;
	printf("Enter marks in 5 subjects: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
		
	}
	float average=sum/5;
	printf("\nAverage of the marks is %f",average);
	char grade=' ';
	if(average>=90)
	{
		grade='O';
	}
	else if(average>=80&&average<90)
	{
		grade='A';
	}
	else if(average>=70&&average<80)
	{
		grade='B';
	}
	else if(average>=60&&average<70)
	{
		grade='C';
	}
	else if(average>=50&&average<60)
	{
		grade='D';
	}
	else
	{
		grade='F';
	}
	printf("\nGrade is: %c",grade);
}
