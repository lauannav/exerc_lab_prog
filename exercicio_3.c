#include <stdio.h>

  int main(void){

	char letra;

	printf("Digite uma letra:");
	scanf(" %c", &letra);

	if (letra == 'F' || letra == 'f'){
		printf("F - Feminino");
	} else if (letra == 'M' || letra == 'm'){
		printf("M - Masculino");
	} else {
		printf("Valor invalido!");
	}

  return 0;

}

