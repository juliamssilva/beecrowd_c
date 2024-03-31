#include <stdio.h>

int main(){
    int n, i,cont;
    char ar[100];

    scanf("%d", n);

    while(n--){
        scanf("%s", ar);

        for (i=0; ar[i] != "\0"; i++){
            if (ar[i] == '1'){
                cont += 2;
            } 
            if (ar[i] == '2' || ar[i] == '3' || ar[i] == '5'){
                cont += 5;
            }
            if (ar[i] == '4'){
                cont += 4;
            }
            if (ar[i] == '6' || ar[i] == '9' || ar[i] == '0'){
                cont += 6;
            }
            if (ar[i] == '7'){
                cont += 3;
            }
            if (ar[i] == '8'){
                cont += 7;
            }
        }
        printf("%d leds\n", cont );
        cont = 0;
    }

    return 0;
}