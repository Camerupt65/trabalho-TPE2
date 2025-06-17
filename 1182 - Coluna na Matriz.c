#include <stdio.h>
#include <string.h>
#define COLUNAS 12
#define LINHAS 12

double M[LINHAS][COLUNAS];
int colunaSelecionada;
char operadorSelecionado[1];


void criaMatriz();
void printfLinhaMatriz();
double calculo();


int main() {
	scanf("%d", &colunaSelecionada);
	if (colunaSelecionada == 9) return 0;
	scanf("%s", &operadorSelecionado[0]);
	criaMatriz();

	printf("%.1lf\n", calculo());


	return 0;
}


void criaMatriz() {
	for (int i = 0; i < LINHAS; i++) {
		for (int j = 0; j < COLUNAS; j++) {
			scanf("%lf", &M[i][j]);
		}
	}
}

void printfLinhaMatriz() {
	for (int j = 0; j < LINHAS; j++) {
		printf("%.1lf  ", M[j][colunaSelecionada]);
	}

}

double calculo() {
	double resultado = 0;
	for (int i = 0; i < LINHAS; i++) {
		resultado += M[i][colunaSelecionada];
	}
	if (!strcmp(operadorSelecionado, "S")) {
		return resultado;
	}
	resultado /= LINHAS;
	return resultado;

}
