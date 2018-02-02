#include <stdio.h> //including standard I/O header file

void main() //main() function
{
	int i,j; //variable declaration
	for(i=5;i>=1;i--) //loop to print the given pyramid
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf(" ");
	}
}
