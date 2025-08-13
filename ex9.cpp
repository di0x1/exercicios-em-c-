//Calcular idade
//Leia o ano atual e o ano de nascimento e calcule a idade.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int ano1, ano2, idade;
	printf("digite o ano que voce nascel: \n");
	scanf("%d",&ano1);
	printf("digite o ano que voce esta: \n");
	scanf("%d",&ano2);
	idade=ano2-ano1;
	printf("sua idade e: %d" , idade);
}

