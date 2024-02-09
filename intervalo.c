#include <stdio.h>

int main(){
    float num;
    scanf("%f", &num);
    if (num >= 0 && num <=25.0){
        printf("Intervalo [0,25]");
    }else if(num>25.0 && num <= 50.0) {
        printf("Intervalo (25,50]");
    }else if(num>50.0 && num<=75.0){
        printf("Intervalo (50,75]");
    }else if(num>75.0 && num<=100.0){
        printf("Intervalo (75,100]");
    }else{
        printf("Fora de intervalo");
    }
    return 0;
}
