#include <stdio.h>
int main()
{

    int num;
    int isprime = 1;
    printf("Enter a Number\n");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("%d is not a prime number");
        return 0;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 1)
    {
        printf("the number(%d) is a prime number\n", num);
    }
    else
    {
        printf("the number(%d) is not a prime number\n", num);
    }

    return 0;
}