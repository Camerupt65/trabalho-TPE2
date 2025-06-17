#include <stdio.h>

int fat(int entrada);

int main() {
    int N;
    scanf("%d", &N);
    
    printf("%d\n", fat(N));
    
    return 0;
}


int fat(int entrada){
    int saida;
    if (entrada == 0) saida = 1;
    else saida = entrada * fat(entrada - 1);
    return saida;
}
