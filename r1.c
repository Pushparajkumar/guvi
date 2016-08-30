#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	int temp=0;
	int i=0;
	printf("\nEnter a number");
	scanf("%d",&no);
	temp=no;
	while(temp>0)
	{
		temp=temp/10;
		i++;
	}
	printf("\n%d",i);
	return 0;
}
