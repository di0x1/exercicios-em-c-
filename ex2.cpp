#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1 ,n2 ,n3;
	float media;
	
	printf("informe o 1° número: ");
	scanf("%d",&n1);
	
	printf("informe o 2° número: ");
	scanf("%d",&n2);
	
	printf("informe o 3° número: ");
	scanf("%d",&n3);
	
	media = (n1 + n2 + n3) / 3.0;
	
	printf("media: %f", media);
}
