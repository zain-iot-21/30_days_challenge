#include <stdio.h>

#define MAX 100

int main()
{
    int array[MAX];
    int size, i;
    int max;

    printf("Enter the size of the array (max %d): ", MAX);
    scanf("%d", &size);

    if (size <= 0 || size > MAX)
    {
        printf("Invalid size. Size should be between 1 and %d.\n", MAX);
    }

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    max = array[0];

    for (i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
