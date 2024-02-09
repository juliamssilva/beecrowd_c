#include <stdio.h>

int main(){
    char nome;
    double salario,vendas,bonus;
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    bonus = (15*vendas)/100;
    salario += bonus;
    printf("TOTAL = R$ %.2lf\n",salario);
    return 0; 
}