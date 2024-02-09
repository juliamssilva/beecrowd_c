#include <stdio.h>

int main(){

    double idade=0,q=-1,soma=0,media=0;


    while(idade>=0){           
        soma += idade;
        q++;
        scanf("%lf", &idade);

    }
    
    media = soma/q;
    printf("%.2lf\n", media);


    return 0;
}