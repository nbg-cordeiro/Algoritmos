#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    char phrase[1001]={0};
    char letterSequence[1001]={0};
    short counterSequence[1001]={0};
    getchar();
    fgets(phrase, 1001, stdin);
    int currentCounter=1;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(phrase[i]==phrase[i+1])
        {
            currentCounter++;
        }
        else
        {
            letterSequence[j]=phrase[i];
            counterSequence[j]=currentCounter;
            currentCounter=1;
            j++;
        }
    }
    for(int i=0;i<j;i++)
    {
        printf("%d %c ", counterSequence[i], letterSequence[i]);
    }
    return 0;
}