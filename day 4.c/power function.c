#include <stdio.h>

int power(int base, int exp)
{
    int i, result = 1;

    for (i = 1; i <= exp; i++)
        result *= base;

    return result;
}

int main()
{
    int base, exp;

    printf("Enter base and exponent: ");
    scanf("%d%d", &base, &exp);

    printf("Power = %d", power(base, exp));

    return 0;
}