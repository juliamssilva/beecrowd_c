#include <stdio.h>
 
int main() {
 
    int q,num;

    scanf("%d", &q);

    while(q>0){
        q -=1;
        scanf("%d", &num);
        if (num==0){
            printf("NULL\n");
        }else if(num%2==0){
            printf("EVEN ");
            if(num>0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
        }else{
            printf("ODD ");
            if(num>0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}