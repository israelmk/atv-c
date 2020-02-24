#include<stdlib.h>
#include<stdio.h>

int main (){
int vel,mvel,velmax; 	
	printf("Informe a velocidade maxima permitida: ");
	scanf("%d", &vel);
	printf("Informe a sua velocidade:");
	scanf("%d", &mvel);
	velmax=mvel-vel;
	if(velmax>1&&velmax<10){
		printf("Multa=50 \n");
	}
	else if(velmax>10&&velmax<31){
		printf("Multa=100 \n");
	}
	else if(velmax>31){
		printf("Multa=200 \n");
	}
	else if(velmax=0){
		printf("Sem multa \n");
	}
	
	system("pause");
	return 0;
	
}
