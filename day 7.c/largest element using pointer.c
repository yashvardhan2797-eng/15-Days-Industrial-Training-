#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int *ptr, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;
    max = *ptr;

    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Largest Element = %d", max);

    return 0;
}