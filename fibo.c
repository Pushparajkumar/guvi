#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("\nEnter a number");
scanf("%d",&n);
for(int i=1;i<=15;i++)
{
	printf("\n%d * %d = %d",n,i,n*i);
}
return 0;
}
