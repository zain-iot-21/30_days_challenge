#include <stdio.h>
#include <string.h>

int count_vowels(char *str)
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    int num_vowels = count_vowels(str);

    printf("Number of vowels in the string: %d\n", num_vowels);

    return 0;
}
