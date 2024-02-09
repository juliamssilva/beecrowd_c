#include <stdio.h>

int main(){

    unsigned long long int a,b,soma=0;

    scanf("%llu %llu", &a ,&b);

    if (b>a){
        soma = b - a + 1;
        soma = (soma * (a+b))/2;
        printf("%llu\n", soma);
    }else{
        soma = a - b + 1;
        soma = (soma * (a+b))/2;
        printf("%llu\n", soma);    
    }


    return 0;
}