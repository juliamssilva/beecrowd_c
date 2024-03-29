#include <stdio.h>

long long int Fatorial(long long int n) {
    long long int i, resultado = 1;

    for (i = 2; i < n + 1; i++) {
        resultado *= i;
    }
    
    return resultado;
}

int main() {
    long long int n1, n2, soma;

    while (scanf("%lld %lld", &n1, &n2) != EOF) {

        soma = Fatorial(n1) + Fatorial(n2);

        printf("%lld\n", soma);
    }

    return 0;
}
