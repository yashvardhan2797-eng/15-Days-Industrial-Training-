#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    printf("Value = %d\n", *ptr);
    printf("Address = %p", (void *)ptr);

    return 0;
}