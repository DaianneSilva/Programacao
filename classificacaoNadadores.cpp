#include <stdio.h>

int main () {
	int idade;
	
		printf("Digite a idade do nadador: (a partir dos 5 anos)\n");
		scanf("%d",&idade);
		
			if ((idade>=5)&&(idade<=7))
				printf("\n\n Nadador infantil A.");
			
			if ((idade>=8)&&(idade<=10))
				printf("\n\n Nadador infantil B.");
			
			if ((idade>=11)&&(idade<=13))
				printf("\n\n Nadador juvenil A.");
			
			if ((idade>=14)&&(idade<=17))
				printf("\n\n Nadador juvenil B.");
			
			if (idade>=18)
				printf("\n\n Nadador adulto.");
	
return 0;
}
