#include <stdio.h>

int main(){
    double salario, novo_salario,reajuste;
    scanf("%lf", &salario);
    if (salario <= 400.0){
        reajuste = ((salario*15)/100);
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }else if(salario>400.0 && salario<=800.0){
        reajuste = ((salario*12)/100);
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }else if(salario>800.0 && salario<=1200.0){
        reajuste = ((salario*10)/100);
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }else if(salario>1200.0 && salario<=2000.0){
        reajuste = ((salario*7)/100);
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }else if(salario>2000.0){
        reajuste = ((salario*4)/100);
        novo_salario = salario + reajuste;
        printf("Novo salario: %.2lf\n", novo_salario);
        printf("Reajuste ganho: %.2lf\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}