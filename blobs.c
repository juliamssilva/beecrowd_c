#include <stdio.h>
 
int main() {

    int q=0,dias=0;
    float comida=0,comida_f=0;

    scanf("%d", &q);

    while(q>0){
        q -=1;
        scanf("%f", &comida);
            while(comida>1.0){
                comida_f = comida/2;
                comida = comida_f;
                dias +=1;
            }       
        printf("%d dias\n",dias);
        dias = 0;
    }
    return 0;
}