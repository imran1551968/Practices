#include <stdio.h>
#include <conio.h>
#define ROW 3
#define COL 3
int printBoundaryElements(int matrix[ROW][COL]) {
    if (ROW == 1)
    {
        for (int i = 0; i < COL; i++)
        {
            printf("%d ", matrix[0][i]);
        }
    } 
   else if (COL == 1)
    {
        for (int i = 0; i < ROW; i++) 
        {
            printf("%d ", matrix[i][0]);
        }
    } else
    {
        for (int i = 0; i < COL; i++) 
        {
            printf("%d ", matrix[0][i]);
        }
        for (int i = 1; i < ROW; i++)
        {
            printf("%d ", matrix[i][COL - 1]);
        }
        for (int i = COL - 2; i >= 0; i--)
        {
            printf("%d ", matrix[ROW - 1][i]);
        }
        for (int i = ROW - 2; i > 0; i--) 
        {
            printf("%d ", matrix[i][0]);
        }
    }
}

int main()
{
    int matrix[ROW][COL] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("Boundary elements of the matrix: ");
    printBoundaryElements(matrix);
    return 0;
}

