#include<stdio.h>

int main(){
    char senha[100];
    
    int i ,tam ,c=0 ,s=0 ,n=0 ,x=0 ;
    
    while(gets(senha)){
        
        c=0, s=0, n=0, x=0;
        
        tam =strlen(senha);
        
        if(tam >= 6 && tam <=32){
            
            for(i=0; i<tam; i++){
                
                if(senha[i]>='A'&& senha[i]<='Z'){
                    c++;
                }
                else if(senha[i]>='a'&& senha[i]<='z'){
                    s++;
                }
                else if(senha[i]>='0'&& senha[i]<='9'){
                    n++;
                }
                else{
                    x++;
                }
            }
            
            if(x!=0 || c==0 || s==0 || n==0){
                printf("Senha invalida.\n");
            }
            else{
                printf("Senha valida.\n");
            }
        }
        else{
            printf("Senha invalida.\n");
        }
    }
    return 0;
}