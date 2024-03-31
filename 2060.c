#include <stdio.h>

int main(){

    int n,m2=0,m3=0,m4=0,m5=0,i;

    scanf("%d", &n);

    int ar[n];

    for(i=0;i<n;i++){

        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0){
            m2 += 1;
        }if (ar[i] % 3 == 0){
            m3 += 1;
        }if (ar[i]% 4 == 0){
            m4 += 1;
        }if (ar[i] % 5 == 0){
            m5 += 1;
        }
    }

    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);
    return 0;
}