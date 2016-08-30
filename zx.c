#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char *q,temp,temp2;
	int i;
	q=malloc(1000000);
	scanf("%s",q);
	i=0;
	if(strlen(q)%2!=0){
	temp2=*(q+(strlen(q)-1));
	}
	while(i<strlen(q)){
		temp=*(q+i);
		*(q+i)=*(q+(i+1));
		*(q+(i+1))=temp;
		i=i+2;
	}
	*(q+(strlen(q)-1))=temp2;
	printf("%s",q);
}
