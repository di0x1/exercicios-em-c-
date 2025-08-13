//. Calcular IMC
//Leia peso e altura de uma pessoa e calcule o IMC (Pesquisa
//como é o cálculo).
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	float peso,alt,imc;
	printf("infome seu peso: \n");
	scanf("%f",&peso);
	printf("infome sua altura: \n");
	scanf("%f",&alt);
	imc = peso/(alt*alt);
	printf("seu imc é: %.2f", imc);
	
	
}
