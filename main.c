#include <stdio.h>

int main() {
    // Declare variables to store the numbers
    int num1, num2, sum;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second number from the user
    scanf("%d", &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

