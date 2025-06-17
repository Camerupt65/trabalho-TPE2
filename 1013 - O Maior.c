#include <stdio.h>
#include <stdlib.h>

int maior(int X, int Y);

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int maiorNum;
    maiorNum = maior(A, B);
    maiorNum = maior(maiorNum, C);
    
    printf("%d eh o maior\n", maiorNum);
    
    return 0;
}

int maior(int X, int Y){
    return (X + Y + abs(X - Y)) / 2;
}
