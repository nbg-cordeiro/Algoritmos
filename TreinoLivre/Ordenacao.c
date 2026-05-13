// enunciado:
// moj.naquadah.com.br/new/treino/problem/?id=moj-problems.ordenasemlaco

void insere (int *v, int n){
    if(n<2)
        return;
    if(v[n-1]<v[n-2]){
        int temp = v[n-2];
        v[n-2]=v[n-1];
        v[n-1]=temp;
        insere(v, n-1);
    }
}

void ordena (int *v, int n){
    if(n<2)
        return;
    ordena(v,n-1);
    insere(v,n);
}