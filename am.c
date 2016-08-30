#include<stdio.h>
#include<conio.h>
int main()
{
	int l=0;
	int h=0;
	int c=0;
	int temp=0;
	printf("\nEnter lower limit");
	scanf("%d",&l);
	printf("\nEnter upper limit");
	scanf("%d",&h);
	temp=l;
	for(int i=temp;i<=h;i++)
	{
	int j=i;
		while(j!=0)
		{
		if((i%j)==0)
		c++;
		j--;
		}
		if(c==2)
		printf("\t%d",i);
	c=0;
	}
return 0;
}
