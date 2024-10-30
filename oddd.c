#include<stdio.h>
int main (){
  int number;
  print ("enter a number");
  scanf("%d",&number);
  if (number %2==0)
  {
    printf("%d",number);
    number=number+1;
  
  }
  else 
  printf("%d",number);
  return 0;

}
