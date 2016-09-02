#include<stdio.h>
int main()
{
	int num,sum,c_num;
	scanf("%d",&num);
	sum=0;
	c_num=num;
	while(num)
	{
	sum+=num%10;
	num/=10;
	}
	if(sum==c_num)
	printf("Yes palindrome\n");
	else
	printf("No not palindrome\n");
}
