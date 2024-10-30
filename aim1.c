#include <stdio.h>
 #include <conio.h>
 void main() 
{ 
int a, b, c, choice; 
printf("enter the value of a and b"); 
scanf("%d%d", &a, &b);
 printf("1.Addition\n");
 printf("2. Subtraction\n");
 printf("3, Multilication\n");
 printf("4. Divide\n"); 
 printf("enter your choice");
 scanf("%d", &choice);
 switch (choice) 
{ 
case 1: 
c = a + b; 
printf("Addition is %d", c);
 break; 
case 2: 
c = a - b; 
printf("Subtraction is %d", c);
 break; 
 
case 3: 
c = a * b; 
printf("Multiplication is %d", c);
 break; 
 
case 4: 
c = a / b; 
printf("divide is %d", c);
 break;
default :
printf(" please select correct choice");
}
getch();
}

