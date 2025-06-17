#include <stdio.h>

void fib(int N);

int main() {
	int N;
	scanf("%d", &N);

    if (N == 1) printf ("1\n");
    else if (N == 2) printf ("1 2\n");
    else if (N > 2) fib(N);
    
    
	return 0;
}

void fib(int N){
    int primeiroNum = 0, segundoNum = 1, terceiroNum;
    
    printf("%d %d", primeiroNum, segundoNum);
    
    for (int i = 2; i < N; i++) {
        terceiroNum = primeiroNum + segundoNum;
        printf (" %d", terceiroNum);
        primeiroNum = segundoNum;
        segundoNum = terceiroNum;
	}
	printf("\n");
}
