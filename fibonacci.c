#include <stdio.h>

int main() {
    int c, ant1 = 0, ant2 = 1, num, i;

    scanf("%d", &c);


    for (i = 1; i <= c; i++) {
        if(i == c){
             printf("%d\n", ant1);    
        }else{
            printf("%d ", ant1);
        }
        
        num = ant1 + ant2;
        ant1 = ant2;
        ant2 = num;
    }

    return 0;
}
