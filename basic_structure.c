#include <stdio.h>
struct student
{
	int rno; //roll number of the student
	char name[20]; //name of the student
	int mks[5]; //marks of the student in 5 subjects
};

main()
{
	struct student stu1,stu2; //for two different students
	printf("Enter roll number of first and second student : ");
	scanf("%d%d",&stu1.rno,&stu2.rno); //Accepting roll numbers of both the students
	printf("\nEnter name of first student : \n");
	scanf("%s",stu1.name); //Accepting name of first student
	printf("\nEnter name of second student : \n");
	scanf("%s",stu2.name); //Accepting name of second student
	printf("\nEnter marks in 5 subjects for both the student");
	int i=0;
	for(i=0;i<5;i++) //Accepting marks of both the students
	{
		scanf("%d",&stu1.mks[i]);
		scanf("%d",&stu2.mks[i]);
	}
	//Printing info of student 1:
	printf("\nSTUDENT 1 INFO :\nRoll number : %d\nName : %s",stu1.rno,stu1.name); 
	for(i=0;i<5;i++)
	{
		printf("\nMarks in subject %d : %d",(i+1),stu1.mks[i]);	
	}
	//Printing info of student 2:
	printf("\nSTUDENT 2 INFO :\nRoll number : %d\nName : %s",stu2.rno,stu2.name); 
	for(i=0;i<5;i++)
	{
		printf("\nMarks in subject %d : %d",(i+1),stu2.mks[i]);	
	}	
}
