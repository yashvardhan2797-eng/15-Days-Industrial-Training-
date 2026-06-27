#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    for(i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum = %d", sum);

    return 0;
}