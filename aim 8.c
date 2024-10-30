#include <stdio.h>

void printBoundaryElements(int matrix[10][10], int rows, int cols) {
    if (rows <= 0 || cols <= 0) {
        printf("Invalid matrix size.\n");
        return;
    }

    printf("Boundary elements of the matrix:\n");

    // Print the top row
    for (int i = 0; i < cols; i++) {
        printf("%d ", matrix[0][i]);
    }

    // Print the rightmost column (excluding the top and bottom elements to avoid repetition)
    for (int i = 1; i < rows - 1; i++) {
        printf("%d ", matrix[i][cols - 1]);
    }

    // Print the bottom row in reverse order
    if (rows > 1) {
        for (int i = cols - 1; i >= 0; i--) {
            printf("%d ", matrix[rows - 1][i]);
        }
    }

    // Print the leftmost column in reverse order (excluding the top and bottom elements)
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--) {
            printf("%d ", matrix[i][0]);
        }
    }

    printf("\n");
}

int main() {
    int rows, cols;

    // Input matrix size from the user
    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);

    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);

    int matrix[10][10];

    // Input matrix elements from the user
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print boundary elements
    printBoundaryElements(matrix, rows, cols);

    return 0;
}

