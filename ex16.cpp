//16. Converter Fahrenheit para Celsius
//Leia uma temperatura em Fahrenheit e converta para Celsius:
//C=(F-32)×5/9
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
		float far,cel;
			printf("informe a temperatura em fahrenheit \n");
				scanf("%f",&far);
					cel=(far-32)*5/9;
						printf("a temperatura em celsius %.2f.",cel);
}

