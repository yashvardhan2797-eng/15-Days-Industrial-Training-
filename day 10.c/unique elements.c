#include <stdio.h>

int main()
{
    int arr[100], n, i, j, unique;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Unique Elements:\n");

    for(i=0;i<n;i++)
    {
        unique=1;

        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                unique=0;
                break;
            }
        }

        if(unique)
            printf("%d ",arr[i]);
    }

    return 0;
}