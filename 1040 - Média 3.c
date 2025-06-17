#include <stdio.h>

void calculaMedia(double nota, double *mediaTotal, int peso);
void verificaAprovacao(double media);
void recuperacao(double media);

int main() {
	double N1, N2, N3, N4, media = 0;

	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

	calculaMedia(N1, &media, 2);
	calculaMedia(N2, &media, 3);
	calculaMedia(N3, &media, 4);
	calculaMedia(N4, &media, 1);
	media /= 10;

	verificaAprovacao(media);

	return 0;
}

void calculaMedia(double nota, double *mediaTotal, int peso) {
	*mediaTotal += nota * peso;
}

void verificaAprovacao(double media) {
	printf("Media: %.1lf\n", media);

	if (media >= 7)  {
		printf("Aluno aprovado.\n");
	}
	else if (media >= 5) {
		printf("Aluno em exame.\n");
		recuperacao(media);
	}
	else printf("Aluno reprovado.\n");

	return;
}

void recuperacao(double media) {
	double notaRecuperacao, novaMedia;
	printf("Nota do exame: ");
	scanf("%lf", &notaRecuperacao);
	printf("%.1lf", notaRecuperacao);

	novaMedia = (media + notaRecuperacao) / 2;

	if (novaMedia >= 5) printf("\nAluno aprovado.\n");
	else printf("\nAluno reprovado.\n");

	printf("Media final: %.1lf\n", novaMedia);

	return;
}
