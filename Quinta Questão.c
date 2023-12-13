#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct funcionario_{
	char nome[250], cargo[250];
	float salario;
};

struct funcionario_ funcionario[5];

void teste(struct funcionario_ *funcionario, char cargo[]){
	int i;
	float media, soma;
	for(i = 0; i < 2; i++){
	soma += funcionario[i].salario;
}

printf("Soma: %.1f",soma);
	media = soma;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char cargo[250];
	float media;
	int i;
	
	for(i = 0; i < 2; i++){
	printf("Escreva seu nome: ");
	gets(funcionario[i].nome);
	printf("Escreva seu cargo: ");
	gets(funcionario[i].cargo);
	printf("Digite seu salário: ");
	scanf("%f",&funcionario[i].salario);
	
	fflush(stdin);
}

teste(funcionario, cargo);

	return 0;
}
