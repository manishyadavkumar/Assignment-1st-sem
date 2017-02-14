#include<stdio.h>
#include<conio.h>
void mydiv()
{
	printf("it is divisiable by 5 and 7 :\t");
	}
	void mynodiv()
	{
		printf("it is not divisiable by 5 and 7 :\t");
	   }
	   int main()
	   {
	   	int a;
	   	printf("enter a number :\t");
	   	scanf("%d",&a);
	   	if(a%5==0&&a%7==0)
	   	{
	   		mydiv();
		   }
		   else
		   {
		   mynodiv();
	   }
	   return 0;
   }
