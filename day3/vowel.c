#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char alphabet;
    printf("Please Enter a Alphabet\n");
    scanf("%c", &alphabet);
    alphabet = tolower(alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        printf("the Alphabet(%c) is a Vowel", alphabet);
    }
    else if (alphabet >= 'a' && alphabet <= 'z')
    {
        printf("the Alphabet(%c) is Consonant", alphabet);
    }
    else
    {
        printf("Please Enter a alphabet and try again");
    }

    return 0;
}