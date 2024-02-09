# include <stdio.h>

int main(){

    unsigned long long int patos;

    while(1){
        scanf("%llu", &patos);

        if (patos == -1){
            break;  
        } else if(patos == 0){
            printf("0\n");
        }else{
            printf("%llu\n", (patos-1));
        }
    }
    return 0;
}