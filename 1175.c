#include <stdio.h>

int main(){

    int i,ar[20],aux1=0,aux2=0;

    for(i=0;i<20;i++){
        scanf("%d", &ar[i]);
    }

    for (i=0;i<10;i++){
        aux1 = ar[i];
        aux2 = ar[19-i];
        ar[i] = aux2;
        ar[19-i] = aux1;
    }
    
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n", i, ar[i]);
    }
    return 0;

}