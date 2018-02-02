#include <stdio.h>
#include <string.h>
struct Student
{
  	char name[30];
  	char department[20];
  	int yearOfStudy;
  	float cgpa;
};
int main()
{
	int MAX,i,j,t;
  	char temp1[25],temp2[25];
  	scanf("%d",&MAX);
  	struct Student s[MAX];
  	for(i=0;i<MAX;i++)    
      	scanf("%s%s%d%f",s[i].name,s[i].department,&s[i].yearOfStudy,&s[i].cgpa);
  	for(i=0;i<MAX;i++)
    {
      	for(j=0;j<MAX-i-1;j++)
        {
          	if(strcmp(s[j].name,s[j+1].name)>0)
            {              	
              	strcpy(temp1,s[j].name);
           		strcpy(s[j].name,s[j+1].name);
           		strcpy(s[j+1].name,temp1);
              	strcpy(temp2,s[j].department);
            	strcpy(s[j].department,s[j+1].department);
            	strcpy(s[j+1].department,temp2);
              	s[j].yearOfStudy=s[j].yearOfStudy^s[j+1].yearOfStudy;
              	s[j+1].yearOfStudy=s[j].yearOfStudy^s[j+1].yearOfStudy;
              	s[j].yearOfStudy=s[j].yearOfStudy^s[j+1].yearOfStudy;
              	t=s[j].cgpa;	
              	s[j].cgpa=s[j+1].cgpa;
              	s[j+1].cgpa=t;
            }
        }
    }
  	for(i=0;i<MAX;i++)    
      	printf("Name:%s\nDepartment:%s\nYear of study:%d\nCGPA:%.1f",s[i].name,s[i].department,s[i].yearOfStudy,s[i].cgpa);
	return 0;
}
