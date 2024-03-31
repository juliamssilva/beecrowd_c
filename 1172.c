#include <stdio.h>

int main(){

    int vetor[10],i,n;

    for(i=0;i<10;i++){
        scanf("%d", &n);
        if (n <= 0){
            vetor[i]= 1;
            printf("X[%d] = %d\n", i, vetor[i]);
        }else{
            vetor[i] = n;
            printf("X[%d] = %d\n", i, vetor[i]);
        }
    }

    return 0;
}