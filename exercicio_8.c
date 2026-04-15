#include <stdio.h>

  int main (void){

    float p1,p2,p3;

	printf("Insira o valor do primeiro produto: \nR$");
	scanf("%f", &p1);
	printf("Insira o valor do segundo produto: \nR$");
	scanf("%f", &p2);
	printf("Insira o valor do terceiro produto: \nR$");
	scanf("%f", &p3);

	if (p1 <= p2 && p1 <= p3){
		printf("Voce deve comprar o primeiro produto no valor de R$ %2.f ", p1);
	} else if (p2 <= p1 && p2 <= p3){
		printf("Voce deve comprar o segundo produto no valor de R$ %2.f ", p2);
	} else {
		printf("Voce deve comprar o terceiro produto no valor de R$ %2.f ", p3);
	}

 return 0;

}
