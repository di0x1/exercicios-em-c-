// Converter reais para dólares
//Leia um valor em reais e a cotação do dólar e calcule quantos
//dólares pode comprar. //5.43 valor do dolar
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	float real,dolar,total;
	printf("Digite o valor em real: ");
	scanf("%f",&real);
	printf("digite a cotacao do dolar: ");
	scanf("%f",&dolar);
	total=real/dolar;
	printf("quantidade de dolar que voce pode comprar: %.2f" ,  total);
}
