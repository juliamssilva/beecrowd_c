#include <stdio.h>

int main(){
    int i,num,c,maria=0,joao=0;

    scanf("%d", &c);

    do{
        maria=0;
        joao=0;

        for(i=0; i<c; i++){
            scanf("%d", &num);
            if(num==0){
                maria++;
            }else{
                joao++;
            }
        }
         printf("Mary won %d times and John won %d times\n", maria, joao);
         scanf("%d", &c);

    }while(c!=0);

    return 0;
}