#include <stdio.h>

int main() {
    int T, N;
    long fib[61];
    
    fib[0] = 0;
    fib[1] = 1;

    scanf("%d", &T);
    
    for(int i = 2; i <= 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    for (int i = 0; i < T; i++){
        scanf("%d", &N);
        printf("Fib(%d) = %ld\n", N, fib[N]);
    }
    
    return 0;
}
