#include <stdio.h>

int main(){
    int a,b,c,aux,i;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a==b){
        if(a%2 == 0 && c%2 == 0){
            printf("%d\n", a);
        }else if(a%2 != 0 && c%2 != 0){
            printf("%d\n", a);
        }else printf("Nada para exibir.\n");

    }else if(a>b){
        aux = b;
        b = a;
        a = aux;
        if(c % 2 != 0){
            if(a % 2 != 0){
                printf("%d",a);
                for(i=a+2;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            }else{
                printf("%d",a + 1);
                for(i=a+3;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            } 
        } else if(c % 2 == 0){
            if(a % 2 == 0){
                printf("%d",a);
                for(i=a+2;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            }else{
                printf("%d",a + 1);
                for(i=a+3;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            } 
        }
    }  else{
        if(c % 2 != 0){
            if(a % 2 != 0){
                printf("%d",a);
                for(i=a+2;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            }else{
                printf("%d",a + 1);
                for(i=a+3;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            } 
        } else if(c % 2 == 0){
            if(a % 2 == 0){
                printf("%d",a);
                for(i=a+2;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            }else{
                printf("%d",a + 1);
                for(i=a+3;i<b + 1;i+=2){
                    printf(" %d",i);
                }
                printf("\n");
            } 
        }
    }    

    return 0;
}