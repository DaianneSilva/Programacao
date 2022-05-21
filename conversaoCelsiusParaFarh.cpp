#include <stdio.h>

int main (void) {
	float tc, tf;
	
		printf("Digite a temperatura em celsius: \n");
		scanf("%f",&tc);
		
	//fórmula
	tf = tc * 9/5 + 32;
	
		printf("\n\nA temperatura em fahrenheit e: %.2f \n",tf);
return 0;
}
