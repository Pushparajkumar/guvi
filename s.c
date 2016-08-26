#include<stdio.h>
#include<conio.h>
int main()
{
int no[3];
int result=0;
for(int i=0;i<3;i++)
{
scanf("%d",&no[i]);
}
for(int i=0;i<3;i++)
{
	if(no[i]>result)
	{
		result=no[i];
	}
}
printf("\n%d",result);
return 0;
}
