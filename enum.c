#include<stdio.h>
enum day
{
	mon,tue,wed,thurs,fri,sat,sun
};

main()
{
	enum day today;
	printf("Which day is today(enter number representing the day)? ");
	scanf("%d",&today);
	if(today-1==mon)
	{
		printf("Today is Monday");
	}
	else if(today-1==tue)
	{
		printf("Today is Tueday");		
	}
	else if(today-1==wed)
	{
		printf("Today is Wednesday");
	}
	else if(today-1==thurs)
	{
		printf("Today is Thursday");
	}
	else if(today-1==fri)
	{
		printf("Today is Friday");		
	}
	else if(today-1==sat)
	{
		printf("Today is Saturday");
	}
	else
	{
		printf("Today is Sunday");
	}
}
