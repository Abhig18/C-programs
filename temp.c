#include <stdio.h> //including standard I/O header file

main() //main() function
{
	int choice; //variable declaration
	float c,f; //variable declaration
	printf("1. Celcius to Fahrenheit\n2. Fahrenheit to Celcius\n3. Exit"); //Giving choice to user
	printf("\nEnter your choice : ");
	scanf("%d",&choice); //Taking the choice from user
	switch(choice)
	{
		case 1: //celcius to fahrenheit
			printf("\nEnter temperature in celcius : ");
			scanf("%f",&c);
			f=((9/5.0)*c)+32;
			printf("\nTemperature in fahrenheit : %.2f",f);
			break;
		case 2: //fahrenheit to celcius
			printf("\nEnter temperature in fahrenheit : ");
			scanf("%f",&f);
			c=((5*f)-160)/9.0;
			printf("\nTemperature in celcius : %.2f",c);
			break;
		case 3: //to exit the program
			exit(0);
			break;
		default: //any other choice
			printf("\nInvalid Choice");
	}
	
}
