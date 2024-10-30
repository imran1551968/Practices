  #include <stdio.h>
#include<conio.h>
 void main()
{ 
int a,b,c;
 int grater; 
 
printf("Enter any there numbers: "); 
scanf("%d\n%d\n%d",&a,&b,&c); 
grater=(a>b) ? ((a>c) ? a:b):((b>c) ? b:c);
printf("the gratest number is : %d ",grater);
printf("\n jay ");
    getch(); 
} 

