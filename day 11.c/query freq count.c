#include <stdio.h>

int main()
{
    int arr[100];
    int n,q,i,key,count;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter number of queries: ");
    scanf("%d",&q);

    while(q--)
    {
        printf("Enter element to search: ");
        scanf("%d",&key);

        count=0;

        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
                count++;
        }

        printf("Frequency = %d\n",count);
    }

    return 0;
}