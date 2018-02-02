#include <stdio.h> //including standard I/O header file
#include <string.h> //including string header file

main() //main() function
{
	char wrd[20]; //word to check for palindrome
	int flag=0,i; //variable declaration
	printf("Enter a word : ");
	scanf("%s",wrd); //accepting word from user
	int len=strlen(wrd); //length of word
	for(i=0;i<len;i++) //loop to check for palindrome
	{
        if(wrd[i]!=wrd[len-i-1])
		{
            flag=1;
            break;
		}
	}
    
    if (flag==1) 
        printf("%s is not a palindrome",wrd);
    else 
        printf("%s is a palindrome",wrd);
}
