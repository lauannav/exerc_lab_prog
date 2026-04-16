#include <stdio.h>

  int main(void){

     float salario, percentual, aumento, novo_salario;

	printf("Insira o valor do seu salario atual: R$ ");
	scanf("%f",&salario);

	if (salario <= 280.00){
	     percentual = 20;
	} else if (salario <= 700.00){
	     percentual = 15;
	} else if (salario <= 1500.00){
	     percentual = 10;
	} else {
	     percentual = 5;
	}

	aumento = salario * (percentual/100);
	novo_salario = salario + aumento;

	printf("----------Resumo do reajuste----------\n");
	printf("Salario antes do reajuste: R$%.2f\n", salario);
	printf("O percentual de aumento aplicado foi %.0f%%.\n", percentual);
	printf("O valor do aumento: R$%.2f\n", aumento);
	printf("Novo salario apos aumento: R$%.2f\n", novo_salario);

 return 0;

}
