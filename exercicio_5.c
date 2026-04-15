#include <stdio.h>

	int main(void){

	  float num1, num2, media;

		printf("Insira a primeira nota:");
		scanf("%f", &num1);
		printf("Insira a segunda nota:");
		scanf("%f", &num2);

	  media = (num1 + num2)/2;

	  if (media == 10){
		printf("Sua media eh %1.f e voce foi aprovado com distincao!", media);
	  } else if (media >= 7){
		printf("Sua media eh %1.f e voce foi aprovado!", media);
	  } else {
		printf("Sua media eh %1.f e voce foi reprovado.", media);
	  }

   return 0;

 }
