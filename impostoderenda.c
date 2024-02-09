#include <stdio.h>

int main(){
    double renda,imposto;
    scanf("%lf", &renda);
    if(renda<=2000.0){
        printf("Isento\n");
    }else if(renda<=3000.0){
        imposto = (1000.0*0.8)+(renda-3000.0)*0.18;
        printf("R$ %.2lf\n", imposto);
    }else if(renda<=4500.0){
        imposto = (1000.0 * 0.8) + (renda - 3000.0)*0.18;
        printf("R$ %.2lf\n", imposto);
    }else if(renda>4500.0){
        imposto = (1000.0*0.08)+(1500.0*0.18)+(renda - 4500.0)*0.28;
        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}