#include <stdio.h>

int horaInicio, minInicio, horaFinal, minFinal, varHora, varMin;

void solicitaTempo();
void calculaVariacao();

int main() {
	solicitaTempo();
	calculaVariacao();

	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", varHora, varMin);

	return 0;
}

void solicitaTempo() {
	scanf("%d %d %d %d", &horaInicio, &minInicio, &horaFinal, &minFinal);
}

void calculaVariacao() {
	varHora = horaFinal - horaInicio;
	varMin = minFinal - minInicio;

	if (varHora == 0 && varMin <= 0) varHora += 24;
	else if (varHora < 0) varHora += 24;

	if (varMin < 0) {
		varHora -= 1;
		varMin += 60;
	}
}
