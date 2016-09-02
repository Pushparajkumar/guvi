#include <stdio.h>
int main(void) {
	int i,c=0,l;
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
	    if(i%2==1)
	    c=c+i;
	}
	printf("%d",c);
	return 0;
}
