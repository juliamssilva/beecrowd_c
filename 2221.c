#include <stdio.h>

int ValorGolpe(int ataque, int defesa, int bonus){
    int resultado;
    resultado =((ataque+defesa)/2)+ bonus;

    return resultado;
}

int main(){
    int i,cont,g1,g2,g3,d1,d2,d3,bonus;
    int guarte, dabriel;

    scanf("%d", &cont);

    for(i=0;i<cont;i++){

        scanf("%d", &bonus);
        scanf("%d %d %d", &d1, &d2, &d3);
        scanf("%d %d %d", &g1, &g2, &g3);

        if (d3%2 == 0){
            dabriel = ValorGolpe(d1,d2,bonus);
        }else{
            bonus = 0;
            dabriel = ValorGolpe(d1,d2,bonus);
        }

        if (g3%2 == 0){
            guarte = ValorGolpe(g1,g2,bonus);
        }else{
            bonus = 0;
            guarte = ValorGolpe(g1,g2,bonus);
        }

        if (dabriel == guarte){
            puts("Empate");
        }else if (dabriel > guarte){
            puts("Dabriel");
        }else{
            puts("Guarte");
        }
    }

    return 0;
}