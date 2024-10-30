#include <stdio.h>

int main() {
    // Declare variables to store subject marks
    float subject1, subject2, subject3, subject4, subject5;

    // Get marks for each subject
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);

    printf("Enter marks for Subject 4: ");
    scanf("%f", &subject4);

    printf("Enter marks for Subject 5: ");
    scanf("%f", &subject5);

    // Calculate total marks
    float totalMarks = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate average marks
    float averageMarks = totalMarks / 5;

    // Determine division based on average marks
    if (averageMarks >= 75) {
        printf("Division: Distinction\n");
    } else if (averageMarks >= 60) {
        printf("Division: First Class\n");
    } else if (averageMarks >= 50) {
        printf("Division: Second Class\n");
    } else if (averageMarks >= 40) {
        printf("Division: Pass Class\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}

