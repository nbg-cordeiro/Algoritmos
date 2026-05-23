#include <stdio.h>

void swap(int*a, int*b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition(int array[], int low, int high){

    int pivot = array[high],index=low-1;

    for(int i=low;i<=high;i++){

        if(array[i]<pivot){
            index++;
            swap(&array[i],&array[index]);
        }

    }
    
    swap(&array[index+1],&array[high]);

    return index+1;

}

int quickselect(int array[],int low,int high,int order){

    int j = partition(array,low,high);

    if(low>high){
        return -1;
    }
    else{
        if(j==order-1){
            return array[j];
        }
        else if(j>order-1){
            quickselect(array,low,j-1,order);
        }
        else if(j<order-1){
            quickselect(array,j+1,high,order);
        }
    }
}

int main()
{
    int N,K;

    scanf("%d %d", &N, &K);
    getchar();

    int participantes[N];

    for(int i=0;i<N;i++){
        scanf("%d", &participantes[i]);
    }

    printf("%d", quickselect(participantes,0,N-1,(N+1-K)));

}