//Volume de uma caixa retangular
//Leia comprimento, largura e altura de uma caixa e calcule o
//volume: V = comprimento × largura × altura
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
		float vol,C,L,H;
		printf("me informe o comprimento:\n");
		scanf("%f",&C);
		printf("me informe a largura:\n");
		scanf("%f",&L);
		printf("me informe altura:\n");
		scanf("%f",&H);
		vol = C*L*H;
		printf("o volume da caixa retangular e: %.2f",vol);
}

