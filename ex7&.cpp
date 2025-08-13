// Antecessor e sucessor
//Leia um número inteiro e mostre o antecessor e o sucessor
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1;
	int ant;
	int scr;
	
	printf("me apresente um numero: \n");
	
	scanf("%d", &n1);
	
	ant = n1-1;
	
	printf("o antessesor do seu numero e:%d",ant);
	
	scr=n1+1;
	
	printf("o sucessor do seu numero e:%d",scr);
	
	return 0;
	
}
