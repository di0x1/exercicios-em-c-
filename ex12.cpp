//Velocidade m�dia
//Leia a dist�ncia percorrida e o tempo gasto e calcule a
//velocidade m�dia.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
		int dis,temp,velo;
			printf("me informe a distancia em km: \n");
			scanf("%d",&dis);
			printf("me informe o tempo em horas: \n");
			scanf("%d",&temp);
				velo=dis/temp;
					printf("a velocidade media e: %d km",velo);
			
}
