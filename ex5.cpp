//Calcular salário
//Leia o valor da hora trabalhada e a quantidade de horas e
//calcule o salário.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	float hr,vlr,total;
	printf("Quantas horas extras voce trabalhou?:\n");
	scanf("%f",&hr);
	printf("qual valor de cada horas?:\n");
	scanf("%f",&vlr);
	total=hr*vlr;
	printf("o valor total do seu salario e:%.2f",total);
	
}
