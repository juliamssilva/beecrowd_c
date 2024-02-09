#include <stdio.h>

int main(){
    int x,i,valor;
    i = 1;

    scanf("%d", &x);
    
    valor = x;

    while(i<=10){
       
        printf("%d x %d = %d\n",i, x, valor);
        valor += x;
        i += 1;      
    }

    return 0;
}
    












