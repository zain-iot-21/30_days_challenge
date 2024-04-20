#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("the sum of the %d and %d is %d\n", num1, num2, num1 + num2);

    printf("the average of the %d and %d is %d\n", num1, num2, (num1 + num2) / 2);
    return 0;
}