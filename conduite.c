#include <stdio.h>
 
int main() {
 
    int t,r1,r2,cabo=0;

    scanf("%d", &t);

    while(t>0){
        t -=1;
        scanf("%d%d", &r1, &r2);
        cabo = r1+r2;
        printf("%d\n",cabo);
        cabo = 0;
    }
 
    return 0;
}