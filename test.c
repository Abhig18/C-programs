#include<stdio.h>
union bill
{
	int rno;
	char de[30];
};
main()
{
	union bill b;
	printf("%d",sizeof(b));
}
