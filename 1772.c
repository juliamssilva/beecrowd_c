
#include <stdio.h>

int main()
{
    double n1,n2,n3,n4,soma=0,m1=0,m2=0;
    int i,n;
    
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    if (n1>n2){
        m1 = ((n1*6)+(n2*4))/10;
        if (n3>n4){
            m2=((n3*6)+(n4*4))/10;
        }else{
            m2 =((n4*6)+(n3*4))/10;
        }
    }else {
        m1 = ((n2*6)+(n1*4))/10;
        if (n3>n4){
            m2=((n3*6)+(n4*4))/10;
        }else{
            m2 =((n4*6)+(n3*4))/10;
        }
    }
        soma += (m1+m2)/2;
        printf("Discente #%d: %.1lf %.1lf %.1lf\n", i, m1, m2, (m1+m2)/2);
    }

    printf("Media da turma: %.2lf\n", (soma/n));
    return 0;
}
