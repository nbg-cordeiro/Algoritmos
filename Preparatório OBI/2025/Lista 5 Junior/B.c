#include <stdio.h>

int main(){
    int J, P, V, E, D;
    scanf("%d %d %d %d %d", &J, &P, &V, &E, &D);
    if(J == -1)
    {
        if(V==-1)
        {
            V = (P - E)/3;
            J = V + E + D;
        }
        else if(E==-1)
        {
            E = P - 3*V;
            J = V + E + D;
        }
        else
        {
            P=3*V + E;
            J = V + E + D;
        }
    }
    if(P==-1)
    {
        if(V==-1)
        {
            V=J-(E+D);
            P=(3*V) + E;
        }
        else if(E==-1)
        {
            E=J-(V+D);
            P=(3*V) + E;
        }
        else
        {
            P=(3*V) + E;
            D = J-(V+E);
        }
    }
    if(D==-1)
    {
        D = J-((P-(3*V))+V);
    }
    printf("%d %d %d %d %d\n", J, P, V, E, D);
    return 0;
}

