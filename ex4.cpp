//�rea de um c�rculo
//Leia o raio de um c�rculo e calcule a �rea:
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
