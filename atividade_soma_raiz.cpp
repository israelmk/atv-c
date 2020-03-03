#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calcula(float x, float y, float z);

int main (){
	float a,b,c;
	
	printf("informe um numero:");
	scanf("%f", &a);
	printf("informe o segundo numero:");
	scanf("%f", &b);
	printf("informe o terceiro numero:");
	scanf("%f", &c);
	float r =calcula(a,b,c);
	printf("Resultado: %.2f\n", r);
	system("pause");
	return 0;
}
 float calcula(float x, float y, float z){
 	
 	float soma= sqrt(x+y+z);
	 
	 return soma;
 }
