#include<stdio.h>
main()
{
	//initialize the string
	char data[20];
	char key;
	//read the input
	printf("Enter a string(max 20 characters): ");
	gets(data);
	printf("\nEnter the character to be searched: ");
	scanf("%c",&key);
	int i,count=0;
	for(i=0;data[i]!='\0';i++)
	{
		if(key==data[i])
		{
			count++;
		}
	}
	printf("The frequency of '%c' in string '%s' is %d",key,data,count);
}
