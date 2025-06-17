#include <stdio.h>

int main(){
    double vetor[100], entrada;
    
    scanf("%lf", &entrada);
    
    for (int i = 0; i < 100; i++){
        vetor[i] = entrada;
        entrada = entrada / 2;
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }
    
    return 0;
}
