#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct Aluno_{
	char nome[2][250];
	char dataDeNascimento[250];
	float notas[2];
	float media; 
};

struct Aluno_ Aluno[2];

float calcularMedia(struct Aluno_ *Aluno){
	int j, i;
	float soma;
	for(i = 0; i < 2; i++){
	for(j = 0; j < 2; j++){
	soma += Aluno[i].notas[j];	
	}
	Aluno[i].media = soma / j;
	soma = 0;
	return Aluno[i].media;
}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int i, j;
	float media;
	
	for(i = 0; i < 2; i++){
		printf("Escreva seu nome: ");
		gets(Aluno[i].nome);
		
		printf("Digite sua data de nascimento: ");
		gets(Aluno[i].dataDeNascimento);
		
		for(j = 0; j < 2; j++){
			printf("Digite a %dª nota: ",j + 1);
			scanf("%f",&Aluno[i].notas[j]);
		}
		fflush(stdin);
	}
	
	media = calcularMedia(Aluno);
	
	
	for(i = 0; i < 2; i++){
		printf("Nome: %s\n",Aluno[i].nome);
		
		for(j = 0; j < 2; j++){
			printf("%dª Nota: %.1f\n",j + 1, Aluno[i].notas[j]);
		}
		printf("\n Media: %.1f\n",media);
	}
	
	return 0;
}
