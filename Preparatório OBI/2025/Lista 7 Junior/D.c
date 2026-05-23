#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    char phrase1[201]={0};
    char phrase2[201]={0};
    scanf(" %[^\n]\n", phrase1);
    scanf(" %[^\n]", phrase2);
    int presentLetters1[26]={0};
    int presentLetters2[26]={0};
    for(int i=0; phrase1[i]; i++)
    {
        if(phrase1[i]>='a' && phrase1[i]<='z')
        {
            presentLetters1[phrase1[i]-'a']++;
        }
        if(phrase2[i]>='a' && phrase2[i]<='z')
        {
            presentLetters2[phrase2[i]-'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (presentLetters1[i] != presentLetters2[i])
        {
            printf("N");
            return 0;
        }
    }
    printf("S");
    return 0;
}