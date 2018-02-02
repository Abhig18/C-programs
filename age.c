#include<stdio.h>
main()
{
	//read the age from the user
	printf("Enter age : ");
	int age=0;
	scanf("%d",&age);
	//check on that age
	if(age>=18)
	{
		//what happens if condition is true
		printf("You can vote");
	}
	else
	{
		//what happens if condition is false
		printf("You cannot vote");
	}
}
