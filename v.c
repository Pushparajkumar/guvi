#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	int temp=0;
	int c=0;
	printf("\nEnter a number");
	scanf("%d",&no);
	temp=no;
	//printf("\nlen=%d",temp);
	for(int i=temp;i>0;i--)
	{
		if((no%i)==0)
		c++;
	}
	if(c==2)
	{
	printf("\nprime");
	}	
	else
	{
		printf("\nnot a prime");
	}
return 0;
}
