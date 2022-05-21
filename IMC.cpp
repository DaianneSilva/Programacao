#include <stdio.h>

	int main (void)
{
	float imc, peso, altura;
	
		printf("Digite seu peso: \n");
		scanf("%f",&peso);

		printf("Digite sua altura: \n");
		scanf("%f",&altura);
		
	imc = peso/(altura * altura);
	
	printf("\n\nSua massa corporea: %f\n", imc);
	
	return 0;
}
