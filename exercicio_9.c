#include <stdio.h>

  int main(void){

    float n1,n2,n3;

	printf("Digite o primeiro numero:");
	scanf("%f", &n1);
	printf("Digite o segundo numero:");
	scanf("%f", &n2);
	printf("Digite o terceiro numero:");
	scanf("%f", &n3);

	printf("\nOrdem decrescente: ");

	if (n1 >= n2 && n1 >= n3){
	    if (n2 >= n3) {
		printf("%.2f, %.2f, %.2f", n1, n2, n3);
	    } else {
		printf("%.2f, %.2f, %.2f", n1, n3, n2);
	    }
	} else if (n2 >= n1 && n2 >= n3) {
	    if (n1 >= n3) {
		printf ("%.2f, %.2f, %.2f", n2, n1, n3);
	    } else {
		printf("%.2f, %.2f, %.2f", n2, n3, n1);
	    }
	} else {
	    if (n1 >= n2){
		printf("%.2f, %.2f, %.2f", n3, n1, n2);
	    } else {
		printf("%.2f, %.2f, %.2f", n3, n2, n1);
	    }
	}

 return 0;

}
