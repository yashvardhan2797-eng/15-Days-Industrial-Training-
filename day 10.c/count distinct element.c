#include <stdio.h>

int main()
{
    int arr[100], n, i, j, count=0, distinct;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        distinct=1;

        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                distinct=0;
                break;
            }
        }

        if(distinct)
            count++;
    }

    printf("Distinct Elements = %d",count);

    return 0;
}