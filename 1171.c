#include <stdio.h>

int main(){

    int i, n, ar[2000]={0},aux;

    scanf("%d", &n);

    int vetor[n];

    for(i=0;i<n;i++){
        scanf("%d", &vetor[i]);
        aux = vetor[i];
        ar[aux-1] += 1;        
    }

    for(i=0;i<2000;i++){
        if(ar[i] != 0){
            printf("%d aparece %d vez(es)\n", i+1, ar[i]);
        }        
    }

    return 0;
}