#include<stdio.h>
main()
{
	//display menu
	printf("Pick an item :\n1. Pen\n2. Pencil\n3. Erase\n4. Book\nSelect item(from 1 to 4)\n");
	//read choice
	int choice=0;
	scanf("%d",&choice);
	//display based on choice
	switch(choice)
	{
	case 1:
		printf("You picked Pen");
		break;
	case 2:
		printf("You picked Pencil");
		break;
	case 3:
		printf("You picked Eraser");
		break;
	case 4:
		printf("You picked Book");
		break;
	default:
		printf("Invalid choice");
	}
}
