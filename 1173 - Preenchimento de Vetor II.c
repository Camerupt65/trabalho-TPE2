#include <stdio.h>

void preencheVetor(int N[]);
void imprimeVetor(int N[]);

int main() {
    int N[10];
    
    scanf("%d", &N[0]);
    preencheVetor(N);
    
    imprimeVetor(N);

    return 0;
}

void preencheVetor(int N[]){
    for (int i = 1; i < 10; i++){
        N[i] = N[i - 1] * 2;
    }
}

void imprimeVetor(int N[]){
    for (int i = 0; i < 10; i++) printf("N[%d] = %d\n", i, N[i]);
}
