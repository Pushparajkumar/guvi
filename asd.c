#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[10000];
    scanf("%s",s);
    int b[2000],i;
    for(i=0;i<strlen(a);i++){
        if(s[i]=='I'){
            b[i]=1;
        }
        if(s[i]=='V'){
            b[i]=5;
        }
        if(s[i]=='X'){
            b[i]=10;
        }
        if(s[i]=='C'){
            b[i]=100;
        }
        if(s[i]=='L'){
            b[i]=50;
        }
    }
    int sum=0;
    for(i=0;i<strlen(s);i++){
        if(b[i]<b[i+1]){
            sum+=b[i+1]-b[i];
            i++;
            continue;
        }
        sum+=b[i];
    }
    printf("%d",sum);
} 
