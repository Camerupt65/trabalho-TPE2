#include <stdio.h>
#define TRUE 1
#define FALSE 0

void loop(int numDeEntradas);
int ehPrimo(int entrada);


int main() {
    int numDeEntradas;
	scanf("%d", &numDeEntradas);
	
	loop(numDeEntradas);

	return 0;
}


void loop(int numDeEntradas){
    int numInformado;
	
	for (int i = 0; i < numDeEntradas; i++) {
		scanf("%d", &numInformado);
		if(ehPrimo(numInformado)) printf("%d eh primo\n", numInformado);
		else printf("%d nao eh primo\n", numInformado);
	}
}



int ehPrimo(int entrada) {
	if (entrada <= 1) return FALSE;
	if (entrada == 2) return TRUE;
	if (entrada % 2 == 0) return FALSE;

	for (int i = 3; i * i <= entrada; i += 2) {
		if (entrada % i == 0) return FALSE;
	}
	return TRUE;
}
