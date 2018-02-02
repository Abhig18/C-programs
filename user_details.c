#include<stdio.h> //including standard I/O header file

void main() //main() function
{
	char name[50]; //to store user's name
	int age=0; //to store user's age
	long long phone=0; //to store user's phone number
	printf("Enter your name : ");
	gets(name); //to take user's name as input
	printf("\nEnter your phone number : ");
	scanf("%lld",&phone); //to take user's phone number as input
	printf("\nEnter your age : ");
	scanf("%d",&age); //to take user's age as input
	printf("\n----------------------------------");
	printf("\nUser details :-\nName : %s \nPhone number : %lld \nAge : %d",name,phone,age); //to display name, age and phone number of user
}
