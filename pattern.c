#include<stdio.h>
main()
{
	int i=0,j=0;
	/*print the following pattern:
	*
	* *
	* * *
	* * * *
	* * * * **/
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
