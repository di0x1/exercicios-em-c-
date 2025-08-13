#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma;
	
	printf("informe o 1° número: ");
	scanf("%d", &n1);
	
	printf("informe o 2° número: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("a soma de %d + %d: %d", n1, n2, soma);
} %d, %d
