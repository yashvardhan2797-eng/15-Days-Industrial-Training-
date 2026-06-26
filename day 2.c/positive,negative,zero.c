#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    if (num > 0)
        printf("positive number");
    else if (num < 0)
        printf("negative number");
    else
        printf("the entered number is zero");
    return 0;
}
