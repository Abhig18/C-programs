#include <stdio.h> //Including standard I/O header file

main() //main function
{
	int n,sub,i,j,sum,f; //variable declaration
	printf("Enter the number of students : ");
	scanf("%d",&n); //taking number of students from the user
	printf("\nEnter the number of subjects : ");
	scanf("%d",&sub); //taking number of subjects from the user
	printf("----------------------------------------");
	int marks[n][sub];
	float avg[n];
	for(i=0;i<n;i++) //Loop to take marks from the user
	{		
		sum=0;
		printf("\nEnter marks for student %d :\n",i+1);
		for(j=0;j<sub;j++)
		{
			do
			{
			f=0;			
			scanf("%d",&marks[i][j]);
			if(marks[i][j]>100||marks[i][j]<0) //if marks are greater than 100 or lesser than 0
			{
				f=1;
				printf("Invalid marks, please try again.");
			}
			}while(f==1);
			sum=sum+marks[i][j];
		}
		avg[i]=sum/sub; //calculating average for each student
		printf("----------------------------------------");
	}
	for(i=0;i<n;i++) //Loop to award grade to each student
	{
		printf("\nFor student %d : ",i+1);
		if(avg[i]>=95)
		{
			printf("The Grade is O!");
		}
		else if(avg[i]>=90)
		{
			printf("The Grade is A!");
		}
		else if(avg[i]>=80)
		{
			printf("The Grade is B!");
		}
		else if(avg[i]>=70)
		{
			printf("The Grade is C!");
		}
		else if(avg[i]>=60)
		{
			printf("The Grade is D!");
		}
		else if(avg[i]>=50)
		{
			printf("The Grade is E!");			
		}
		else
		{
			printf("The Grade is F!");
		}
	}
}
