#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256]={0};
    int i;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++)
        freq[(int)str[i]]++;

    for(i=0;str[i]!='\0';i++)
    {
        if(freq[(int)str[i]]==1)
        {
            printf("First Non-Repeating Character = %c",str[i]);
            return 0;
        }
    }

    printf("No Non-Repeating Character");

    return 0;
}