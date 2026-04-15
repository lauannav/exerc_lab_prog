#include <stdio.h>

  int main (void){

	char letra;

	printf("Digite uma letra:");
	scanf(" %C",&letra);

	switch (letra) {
	  case 'a':
	  case 'e':
	  case 'i':
	  case 'o':
	  case 'u':
	  case 'A':
	  case 'E':
	  case 'I':
	  case 'O':
	  case 'U':
		printf("A letra digitada eh uma vogal!");
	    break;
	  default:
		printf("A letra digitada eh uma consoante!");
	}

  return 0;

}
