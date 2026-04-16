#include <stdio.h>

  int main (void){

    float a,b,c;

	printf("Informe os 3 lados do triangulo:\n");
	scanf("%f %f %f", &a, &b,&c);

	if (a + b > c && a + c > b && b + c > a){
		printf("Os valores formam um triangulo!\n");

		if(a == b && b == c){
			printf("Eh um triangulo equilatero.\n");
		} else if (a == b || a == c || b == c){
			printf("Eh um triangulo isosceles.\n");
		} else {
			printf("Eh um triangulo escaleno.\n");
		}

	} else {
		printf("Nao eh um triangulo.");
	}

 return 0;

}

