#include <stdio.h>

int binaryToDecimal(int binaryNum)
{
    int decimalNum = 0;
    int base = 1;

    while (binaryNum > 0)
    {
        int lastDigit = binaryNum % 10;
        binaryNum = binaryNum / 10;
        decimalNum += lastDigit * base;
        base *= 2;
    }

    return decimalNum;
}

int main()
{
    int binaryNum;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);

    int decimalNum = binaryToDecimal(binaryNum);

    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}
