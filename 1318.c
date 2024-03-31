#include <stdio.h>

int main(){

    int i,b=0,aux,pessoa=0,cont=0;

    while(scanf("%d %d", &b, &pessoa) && b != 0 && pessoa != 0 ){
        
        int ar2[10000] = {0};

        int ar1[pessoa]; 

        for(i=0;i<pessoa;i++){
            scanf("%d", &ar1[i]);
            aux = ar1[i];
            ar2[aux-1] += 1;        
        }

        for(i=0;i<10000;i++){
            if(ar2[i] > 1){
                cont += 1;
            }        
        }

        printf("%d\n", cont);

        cont = 0;
        
    }

    return 0;
}