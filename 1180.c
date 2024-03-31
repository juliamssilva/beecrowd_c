#include <stdio.h>

int main(){

    int i,n,menor=100000000,posi;

    scanf("%d", &n);

    int ar[n];

    for(i=0;i<n;i++){
        scanf("%d", &ar[i]);
        if (ar[i]< menor){
            menor = ar[i];
            posi = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posi);

    return 0;
}