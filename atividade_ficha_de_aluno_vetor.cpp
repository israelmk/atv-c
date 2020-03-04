#include<stdio.h>
#include<stdlib.h>

	


int main (void){
	struct ficha_de_aluno{
	char nome[40];
	char disciplina[40];
	float nota_prova1;
	float nota_prova2;
};

	struct ficha_de_aluno aluno[10];
	
	for (int i=0; i<=10; i++){
		printf("\n --------------cadastro de aluno--------------\n");
		printf("nome do aluno:");
		
		fflush(stdin);
		
		fgets(aluno[i].nome, 40, stdin);
		
		printf("Informe a disciplina:");
		fflush(stdin);
		fgets(aluno[i].disciplina, 40, stdin);
		
		printf("informe a %d.nota da prova1:", i);
		scanf("%f", &aluno[i].nota_prova1);
		printf("informe a %d.nota da prova2:");
		scanf("%f", &aluno[i].nota_prova2);
	
		printf("\n --------------dados do struct--------------\n");
		printf("nome:%s\n", aluno[i].nome);
		printf("disciplina:%s \n", aluno[i].disciplina);
		printf("nota_prova1:%.2f \n", aluno[i].nota_prova1);
		printf("nota_prova2:%.2f \n", aluno[i].nota_prova2);
		
	}
	system("pause");
	return 0;
}
