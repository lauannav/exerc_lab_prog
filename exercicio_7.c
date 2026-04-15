#include <stdio.h>

  int main (void){

    float n1,n2,n3;

	printf("Digite o primeiro valor:");
	scanf("%f", &n1);
	printf("Digite o segundo valor:");
	scanf("%f", &n2);
	printf("Digite o terceiro valor:");
	scanf("%f", &n3);

	if (n1 >= n2 && n1 >= n3){
		printf("%2.f eh o maior valor.\n", n1);
	} else if (n2 >= n1 && n2 >= n3){
		printf("%2.f eh o maior valor.\n", n2);
	} else {
		printf("%2.f eh o maior valor\n",n3);
	}

	if (n1 <= n2 && n1 <= n3){
		printf("%2.f eh o menor valor.\n", n1);
	} else if (n2 <= n1 && n2 <= n3){
		printf("%2.f eh o menor valor.\n"), n2;
	} else {
		printf("%2.f eh o menor valor.\n"), n3;
	}

 return 0;

}
