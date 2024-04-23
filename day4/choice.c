#include <stdio.h>

int main()
{
    int choice;

    printf("Please choose an option:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Option 3\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("You chose Option 1.\n");
    }
    else if (choice == 2)
    {
        printf("You chose Option 2.\n");
    }
    else if (choice == 3)
    {
        printf("You chose Option 3.\n");
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}