//. Soma de quadrados Leia dois números inteiros e mostre a soma dos quadrados deles.
#include<stdio.h>
#include<locale.h>
	main(){
		setlocale(LC_ALL, "portuguese");
			int n1,n2,soma;
				printf("me informe os numeros: \n");
				scanf("%d",&n1);
				scanf("%d",&n2);
				soma = (n1*n1)+(n2*n2);
				printf("a soma dos quadrados sao: %d",soma);
				
	}
