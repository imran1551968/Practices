#include <stdio.h>
#include <conio.h>
#include <string.h>

Void main()
{
    char username[20];
    char password[20];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(username, "imran") == 0 && strcmp(password, "123456") == 0)
    {
        printf("Welcome, %s! Authentication successful.\n", username);
    }
    else
    {
        printf("Invalid user credentials. Please try again.\n");
    }

    getch();
}

