#include <stdio.h>

int main ()
{
    int presentLetters[26]={0};
    char phrase[201]={0};
    fgets(phrase, 201, stdin);
    for(int i=0; phrase[i]; i++)
    {
        if(phrase[i]=='k' || phrase[i]=='y' || phrase[i]=='w')
        {
            continue;
        }
        else if(phrase[i]>='a' && phrase[i]<='z')
        {
            presentLetters[phrase[i]-'a']++;
        }
    }
    int total=0;
    for(int i=0;i<26;i++)
    {
        if(presentLetters[i]!=0)
        {
            total++;
        }
    }
    if(total==23)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
    return 0;
}