#include <stdio.h>

  int main(void){

    float n1,n2,media;
    char conceito;

	printf("Insira a primeira nota:");
	scanf("%f", &n1);
	printf("Insira a segunda nota:");
	scanf("%f", &n2);

	media = (n1 + n2)/2;

	if (media <= 4.0){
		conceito = 'E';
	} else if (media <= 6.0){
		conceito = 'D';
	} else if (media <= 7.5){
		conceito = 'C';
	} else if (media <= 9.0){
		conceito = 'B';
	} else {
		conceito = 'A';
	}

	printf("----------Resultado Final----------\n");
        printf("Notas individuais: %.2f e %.2f\n", n1,n2);
        printf("Media: %.2f\n", media);
	printf("Conceito recebido: %c\n", conceito);

	if (conceito == 'A' || conceito == 'B' || conceito == 'C'){
		printf("Voce foi aprovado!\n");
	} else {
		printf("Voce foi reprovado! Te vejo proximo periodo.\n");
	}

 return 0;

}
