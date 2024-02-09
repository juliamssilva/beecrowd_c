#include <stdio.h>

int main(){
    
    long long int valor, limite = (long long int)12e18, ant1 = 0, ant2 = 1,num,i;

    scanf("%lld", &valor);


    for (i = 2; i<= limite; i++) {
  
        num = ant1 + ant2;
        ant1 = ant2;
        ant2 = num;
        
        if (valor == ant1){
            printf("%lld\n", i);
            break;
        }else if(ant1>valor){
            printf("-1\n");
            break;
        }
    }

    return 0;
}