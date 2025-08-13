//Área de um círculo
//Leia o raio de um círculo e calcule a área:
//Area = PI * r2
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	float r, p;
	printf("informe o raio:\n");
	scanf("%f", &r);
	r = r*r;
	p = 3.1416*r;
	printf("a area do circulo e: %f", p);
	
	
}
