#include <stdio.h>
#define TAM_MES 30
#define TAM_ANO 365

int calculaTempo(int *entrada, int conta);

int main() {
    int dias, meses, anos;
    
    scanf("%d", &dias);
    
    anos = calculaTempo(&dias, TAM_ANO);
    meses = calculaTempo(&dias, TAM_MES);
    
    printf("%d ano(s)\n" 
            "%d mes(es)\n"
            "%d dia(s)\n", anos, meses, dias);

    return 0;
}

int calculaTempo(int *entrada, int conta){
    int saida;
    saida = *entrada / conta;
    *entrada %= conta;
    return saida;
}
