#include <stdio.h>

int main(){

    int i,tam=0,j=0,cont = 0;
    char ar[51], copia[51];

    scanf("%s", ar);

    for(i=0; ar[i] != '\0' ; i++){

        if((ar[i] == 'a') || (ar[i] == 'e') || (ar[i] == 'i')
        || ar[i] == 'o' || ar[i] == 'u'){
            copia[j] =  ar[i];
            j++;
            tam++;
        }
    }
    
    copia[j] = '\0';

    for(j=0; j < (tam/2); j++){
        if (copia[j] == copia[tam-j-1]){
            cont++;
        }
    }

    if (cont == (tam/2)){
        puts("S");
    }
    else{
        puts("N");
    }

    return 0;
}