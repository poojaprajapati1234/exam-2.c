#include<stdio.h>
#include<conio.h>
//wap to find max number  and sum number in 1d array
main()
{
	int a,b,c,n,sum=0,ans;
	printf("enter number is a:");
	scanf("%d",&a);
	printf("enter number is b:");
	scanf("%d",&b);
	printf("enter number is c:");
	scanf("%d",&c);
	
	
	
	if(a<b)
	{
		if(a<c)
		{
			printf("a is maximum ! %d");
		}
		else
		{
			printf("c is maximum ! %d");
		}
	}
	else
	{
		if(b<c)
		{
			printf("b is maximum ! %d");
		}
		else
		{
			printf("c is maximum ! %d");
		}
	}
	printf("\n");
	
	sum = a+b+c;
	printf("sum is :%d",a+b+c);
	scanf("%d",& a,b,c);
	

		
	
	
	
}
