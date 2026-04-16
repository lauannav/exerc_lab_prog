#include <stdio.h>

  int main (void){

    char turno;

	printf("Em que turno voce estuda? \nDigite M - Matutino, V - Vespertino ou N - Noturno: ");
	scanf("%c", &turno);

	if (turno == 'M' || turno == 'm'){
		printf("Bom Dia!\n");
	} else if (turno == 'v' || turno == 'V') {
		printf("Boa Tarde!\n");
	} else if (turno == 'n' || turno == 'N') {
		printf("Boa Noite!\n");
	} else {
		printf("Valor Invalido!");
	}

 return 0;

}
