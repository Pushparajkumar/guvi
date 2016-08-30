#include<stdio.h>
#include<conio.h>
int main()
{
	int lo=0;
	int hi=0;
	int c=0;
	printf("\nEnter lower limit");
	scanf("%d",&l);
	printf("\nEnter upper limit");
	scanf("%d",&hi);
	for(int i=lo;i<=hi;i++)
	{
		if((i%2)=0)
		printf("\t%d",i);
	}
return 0;
}
