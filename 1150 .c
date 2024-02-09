#include <stdio.h>
#include <math.h>

int main() {
    
    double num,ant1,r=0,q=0,first = 0;
    int cont = 1,pa=1,pg=1;
    
    
    scanf("%lf", &num);
    
    while (num > 0) {
        cont++;
        if (first == 0){
            ant1 = num;
            scanf("%lf", &num);
            if (num < 0) break;
            first = 1;
            r = num - ant1;
            q = num/ant1;
            pa++;
            pg++;
        }
        ant1 = num;
        scanf("%lf", &num);
        if(first == 1 && (num - ant1) == r){
            pa++;
        }
        if(first == 1 && (num / ant1) == q){
            pg++;
        }
    }

    if (pa == pg && pa != 2){
        printf("PA com %d termos e razao %1.lf.\nPG com %d termos e razao %1.lf.\n", pa,r,pg,q);   
    }else if (pg == cont){
        printf("PG com %d termos e razao %1.lf.\n", pg, q);   
    }else if (pa==cont){
        printf("PA com %d termos e razao %1.lf.\n", pa, r);   
    }else printf("Sequencia com %d termos.\n",cont);
    

    return 0;
}