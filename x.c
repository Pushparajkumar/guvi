#include <stdio.h>
int main()
{
  int m, reverse=0, rem,temp;
  printf("Enter an integer: ");
  scanf("%d", &m);
  temp=m;
  while(temp!=0)
  {
  rem=temp%10;
  reverse=reverse*10+rem;
  temp/=10;
  }
  if(reverse==m)  
  printf("%d is a palindrome.",m);
  else
  printf("%d is not a palindrome.",m);
  return 0;
}
