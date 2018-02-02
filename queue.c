#include <stdio.h> //including standard I/O header file
#define size 5 //defining size of queue

int f=-1,r=-1; //front and rear ends
int q[size]; //queue array

//defining function prototype:
void ins();
void del();
void find();
void show();

void main()//main() function
{
	int c=0,opt=1; //for the menu and to whether continue or not
	while(opt==1)
	{
		printf("1. Insertion\n2. Deletion\n3. Search\n4. Display\n5. Exit\n. Choose from 1 to 5 : ");//menu
		scanf("%d",&c);//user's choice
		switch(c)
		{
			case 1:ins(); //to insert a number
			break;
			case 2:del(); //to delete a number
			break;
			case 3:find(); //to find a number
			break;
			case 4:show(); //to show the queue
			break;
			case 5:exit(0); //to exit the program
			break;
			default: //if the choice is wrong
			printf("\nINVALID CHOICE\nTry again");
		}
		printf("\nChoose 1 to continue and any other number to exit : "); //whether user wants to continue or not
		scanf("%d",&opt);
	}
}

void ins() //function to insert a number from rear end
{
	if(r<size-1)	//if the queue is not full
	{
		int num=0;
		printf("\nEnter number to be added : ");
		scanf("%d",&num); //number to be added
		q[++r]=num; //storing the number
		if(f==-1)
		{ 
			f=0;
		}	
	}
	else //if queue is full
	{
		printf("\nQueue is full");	
	}	
}

void del() //function to delete the number at front end
{
	if(f==-1) //if queue is empty
	{
		printf("\nQueue is empty");
	}
	else //if queue is not empty
	{
		printf("\nNumber deleted is %d",&q[f]);	
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			f++;
		}
	}
}

void find() //function to search for a number in the queue
{
	if(f==-1) //if queue is empty
	{
		printf("\nQueue is empty");
	}
	else //if queue is not empty
	{
		int n=0,i,flag=0;
		printf("\nEnter the number to be searched : ");
		scanf("%d",&n); //the number to be searched in the queue
		for(i=f;i<=r;i++)
		{
			if(n==q[i])
			{
				printf("\n%d is present in the queue",&n);
				flag=1;
				break;
			}			
		}
		if(flag==0)
		{
			printf("\n%d is not present in the queue",&n);
		}
	}
}
	
void show()
{
	if(f==-1)
	{
		printf("\nQueue is empty");	
	}
	else
	{
		int i;
		for(i=f;i<=r;i++)
		{
			printf("\t%d",q[i]);
		}
	}
}
