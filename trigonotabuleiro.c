#include <stdio.h>

int main() {
    
    unsigned int cont,comp,casas,i;
    unsigned long long int resul = 1;
    scanf("%u", &cont);

    for (comp = 0; comp < cont; comp++) {
        resul =1;
        scanf("%u", &casas);
        for (i = 0; i < casas; i++) {
            resul *= 2;
        }

        printf("%llu kg\n", (resul / 12000));
    }

    return 0;
}