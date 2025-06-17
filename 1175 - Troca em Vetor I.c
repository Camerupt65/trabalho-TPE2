#include <stdio.h>

int N[20];

int main() {
    int i, j, temp;
    
    for (i = 0; i <= 19; i++){
        scanf("%d", &N[i]);
    }
    
    i = i - 1;
    
    for (j = 0; j < 10; j++){
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
        i--;
    }
    
    for (i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
