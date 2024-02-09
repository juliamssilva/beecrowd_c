#include <stdio.h>

int main(){
    int i = 0, c, quant, total = 0;
    float coelho = 0, rato = 0, sapo = 0;  
    char espec;

    scanf("%d", &c);

    while (i < c) {
        i++;
        scanf("%d %c", &quant, &espec);
        total += quant;
        if (espec == 'C') { 
            coelho += quant;
        } else if (espec == 'R') {
            rato += quant;
        } else if (espec == 'S') {
            sapo += quant;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %.0f\n", coelho);  
    printf("Total de ratos: %.0f\n", rato);
    printf("Total de sapos: %.0f\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", (coelho*100.0)/total);
    printf("Percentual de ratos: %.2f %%\n", (rato*100.0)/total);
    printf("Percentual de sapos: %.2f %%\n", (sapo*100.0)/total);
    return 0;
}