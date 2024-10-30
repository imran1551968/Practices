#include <stdio.h>
#include <conio.h>

void main() 
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d are : ", n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    getch();
}


