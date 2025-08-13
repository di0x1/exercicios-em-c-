//14. Converter idade em dias
//Leia a idade em anos e calcule quantos dias aproximadamente
//a pessoa viveu (desconsidere anos bissextos).
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int idade,total;
	printf("me fale sua idade: \n");
	scanf("%d",&idade);
	total=idade*365;
	printf("PASSA ATIVIDADE VALENDO NOTA MIN 100 EXC %d", total);
}
