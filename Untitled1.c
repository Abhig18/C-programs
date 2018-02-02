#include<stdio.h>

struct BOOK
{
	char title[20];
	char author[20];
	char genre[20];
};

read();
display();

void main()
{
	read();
	display();
}

read()
{
	struct BOOK b;
	printf("Enter Title of the book : ");
	scanf("%s",&b.title);
	printf("\nEnter Author's name : ");
	scanf("%s",&b.author);
	printf("\nEnter Genre : ");
	scanf("%s",&b.genre);
}

display()
{
	struct BOOK b;
	printf("\nBook's name : %s",b.title);
	printf("\nAuthor's name : %s",b.author);
	printf("\nGenre : %s",b.genre);
}
