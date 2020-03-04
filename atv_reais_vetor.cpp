

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float calcula (float reais);

int main(){
	float soma;
	struct soma{
		float num1;
		
		
	};
	struct soma reais[4];
	
	for (int i=0; i<4; i++ ){
	
	printf("informe um numero:", i);
	scanf("%f", &reais[i].num1);
	soma= reais[i].num1+soma;
	}
	calcula(soma);
	system("pause");
	return 0;
}

	float calcula ( float reais){
		
		printf("o resultado = %.2f", reais);
		system("pause");
		return 0;
	}
