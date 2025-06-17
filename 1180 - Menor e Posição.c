#include <stdio.h>

int main(){
    int N, menor, posicao;
    
    scanf("%d", &N);
    
    int X[N];
    
    for (int i = 0; i < N; i++)scanf("%d", &X[i]);
    
    menor = X[0];
    
    for (int i = 1; i < N; i++){
        if (menor > X[i]){
            menor = X[i];
            posicao = i;
    }    
}
    
    printf("Menor valor: %d\n"
            "Posicao: %d\n", menor, posicao
            );

    return 0;
}
