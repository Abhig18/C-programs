#include <stdio.h>
struct bill
{
	int bno; //bill number
	char date[11]; //dd-mm-yyyy
	char desc[30]; //bill description
	float amt;
};

main()
{
	struct bill b;
	printf("Choose an option :\n1. Bill\n2. Quit\nChoose 1 or 2");
	int c;
	scanf("%d",&c);
	if(c==1)
	{
		printf("Enter the bill details :\n1. Bill number: ");
		scanf("%d",&b.bno);
		printf("\n2. Date: ");
		scanf("%s",&b.date);
		printf("\n3. Description: ");
		scanf("%s",&b.desc);
		printf("\n4. Bill amount: Rs.");
		scanf("%f",&b.amt);
		printf("\nBill details :\n1. Bill number : %d\n2. Date : %s\n3. Description : %s\n4. Bill amount : Rs.%f",b.bno,b.date,b.desc,b.amt);
	}
	else if(c==2)
	{
		exit(0);
	}
	else
	{
		printf("\nInvalid Choice.");
	}
}
