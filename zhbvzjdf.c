#include<stdio.h>
int main ()
{
  int num1,num2,num3;
   printf("enter the first number");
   scanf("%d",&num1);
  printf("enter the second number");
  scanf("%d",&num2);
  printf("enter the third number");
  scanf("%d",&num3);
int greater = (num1 > num2 && num1 > num3) ? num1 : ((num2 > num3) ? num2 : num3);
  printf("The greater number is %d\n", greater);
  return 0;
}
