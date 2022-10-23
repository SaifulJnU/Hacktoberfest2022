#include<stdio.h>
int main()
{
  int num,fac=1;
  printf("\nEnter a number: ");
  scanf("%d",&num);
  for(int i=2;i<=num;i++)
    fac*=i;
  printf("\nFactorial of %d is %d",num,fac);
  return 0;
}
