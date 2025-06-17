#include <stdio.h>

int main() {
	int N, valorInformado, resultado;
	char *A[10], *B[10];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {

		scanf("%d", &valorInformado);

		if (valorInformado == 0) {
			printf("NULL\n");
			continue;
		}

		resultado = valorInformado % 2;

		if (resultado == 1 || resultado == -1) *A = "ODD";
		else *A = "EVEN";

		if (valorInformado < 0) *B = "NEGATIVE";
		else *B = "POSITIVE";

		printf("%s %s\n", A[0], B[0]);
	}

	return 0;
}
