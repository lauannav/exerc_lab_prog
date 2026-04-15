#include <stdio.h>

  int main (void){

	float val;

	printf("Digite um valor:");
	scanf("%f", &val);

	if (val >= 0){
		printf("O valor %2.f eh positivo!\n", val);
	} else {
		printf("O valor %2.f eh negativo!\n", val);
	}

  return 0;

}
