// enunciado:
// https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2020f1ps_paciente

#include <stdio.h>

int main ()
{
    int pacientes[1002]={0};
    int totalInfectados, nCadeias, nCadeiaAtual, infectado;
    scanf("%d %d", &totalInfectados, &nCadeias);

    for(int i=0; i< nCadeias; i++)
    {
        scanf("%d %d", &nCadeiaAtual, &nCadeiaAtual);
        
        for(int j=0; j < nCadeiaAtual; j++)
        {
            scanf("%d", &infectado);
            pacientes[infectado]=1;
        }
    }
    
    for(int i=1; i <= totalInfectados; i++)
    {
        if(pacientes[i]==0)
            printf("%d\n",i);
    }

    return 0;
}