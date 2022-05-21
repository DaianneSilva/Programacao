#include <stdio.h>
#include <math.h>

main () {
	float cat1, cat2, hip;
	
		printf("Qual o tamanho do cateto 1? \n");
		scanf("%f",&cat1);
		
		printf("Qual o tamanho do cateto 2? \n");
		scanf("%f",&cat2);
		
	//fórmula
	hip = pow(cat1, 2) + pow(cat2, 2);
	
		printf("\n\nA hipotenusa e: %f", sqrt(hip));
	
return 0;				
}
