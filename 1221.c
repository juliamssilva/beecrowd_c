#include <stdio.h>
#include <math.h>

int PrimoOuNao (int n){

    if (n == 2){
        return 1;
    }else if (n%2 == 0){
        return 0;
    } 

    int j,r;

    r = sqrt(n) + 1;

    for (j=3; j<r; j=j+2){
        if(n%j == 0){
            return 0;
        }
    }

    return 1;
}


int main(){
    int i,cont,num,resul;

    scanf("%d", &cont);

    for(i=0;i<cont;i++){

        scanf("%d", &num);

        resul = PrimoOuNao(num);

        if(resul == 0){
            puts("Not Prime");
        }else{
            puts("Prime");
        }
        
    }

    return 0;
}