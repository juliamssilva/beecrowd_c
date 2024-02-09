#include <stdio.h>

int main(){
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a==b){
        printf("A e B sao iguais.\n");
    }else if(a>b){
        printf("A eh maior e ");
        if(a%2==0){
            printf("PAR.\n");
        }else{
            printf("IMPAR.\n");
        }
    }else{
         printf("B eh maior e ");
        if(a%2==0){
            printf("PAR.\n");
        }else{
            printf("IMPAR.\n");
        }
    }
    
    return 0;
}