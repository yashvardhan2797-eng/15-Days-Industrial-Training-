#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char words[50][20];
    int count[50]={0};
    int n=0,i,j;

    printf("Enter sentence:\n");
    fgets(str,sizeof(str),stdin);

    char *token=strtok(str," \n");

    while(token!=NULL)
    {
        int found=0;

        for(i=0;i<n;i++)
        {
            if(strcmp(words[i],token)==0)
            {
                count[i]++;
                found=1;
                break;
            }
        }

        if(!found)
        {
            strcpy(words[n],token);
            count[n]=1;
            n++;
        }

        token=strtok(NULL," \n");
    }

    printf("\nWord Frequency:\n");

    for(i=0;i<n;i++)
        printf("%s = %d\n",words[i],count[i]);

    return 0;
}