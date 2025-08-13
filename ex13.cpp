//Leia um valor e uma porcentagem e calcule o valor acrescido
//dessa porcentagem.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	float  n1,p1,soma;
	printf("me informe o valor que voce quer somar: \n");
	scanf("%f",&n1);
	printf("me informe a porcentagem que voce quer acresentar: \n");
	scanf("%f",&p1);
	soma=(p1/100*n1)+n1;
	printf("ME CHUPA HAHAHAHAHAHAHAHAHAH %.2f",soma);
	
}
