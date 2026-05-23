#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d\n",&n,&m);
    char alphabet[1000]={0};
    char phrase[1000]={0};
    fgets(alphabet, 1000, stdin);
    int i=0;
    while(alphabet[i]!='\0')
    {
        if(alphabet[i]=='\n')
        {
            alphabet[i]='\0';
        }
        i++;
    }
    fgets(phrase, 1000, stdin);
    i=0;
    while(phrase[i]!='\0')
    {
        if(phrase[i]=='\n' || phrase[i]==EOF)
        {
            phrase[i]='\0';
        }
        i++;
    }
    int control;
    i=0;
    while(phrase[i]!='\0')
    {
        control=0;
        for(int j=0;alphabet[j]!='\0';j++)
        {
            if(phrase[i]==alphabet[j])
            {
                control=1;
                break;
            }
        }
        if(control==0)
        {
            printf("N\n");
            return 0;
        }
        i++;
    }
    printf("S\n");
    return 0;
}