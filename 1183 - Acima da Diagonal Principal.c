
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
	int x = 0;
	for (int i = 0; i < LINHAS; i++) {
		for (int j = i + 1; j < COLUNAS; j++) {
			resultado += M[i][j];
			x++;
		}
	}



	if (!strcmp(operadorSelecionado, "S")) {
		return resultado;
	}
	resultado /= x;
	return resultado;

}
