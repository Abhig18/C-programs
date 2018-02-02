#include <stdio.h>
#define size 5
struct stack
{
	int top;
	int stk[size];	
};
typedef struct stack STACK;
STACK s;
push();
pop();
display();
search();
void main()
{
	int choice,option=1;
	s.top=-1;		
	while(option==1)
	{
		printf("1. PUSH\n2. POP\n3. DISPLAY\n4. SEARCH\n5. EXIT\nChoose from 1-5 : ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:search();
			break;
			case 5:exit(0);
			break;
			default:printf("INVALID CHOICE");				
		}				
		printf("\nPress 1 to continue and any other number to exit : ");
		scanf("%d",&option);
	}
}
push()
{
	if(s.top==size-1)
	{
		printf("\nStack is full");
	}
	else
	{
		int num;
		printf("Enter number to be entered : ");
		scanf("%d",&num);
		s.top=s.top+1;
		s.stk[s.top]=num;
	}	
}
pop()
{
	if(s.top==-1)
	{
		printf("Stack is empty");		
	}
	else
	{
		printf("Number popped is %d",s.stk[s.top]);
		s.top=s.top-1;		
	}
}
display()
{
	if(s.top==-1)
	{
		printf("Stack is empty");		
	}
	else
	{
		int i;
		for(i=s.top;i>=0;i--)
		{
			printf("%d\n",s.stk[i]);
		}
	}
}


search()
{
	if(s.top==-1)
	{
		printf("Stack is empty");		
	}
	else
	{
		int num,flag=0;
		printf("Enter number to search : ");
		scanf("%d",&num);
		int i;
		for(i=s.top;i>=0;i--)
		{
			if(num==s.stk[i])
			{
				printf("%d is present in the stack",num);				
				flag=1;
				break;
			}			
		}
		if(flag==0)
		{
			printf("%d is not present in the stack",num);
		}
	}
}





