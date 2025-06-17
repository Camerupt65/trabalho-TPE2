#include <stdio.h>
#include <math.h>

int calculaCedulas(int *dinheiroTotal, int valorDaNota);


int main() {
	double dinheiro;
	int dinheiroTotal;
	
	scanf("%lf", &dinheiro);

    dinheiroTotal = (int)(dinheiro * 100 + 0.5);

	printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", calculaCedulas(&dinheiroTotal, 10000));
    printf("%d nota(s) de R$ 50.00\n", calculaCedulas(&dinheiroTotal, 5000));
    printf("%d nota(s) de R$ 20.00\n", calculaCedulas(&dinheiroTotal, 2000));
    printf("%d nota(s) de R$ 10.00\n", calculaCedulas(&dinheiroTotal, 1000));
    printf("%d nota(s) de R$ 5.00\n", calculaCedulas(&dinheiroTotal, 500));
    printf("%d nota(s) de R$ 2.00\n", calculaCedulas(&dinheiroTotal, 200));

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", calculaCedulas(&dinheiroTotal, 100));
    printf("%d moeda(s) de R$ 0.50\n", calculaCedulas(&dinheiroTotal, 50));
    printf("%d moeda(s) de R$ 0.25\n", calculaCedulas(&dinheiroTotal, 25));
    printf("%d moeda(s) de R$ 0.10\n", calculaCedulas(&dinheiroTotal, 10));
    printf("%d moeda(s) de R$ 0.05\n", calculaCedulas(&dinheiroTotal, 5));
    printf("%d moeda(s) de R$ 0.01\n", calculaCedulas(&dinheiroTotal, 1));

	return 0;
}


int calculaCedulas(int *dinheiroTotal, int valorDaNota) {
	int saida = *dinheiroTotal / valorDaNota;
	*dinheiroTotal = *dinheiroTotal % valorDaNota;

	return saida;
}
