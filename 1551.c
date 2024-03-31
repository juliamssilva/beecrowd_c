#include <stdio.h>

int main() {
    int n, i;
    char frase[1001];

    scanf("%d%*c", &n);

    while (n--) {
        
        fgets(frase,1001, stdin);

        int cont = 0;
        
        int alfabeto[26] = {0};

        for (i = 0; frase[i] != '\0'; i++) {
            if (frase[i] >= 'a' && frase[i] <= 'z'){
                if (alfabeto[frase[i] - 'a'] == 0){
                    cont++;
                    alfabeto[frase[i] - 'a']++;
                }
            }
        }
        
        
        if (cont == 26) {
            puts("frase completa");
        } else if (cont > 12 ) {
            puts("frase quase completa");
        } else {
            puts("frase mal elaborada");
        }
        
    }

    return 0;
}
