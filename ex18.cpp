//Calcular desconto
//Leia o preço de um produto e um percentual de desconto e
//calcule o novo preço com desconto.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
		float pd1,dsc,total;
			printf("me informe o valor produto: \n");
		scanf("%f",&pd1);
			printf("me informe o desconto: \n");
		scanf("%f",&dsc);
				total=(dsc/100*pd1)-pd1;
			printf("O VALOR DO PRODUTO APOS O DESCONTO: %.2f",total);
	
	
}
	
