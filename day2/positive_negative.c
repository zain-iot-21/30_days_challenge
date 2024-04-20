#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("the number is positive")
    };
    else if (num < 0)
    {
        printf("the number is Negative")
    };
    else
    {
        printf("the number is zero")
    };
    return 0;
}