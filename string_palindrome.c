#include <stdio.h>
#include <string.h>

void main()
{
	char s[30],rev[30];
	printf("Enter a word : ");
	scanf("%s", s);
	printf("\n%s\t%s",s,strrev(s));	
}
