#include <stdio.h>
#include <stdlib.h>

	int main () {
		int seg, h, m, s, res;
			
			printf("Qual o total de segundos de dura��o do evento na fabrica?\n");
			scanf("%d",&seg);
			
		//f�rmula	
		h = seg/3600;
		res = seg % 3600;
		m = res / 60;
		s = res % 60;
		
			printf("O evento durou-> %d:%d:%d horas\n",h,m,s);
	
	return 0;
		
	}
