#include <stdio.h>

int main (void){

	int num1,num2;

	printf("Digite um valor:");
	scanf("%d",&num1);
	printf("Digite um segundo valor:");
	scanf("%d",&num2);

	if(num1 > num2) {
		printf("O maior valor eh: %d\n");
	} else if (num2 > num1){
		printf("O maior valor eh: %d\n");
	} else {
		printf("Os valores são iguais!\n");
	}

	return 0;
}
