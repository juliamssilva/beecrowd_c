#include <stdio.h>

unsigned long long IemFibonacci(unsigned int n) {
    unsigned long long ant1 = 0, ant2 = 1, num, i;

    if (n == 1) {
        return 1;
    }

    for (i = 1; i < n; i++) {
        num = ant1 + ant2;
        ant1 = ant2;
        ant2 = num;
    }

    return num;
}

int main() {
    unsigned int i, cont;
    unsigned long long n;

    scanf("%u", &cont);

    for (i = 0; i < cont; i++) {
        scanf("%llu", &n);
        printf("Fib(%llu) = %llu\n", n, IemFibonacci(n));
    }

    return 0;
}