#include <stdio.h>

#define MAX 100

int main()
{
    int array[MAX];
    int size, i;

    printf("Enter the size of the array (max %d): ", MAX);
    scanf("%d", &size);

    // Check if the size is within the allowed range
    if (size <= 0 || size > MAX)
    {
        printf("Invalid size. Size should be between 1 and %d.\n", MAX);
        return 1; // Exit the program with an error status
    }

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("The elements you entered are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
