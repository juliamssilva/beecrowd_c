int main(){

    int i,n=1,aux,qnt=1,cont=0;

    while(scanf("%d %d", &n, &qnt) && n != 0 && qnt != 0 ){
        
        int ar2[100] = {0};

        int ar1[n]; 

        for(i=0;i<n;i++){
            scanf("%d", &ar1[i]);
            aux = ar1[i];
            ar2[aux-1] += 1;        
        }

        for(i=0;i<100;i++){
            if(ar2[i] >= qnt){
                cont += 1;
            }        
        }

        printf("%d\n", cont);

        cont = 0;
        
    }

    return 0;
}