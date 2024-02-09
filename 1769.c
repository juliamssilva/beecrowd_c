#include <stdio.h>

int main() {
    int  ant1 = 0, ant2 = 1, num, i,valor;

    scanf("%d", &valor);


    for (i = 1; i <= 100.000; i++) {
  
        num = ant1 + ant2;
        ant1 = ant2;
        ant2 = num;
        
        if (valor == ant1){
            printf("%d\n", i);
            break;
        }else if(ant1>valor){
            printf("-1\n");
            break;
        }
    }

    return 0;
}
