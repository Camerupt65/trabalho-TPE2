#include <stdio.h>
#include <string.h>
#define LINHAS 12
#define COLUNAS 12

double M[LINHAS][COLUNAS];
int linhaSelecionada;
char operadorSelecionado[1];


void criaMatriz();
void printfLinhaMatriz();
double calculo();


int main() {
	scanf("%d", &linhaSelecionada);
	if (linhaSelecionada == 9) return 0;
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
	for (int j = 0; j < COLUNAS; j++) {
		printf("%.1lf  ", M[linhaSelecionada][j]);
	}

}

double calculo(){
    double resultado = 0;
    for (int i = 0; i < COLUNAS; i++){
            resultado += M[linhaSelecionada][i];
        }
    if (!strcmp(operadorSelecionado, "S")){
        return resultado;
    }
    resultado /= COLUNAS;
    return resultado;
    
}
