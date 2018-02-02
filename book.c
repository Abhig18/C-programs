#include<stdio.h> //including standard I/O header file

struct BOOK //structure book
{
	char title[20];
	char author[20];
	char genre[20];
};

//function prototypes:
read();
display();

void main() //main() function
{
	read();
	display();
}

read() //function to read values
{
	struct BOOK b;
	printf("Enter Title of the book : ");
	scanf("%s",b.title);
	printf("\nEnter Author's name : ");
	scanf("%s",b.author);
	printf("\nEnter Genre : ");
	scanf("%s",b.genre);
	printf("\n---------------------------------------------");
}

display() //function to display values
{
	struct BOOK b;
	printf("\nBook's name : %s",b.title);
	printf("\nAuthor's name : %s",b.author);
	printf("\nGenre : %s",b.genre);
}
