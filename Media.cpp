#include<stdio.h>
#include<stdlib.h>

	int main(void)
	{	
  	
  	int n1, n2, n3;
  	float media;
  
  		printf("Digite a primeira nota: \n");
  		scanf("%d",&n1);
  
  		printf("Digite a segunda nota: \n");
  		scanf("%d",&n2);
  		
  		printf("Digite a segunda nota: \n");
  		scanf("%d",&n3);
  
  	//F�rmula
 	media = (n1 + n2 + n3) / 3;
  	
  	//Sa�da
  	printf("\n\nMedia do aluno = %.1f\n",media);
  		
  		if (media >= 6)
  			printf("\nAprovado!\n\n");
  		else
  			printf("\nReprovado!\n\n");
  
  	system("pause");//pausa da tela
  	return 0;
}


