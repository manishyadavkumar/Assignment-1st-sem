#include<stdio.h>
#include<conio.h>
void addition(int a,int b)
{
	int sum;
	sum=a+b;
	printf("\n the sum is %d",sum);
    }
    int main()
    {
    	int a,b;
    	printf("\n enter two numbers :\t");
    	scanf("%d%d",&a,&b);
    	addition(a,b);
    	return 0;
	}
    
    
