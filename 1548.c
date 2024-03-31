#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    while(n--){

        int qnt,aux,i,j,cont=0;
        
        scanf("%d", &qnt);
        int ar1[qnt];
        
        int tam = sizeof(ar1) / sizeof(ar1[0]);
        int ar2[tam];


        for(i=0;i<tam;i++){
            scanf("%d", &ar1[i]);
            ar2[i] = ar1[i];
        }

        for (i = 1; i < tam; i++) {
            aux = ar2[i];
            j = i - 1;
            while (j >= 0 && ar2[j] < aux) {
                ar2[j + 1] = ar2[j];
                j = j - 1;
            }
            ar2[j + 1] = aux;
        }

        for(i=0;i<tam;i++){
            if (ar1[i] == ar2[i]){
                cont += 1;
            }
        }

        printf("%d\n", cont);
        
    }
    return 0;
}