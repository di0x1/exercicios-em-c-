//6. Dobro e triplo Leia um número inteiro e exiba o dobro e o triplo dele.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	int n1,db,tp;
	printf("escreva o numero que darei o dobro e o triplo.\n");
	scanf("%d",&n1);
	db = n1*2;
	printf("o dobro e:%d",db,n1);
	tp = n1*3;
	printf("o triplo vai ser:%d",tp,n1);
	
}
