#include <stdio.h>
#include <math.h>
int main()
{
	float m;
  	scanf("%f",&m);
  	int r=(int)floor(m);
  	int p=(int)((m-r)*100);  	
  	int count=0,t,f;
  	t=r;
  	while(t>0)
    {
      	count++;
      	t=t/10;
    }  	  	
  	while(count>2)
    {
      	f=r/pow(10,count-1);
      	switch(f)
        {
          case 1:printf("ONE ");
            break;
          case 2:printf("TWO ");
            break;
          case 3:printf("THREE ");
            break;
          case 4:printf("FOUR ");
            break;
          case 5:printf("FIVE ");
            break;
          case 6:printf("SIX ");
            break;
          case 7:printf("SEVEN ");
            break;
          case 8:printf("EIGHT ");
            break;
          case 9:printf("NINE ");
            break;
        }
      	if(count==3)
          	printf("HUNDRED ");
      	else
          	printf("THOUSAND ");      	
      	r=r%((int)pow(10,count-1));
      	count--;
    }
  	if(count==2)
    {
      	f=r/pow(10,count-1);
      	switch(f)
        {
          case 1:printf("TEN ");
            break;
          case 2:printf("TWENTY ");
            break;
          case 3:printf("THIRTY ");
            break;
          case 4:printf("FOURTY ");
            break;
          case 5:printf("FIFTY ");
            break;
          case 6:printf("SIXTY ");
            break;
          case 7:printf("SEVENTY ");
            break;
          case 8:printf("EIGHTY ");
            break;
          case 9:printf("NINETY ");
            break;            
        }   
      	r=r%((int)pow(10,count-1));
      count--;
    }
  	if(count==1)
    {
      	f=r/pow(10,count-1);
      	switch(f)
        {
          case 1:printf("ONE ");
            break;
          case 2:printf("TWO ");
            break;
          case 3:printf("THREE ");
            break;
          case 4:printf("FOUR ");
            break;
          case 5:printf("FIVE ");
            break;
          case 6:printf("SIX ");
            break;
          case 7:printf("SEVEN ");
            break;
          case 8:printf("EIGHT ");
            break;
          case 9:printf("NINE ");
            break;
        }
    }
  	printf("AND PAISE ");
  	f=p/10;
  	switch(f)
        {
          case 1:printf("TEN ");
            break;
          case 2:printf("TWENTY ");
            break;
          case 3:printf("THIRTY ");
            break;
          case 4:printf("FOURTY ");
            break;
          case 5:printf("FIFTY ");
            break;
          case 6:printf("SIXTY ");
            break;
          case 7:printf("SEVENTY ");
            break;
          case 8:printf("EIGHTY ");
            break;
          case 9:printf("NINETY ");
            break;            
        }   
  	f=p%10;
  	switch(f)
    {
          case 1:printf("ONE");
            break;
          case 2:printf("TWO");
            break;
          case 3:printf("THREE");
            break;
          case 4:printf("FOUR");
            break;
          case 5:printf("FIVE");
            break;
          case 6:printf("SIX");
            break;
          case 7:printf("SEVEN");
            break;
          case 8:printf("EIGHT");
            break;
          case 9:printf("NINE");
            break;
    }
	return 0;
}
