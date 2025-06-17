#include <stdio.h>

int main() {
    int T, N[1000], x = 0;
    
    scanf("%d", &T);
    
    for (int i = 0; i < 1000; i++){
        if (x == T) x = 0;
        N[i] = x;
        x += 1;
    }
    
    for (int i = 0; i < 1000; i++) printf("N[%d] = %d\n", i, N[i]);
    

    return 0;
}
