#include <stdio.h>

int main(){
    int a,b,n1,n2,i,j,cont=0;

    scanf("%d %d", &a, &b);
    scanf("%d", &n1);
    scanf("%d", &n2);

    for(i=a;i<=b;i++){
        if((i%n1 == 0) || (i%n2 == 0)){
            cont++;
        }
    }

    printf("%d\n", cont);
    return 0;

}