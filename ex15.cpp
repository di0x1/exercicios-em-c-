// Produto e diferen�a
//Leia dois n�meros inteiros e mostre o produto e a diferen�a entre
//eles
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
		int n1,n2,total;
			printf("me de os numeros: \n");
				scanf("%d",&n1);
					scanf("%d",&n2);
						total=n1-n2;
							printf("a diferenca entre os numeros:%d",total);
}

