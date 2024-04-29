#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
